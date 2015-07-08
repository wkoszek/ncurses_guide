#include <ncurses.h>

int main(void)
{
	int x,y;
	
	initscr();
	
	getmaxyx(stdscr,y,x);
	printw("Window size is %d rows, %d columns.\n",y,x);
	refresh();
	getchar();

	endwin();
	return 0;
}

