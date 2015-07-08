#include <curses.h>
#include <stdlib.h>

#define FILENAME "gettysburg.txt"
#define TALL 24
#define WIDE 19
#define SPACER 5

void bomb(char *message);

int main()
{
	WINDOW *p,*s1,*s2,*s3;
	FILE *f;
	int ch;
	
	initscr();

/* create a new pad */
	p = newpad(200,WIDE+1);
	if( p == NULL )
		bomb("Unable to create new pad\n");

/* create three subpads */
	s1 = subpad(p,TALL,WIDE+1,0,0);
	if( s1 == NULL) bomb("Unable to create subpad 1\n");
	s2 = subpad(p,TALL,WIDE+1,TALL,0);
	if( s2 == NULL) bomb("Unable to create subpad 2\n");
	s3 = subpad(p,TALL,WIDE+1,2*TALL,0);
	if( s3 == NULL) bomb("Unable to create subpad 3\n");

/* open the file */
	f = fopen(FILENAME,"r");
	if( f == NULL)
		bomb("Unable to open file\n");

/* display file's contents on the pad */
	while( (ch=fgetc(f)) != EOF)
		waddch(p,ch);
	fclose(f);

/* display the pad's contents on the screen */
	prefresh(s1, 0, 0, 0,               0, TALL-1,            WIDE);
	prefresh(s2, 0, 0, 0,     WIDE+SPACER, TALL-1,   WIDE*2+SPACER);
	prefresh(s3, 0, 0, 0, WIDE*2+SPACER*2, TALL-1, WIDE*3+SPACER*2);
	wgetch(p);

	endwin();
	return 0;
}

void bomb(char *message)
{
		addstr(message);
		refresh();
		endwin();
		exit(1);
}

