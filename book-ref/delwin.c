#include <ncurses.h>

#define ALPHA_W 30
#define ALPHA_H 5

int main(void)
{
	WINDOW *alpha;
	int x,y;
	
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);

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
	addstr("Press Enter to remove the window:\n");
	refresh();
	wbkgd(alpha,COLOR_PAIR(1));
	mvwaddstr(alpha,2,12,"Hello!");
	wrefresh(alpha);
	getch();

	delwin(alpha);
	addstr("Window removed: press Enter to clear it:\n");
	refresh();
	getch();

	touchwin(stdscr);
	addstr("Done!\n");
	refresh();
	getch();
	
	endwin();
	return 0;
}

