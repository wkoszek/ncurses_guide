#include <curses.h>

#define FILENAME "gettysburg.txt"

int main()
{
	FILE *text;
	WINDOW *lister;
	int maxy,maxx,ch;
	
	initscr();
	getmaxyx(stdscr,maxy,maxx);
	
/* create window lister */
	lister = newwin(maxy,maxx/2,0,maxx/4);
	if( lister == NULL)
	{
			addstr("unable to create window\n");
			refresh(); getch();
			endwin();
			return(1);
	}

/* open the file */
	text = fopen(FILENAME,"r");
	if( text == NULL )
	{
			addstr("unable to open file\n");
			refresh(); getch();
			endwin();
			return(2);
	}

/* display the file's contents */
	do
	{
			ch = fgetc(text);
			waddch(lister,ch);
			wrefresh(lister);
	} while (ch != EOF);
	fclose(text);
	getch();

	endwin();
	return(0);
}

