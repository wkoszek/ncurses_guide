#include <ncurses.h>

int main(void)
{
	char name[80];

	filter();
	initscr();

	addstr("With the filter on, all of Curses fits on only\n");
	addstr("one line of the screen.\n");
	refresh();
	getch();

	mvaddstr(0,0,"Enter your name: ");
	refresh();
	getnstr(name,79);
	mvprintw(0,0,"Pleased to meet you, %s!\n",name);
	refresh();
	getch();

	endwin();
	return 0;
}

