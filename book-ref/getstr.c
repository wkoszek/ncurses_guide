#include <ncurses.h>

int main(void)
{
	char first[4],last[4];

	initscr();
	addstr("Enter the first 3 letters of your first name? ");
	refresh();
	getnstr(first,3);

	addstr("Enter the first 3 letters of your last name? ");
	refresh();
	getnstr(last,3);

	printw("Your secret agent name is %s%s!",first,last);
	refresh();
	getch();

	endwin();
	return 0;
}

