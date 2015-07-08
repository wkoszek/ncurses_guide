#include <ncurses.h>

int main(void)
{
	WINDOW *sonny;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);

	sonny = subwin(stdscr,5,20,10,30);

	bkgd(COLOR_PAIR(1));
	addstr("Hello, son.");
	wbkgd(sonny,COLOR_PAIR(2));
	waddstr(sonny,"Hello, Dad!");
	refresh();
	getch();

	mvderwin(sonny,0,0);
	wbkgd(sonny,COLOR_PAIR(2));
	wrefresh(sonny);
	getch();

	endwin();
	return 0;
}

