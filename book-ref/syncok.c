#include <ncurses.h>

int main(void)
{
	WINDOW *winny;
	int a;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);

	bkgd(COLOR_PAIR(1));
	winny = newwin(5,20,10,30);
	wbkgd(winny,COLOR_PAIR(2));

	for(a=0;a<(COLS*LINES);a++)
		addch('*');

	syncok(winny,TRUE);
	waddstr(winny,"This string is written to the window 'winny'");
	wnoutrefresh(stdscr);
	wnoutrefresh(winny);
	doupdate();
	getch();

	delwin(winny);
	touchwin(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}

