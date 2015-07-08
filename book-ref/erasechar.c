#include <ncurses.h>

int main(void)
{
	char ch;

	initscr();

	ch = erasechar();
	printw("The Erasechar is 0x%02x or %s\n",ch,unctrl(ch));
	refresh();
	getch();

	endwin();
	return 0;
}

