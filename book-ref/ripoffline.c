#include <ncurses.h>

int ruler(WINDOW *w,int cols)
{
	int x;

	waddch(w,'|');
	for(x=1;x<cols;x++)
	{
		if(x % 5)
			waddch(w,'-');
		else
			waddch(w,'+');
	}
	waddch(w,'|');
	wnoutrefresh(w);
	return 0;
}

int main(void)
{
	ripoffline(1,ruler);
	initscr();

	addstr("The ruler has been placed atop the screen.\n");
	printw("The standard screen is now %d rows high.\n",LINES);
	refresh();
	getch();

	endwin();
	return 0;
}

