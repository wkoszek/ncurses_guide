#include <ncurses.h>

int main(void)
{
	int y,x,r;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);

	getmaxyx(stdscr,y,x);
	printw("Window is now %d rows and %d columns.\n",y,x);
	addstr("Press Enter to re-size the terminal window:\n");
	refresh();
	getch();

	r = resizeterm(y-10,x-20);
	bkgd(COLOR_PAIR(1));
	if(r == OK)
		addstr("Terminal successfully made larger!\n");
	else
		addstr("Unable to re-size the terminal.\n");
	getmaxyx(stdscr,y,x);
	printw("Window is now %d rows and %d columns.\n",y,x);
	refresh();
	getch();

	endwin();
	return 0;
}

