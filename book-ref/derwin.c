#include <ncurses.h>

int main(void)
{
	WINDOW *pops,*sonny;
	int x2,y2,x4,y4;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);
	x2 = COLS >> 1;
	y2 = LINES >> 1;
	x4 = (COLS - x2) >> 1;
	y4 = (LINES - y2)  >> 1;

/* create parent and subwindow */
	pops = newwin(y2,x2,y4,x4);
	sonny = derwin(pops,y4,x4,2,2);
	if(sonny == NULL)
	{
			endwin();
			puts("Unable to create subwindow\n");
			return(1);
	}

/* color windows and splash some text */
	wbkgd(pops,COLOR_PAIR(1));
	waddstr(pops,"Hello, son.");
	wbkgd(sonny,COLOR_PAIR(2));
	waddstr(sonny,"Hello, Dad.");
	wrefresh(pops);
	getch();

	endwin();
	return 0;
}

