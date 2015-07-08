#include <ncurses.h>

int main(void)
{
	char first[24];
	char last[32];

	initscr();
	addstr("What is your first name? ");
	refresh();
	getstr(first);

	addstr("What is your last name? ");
	refresh();
	getstr(last);

	printw("Pleased to meet you, %s %s!",first,last);
	refresh();
	getchar();

	endwin();
	return 0;
}

