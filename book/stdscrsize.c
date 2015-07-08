#include <ncurses.h>

int main(void)
{
	initscr();
	
	printw("Window size is %d rows, %d columns.\n",LINES,COLS);
	refresh();
	getchar();

	endwin();
	return 0;
}

