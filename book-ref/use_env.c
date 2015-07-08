#include <ncurses.h>

int main(void)
{
	use_env(FALSE);
	initscr();

	printw("LINES = %d\n",LINES);
	printw("COLS = %d\n",COLS);
	refresh();
	getch();

	endwin();
	return 0;
}

