#include <ncurses.h>

int main(void)
{
	int y,x;

	x = y = 0;

	initscr();

	setsyx(5,5);
	getsyx(y,x);
	addstr("The cursor on the virtual screen is set to 5, 5.\n");
	printw("And getsyx() reports %d, %d.\n",y,x);
	refresh();
	getch();

	endwin();
	return 0;
}

