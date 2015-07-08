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

	waddstr(p,"New pad created");
	prefresh(p,0,0,0,0,1,15);

	getch();
	endwin();
	return 0;
}

