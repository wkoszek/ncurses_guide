#include <ncurses.h>

int main(void)
{
	int maxy,maxx,halfy,x,len;
	initscr();

	getmaxyx(stdscr,maxy,maxx);
	halfy = maxy >> 1;				/* y/2 */
	len = 1;

	for(x=0;x<maxx;x++)
	{
		mvvline(halfy-len,x,0,len+len);
		if( !(x % 7)) len++;
	}
	refresh();
	getch();

	endwin();
	return 0;
}

