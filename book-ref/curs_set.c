#include <ncurses.h>

int main(void)
{
	int r;
	initscr();

/* first, turn the cursor off */
	r = curs_set(0);
	if(r == ERR)
	{
		endwin();
		puts("This terminal cannot change the cursor.");
		return(1);
	}
	addstr("The cursor has been turned off: ");
	refresh();
	getch();

/* second, turn the cursor on */
	curs_set(1);
	move(1,0);
	addstr("The cursor now on: ");
	refresh();
	getch();

/* third, turn the cursor very on */
	curs_set(2);
	move(2,0);
	addstr("The cursor is now very on: ");
	refresh();
	getch();

	curs_set(r);		/* restore cursor */
	endwin();
	return 0;
}

