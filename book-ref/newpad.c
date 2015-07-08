#include <ncurses.h>

int main(void)
{
	WINDOW *p;
	
	initscr();

	p = newpad(50,100);		 /* create a new pad */
	if( p == NULL )
	{
		endwin();
		puts("Unable to create new pad");
		return(1);
	}

	addstr("New pad created\n");
	refresh();
	getch();
	
	endwin();
	return 0;
}

