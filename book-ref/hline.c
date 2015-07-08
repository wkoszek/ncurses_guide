#include <ncurses.h>

int main(void)
{
	int maxy,maxx,halfx,y,len;
	initscr();

	getmaxyx(stdscr,maxy,maxx);
	halfx = maxx >> 1;				/* x/2 */
	len = 1;

	for(y=0;y<maxy;y++,len++)
	{
		mvhline(y,halfx-len,0,len+len);
	}
	refresh();
	getch();

	endwin();
	return 0;
}

