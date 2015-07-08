#include <ncurses.h>

int main(void)
{
	int c;

	initscr();

	meta(stdscr,TRUE);
	addstr("Input is now 8 bits wide.\n");
	refresh();
	c = getch();
	printw("\nAnd getch() reads the value %d.\n",c);
	meta(stdscr,FALSE);
	addstr("Input is now 7 bits wide.\n");
	refresh();
	c = getch();
	printw("\nAnd getch() reads the value %d.\n",c);

	refresh();
	getch();

	endwin();
	return 0;
}

