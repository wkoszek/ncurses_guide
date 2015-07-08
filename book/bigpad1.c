#include <curses.h>

int main()
{
	WINDOW *p;
	
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

	endwin();
	return 0;
}

