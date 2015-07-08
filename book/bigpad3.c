#include <curses.h>

int main()
{
	WINDOW *p;
	int x,c;
	
	initscr();

/* create a new pad */
	p = newpad(50,100);
	if( p == NULL )
	{
		addstr("Unable to create new pad");
		refresh();
		endwin();
		return(1);
	}

	addstr("New pad created");
	refresh();
	getch();

	if( delwin(p)==OK)
			addstr("...and now it's gone!\n");
	else
			addstr("...and it's still there!\n");
	refresh(); getch();

	endwin();
	return 0;
}

