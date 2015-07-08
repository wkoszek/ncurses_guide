#include <curses.h>

int main()
{
	WINDOW *fred,*barney;

	initscr();

/* Build window & wait */
	fred = newwin(0,0,0,0);
	waddstr(fred,"This is the original window, Fred.\n");
	wrefresh(fred);
	getch();

/* Create and show barney */
	barney = dupwin(fred);
	waddstr(barney,"This is the Barney copy of window Fred.\n");
	wrefresh(barney);
	getch();

/* Go back to fred */
	waddstr(fred,"Nice to see you again!\n");
	wrefresh(fred);
	getch();

/* One more time to barney */
	waddstr(barney,"And Barney says 'Hi' as well.\n");
	touchwin(barney);
	wrefresh(barney);

	endwin();
	return(0);
}

