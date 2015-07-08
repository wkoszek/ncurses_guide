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
	wrefresh(peri);
	getch();

	wtouchln(stdscr,2,5,1);
	mvwin(peri,12,40);
	wnoutrefresh(stdscr);
	wnoutrefresh(peri);
	doupdate();
	getch();

	endwin();
	return 0;
}

