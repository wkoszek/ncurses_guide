#include <ncurses.h>

int main(void)
{
	WINDOW *subby,*sonny;
	int row,col;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_YELLOW,COLOR_RED);

	subby = newwin(10,30,10,40);
	wbkgd(subby,COLOR_PAIR(1));
	getparyx(subby,row,col);
	wprintw(subby,"This subwin's org: %d, %d.",row,col);
	wrefresh(subby);
	
	sonny = subwin(subby,7,30,13,40);
	wbkgd(sonny,COLOR_PAIR(2));
	getparyx(sonny,row,col);
	wprintw(sonny,"This subwin's org: %d, %d.",row,col);
	wrefresh(sonny);

	getch();

	endwin();
	return 0;
}

