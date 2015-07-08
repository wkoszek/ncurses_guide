#include <ncurses.h>

int main(void)
{
	WINDOW *alpha,*beta;
	int x;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_WHITE,COLOR_RED);

/* create and populate the original window */
	alpha = newwin(5,30,0,0);
	wbkgd(alpha,COLOR_PAIR(1));
	for(x=0;x<75;x++)
		wprintw(alpha,"O ");
	wrefresh(alpha);
	getch();

/* duplicate window alpha to window beta */
	beta = dupwin(alpha);
	if( beta == NULL)
	{
		endwin();
		puts("Error creating duplicate window");
		return 1;
	}

/* move new window and change color */
	mvwin(beta,10,40);
	wbkgd(beta,COLOR_PAIR(2));
	mvwaddstr(alpha,0,0,"This is window Alpha!");
	mvwaddstr(beta,0,0,"This is window Beta!");
	wrefresh(alpha);
	wrefresh(beta);
	getch();

	endwin();
	return 0;
}

