#include <ncurses.h>

int main(void)
{
	int x = 0;
	int stdbot;

	initscr();
	stdbot = stdscr->_maxy;
	
	scrollok(stdscr,TRUE);
	setscrreg(3,stdbot-3);

	attrset(A_BOLD);
	mvaddstr(stdbot-2,0,"Press Ctrl+C to stop.");
	attroff(A_BOLD);
	move(0,0);
	while(1)
	{
		printw("%d\t",x);
		x++;
		refresh();
	}

	endwin();
	return 0;
}

