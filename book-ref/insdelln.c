#include <ncurses.h>

int main(void)
{
	int y,x,c,halfy;

	initscr();

	getmaxyx(stdscr,y,x);
	halfy = y >> 1;

	for(c=0;c<y;c++)
		mvprintw(c,15,"This is amazing row %d!\n",c);
	refresh();
	getch();

	move(halfy,0);
	for(c=0;c<halfy;c++)
	{
		insdelln(1);
		refresh();
		napms(100);
	}

	move(0,0);
	for(c=0;c<halfy;c++)
	{
		insdelln(-1);
		refresh();
		napms(100);
	}

	endwin();
	return 0;
}

