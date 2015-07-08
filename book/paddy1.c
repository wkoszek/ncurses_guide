#include <curses.h>
#include <stdlib.h>

#define FILENAME "gettysburg.txt"
#define TALL 24
#define WIDE 19
#define SPACER 5

void bomb(char *message);

int main()
{
	WINDOW *p;
	FILE *f;
	int ch;
	
	initscr();

/* create a new pad */
	p = newpad(200,WIDE+1);
	if( p == NULL )
		bomb("Unable to create new pad\n");

/* open the file */
	f = fopen(FILENAME,"r");
	if( f == NULL)
		bomb("Unable to open file\n");

/* display file's contents on the pad */
	while( (ch=fgetc(f)) != EOF)
		waddch(p,ch);
	fclose(f);

/* display the pad's contents on the screen */
	prefresh(p,      0, 0, 0,               0, TALL-1,            WIDE);
	prefresh(p,   TALL, 0, 0,     WIDE+SPACER, TALL-1,   WIDE*2+SPACER);
	prefresh(p, TALL*2, 0, 0, WIDE*2+SPACER*2, TALL-1, WIDE*3+SPACER*2);
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

