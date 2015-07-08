#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("This terminal ");
	if(has_il())
		addstr("has ");
	else
		addstr("does not have ");
	addstr("insert/delete line abilities");
	refresh();
	getch();

	endwin();
	return 0;
}

