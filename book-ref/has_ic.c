#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("This terminal ");
	if(has_ic())
		addstr("has ");
	else
		addstr("does not have ");
	addstr("insert/delete character abilities");
	refresh();
	getch();

	endwin();
	return 0;
}

