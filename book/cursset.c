#include <curses.h>

int main()
{
	initscr();

/* first, turn the cursor off */
	curs_set(0);
	addstr("  <- The cursor has been turned off");
	move(0,0);
	refresh();
	getchar();

/* second, turn the cursor on */
	curs_set(1);
	addstr("\n  <- The cursor now on");
	move(1,0);
	refresh();
	getchar();

/* third, turn the cursor very on */
	curs_set(2);
	addstr("\n  <- The cursor is now very on");
	move(2,0);
	refresh();
	getchar();

	endwin();
	return(0);
}

