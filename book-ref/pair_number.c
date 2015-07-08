#include <ncurses.h>

int main(void)
{
	int c,p;

	initscr();
	start_color();

	init_pair(1,COLOR_RED,COLOR_WHITE);

	c = COLOR_PAIR(1);
	p = PAIR_NUMBER(c);
	printw("COLOR_PAIR(1) = %d\n",c);
	printw("PAIR_NUMBER(%d) = %d\n",c,p);
	refresh();
	getch();

	endwin();
	return 0;
}

