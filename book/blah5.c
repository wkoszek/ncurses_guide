#include <ncurses.h>

int main(void)
{
	int c,y,x,cmax;

	initscr();
		
	getmaxyx(stdscr,y,x);
	cmax = (x * y) / 5;
	for(c=0;c<cmax;c++) addstr("blah ");
	refresh();
	getchar();

	move(5,20);		/* Setup the cursor */
	clrtobot();		/* Clear to end of line */
	refresh();
	getchar();

	endwin();
	return 0;
}

