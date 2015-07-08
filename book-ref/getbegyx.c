#include <ncurses.h>

int main(void)
{
	int row,col;
	WINDOW *peri;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);

	peri = newwin(5,30,2,30);
	wbkgd(peri,COLOR_PAIR(1));
	waddstr(peri,"I am the peripatetic window");

	getbegyx(peri,row,col);
	printw("The origin for window %s is row %d, column %d.\n",\
			"peri",row,col);
	refresh();
	wrefresh(peri);
	getch();

	wtouchln(stdscr,2,5,1);
	mvwin(peri,12,40);
	wrefresh(peri);
	getbegyx(peri,row,col);
	printw("The origin for window %s is now row %d, column %d.\n",\
			"peri",row,col);
	refresh();
	getch();

	endwin();
	return 0;
}

