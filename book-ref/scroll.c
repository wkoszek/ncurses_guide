#include <ncurses.h>

int main(void)
{
	initscr();

	scrollok(stdscr,TRUE);
	mvaddstr(LINES/2,0,"Watch me scroll up!");
	refresh();
	getch();

	scroll(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}

