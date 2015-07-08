#include <ncurses.h>

int main(void)
{
	WINDOW *alpha,*beta;
	int half,size,x;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_WHITE,COLOR_RED);

/* create and color two side-by-side windows */
	half = COLS >> 1;
	size = half * COLS;
	size >>= 1;
	alpha = newwin(LINES,half-1,0,0);
	wbkgd(alpha,COLOR_PAIR(1));
	beta = newwin(LINES,half-1,0,half);
	wbkgd(beta,COLOR_PAIR(2));

/* populate the windows with text */
	for(x=0;x<size;x++)
	{
		wprintw(alpha,"O ");
		wprintw(beta," X");
	}
	wrefresh(alpha);
	wrefresh(beta);
	getch();

/* copy from window beta to window alpha */
	copywin(beta,alpha,10,5,10,5,15,30,TRUE);
	wrefresh(alpha);
	getch();

	endwin();
	return 0;
}

