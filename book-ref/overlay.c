#include <ncurses.h>

int main(void)
{
	WINDOW *alpha,*beta;
	int x;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_WHITE,COLOR_RED);

/* create and color two side-by-side windows */
	alpha = newwin(5,30,0,0);
	wbkgd(alpha,COLOR_PAIR(1));
	beta = newwin(5,30,1,2);
	wbkgd(beta,COLOR_PAIR(2));

/* populate the windows with text */
	for(x=0;x<75;x++)
	{
		wprintw(alpha,"O ");
		wprintw(beta," X");
	}
	wrefresh(alpha);
	wrefresh(beta);
	getch();

/* copy from window beta to window alpha */
	overlay(beta,alpha);
	wrefresh(alpha);
	wrefresh(beta);
	getch();

	endwin();
	return 0;
}

