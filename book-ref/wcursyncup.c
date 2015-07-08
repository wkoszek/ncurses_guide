#include <ncurses.h>

int main(void)
{
	WINDOW *sonny;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);

	bkgd(COLOR_PAIR(1));
	sonny = subwin(stdscr,5,20,10,30);
	wbkgd(sonny,COLOR_PAIR(2));

	waddstr(sonny,"This string is written to the window 'sonny'");
	wnoutrefresh(stdscr);
	wnoutrefresh(sonny);
	doupdate();
	getch();

	wcursyncup(sonny);
	refresh();
	getch();

	endwin();
	return 0;
}

