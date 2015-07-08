#include <ncurses.h>

#define ALPHA_W 30
#define ALPHA_H 5

int main(void)
{
	WINDOW *alpha;
	int x,y;

/* set things up */	
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);

/* Calculate the window origin coordinates that will place
   the window at the center of the standard screen */
	x = (COLS - ALPHA_W) >> 1;
	y = (LINES - ALPHA_H) >> 1;

	addstr("Creating new window....\n");
	refresh();
	alpha = newwin(ALPHA_H,ALPHA_W,y,x);
	if( alpha == NULL)
	{
		endwin();
		puts("Problem creating window");
		return(1);
	}

	addstr("Displaying window:\n");
	refresh();
	wbkgd(alpha,COLOR_PAIR(1));
	mvwaddstr(alpha,2,12,"Hello!");
	wrefresh(alpha);

	getch();

	endwin();
	return 0;
}

