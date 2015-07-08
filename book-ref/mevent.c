#include <ncurses.h>

int main(void)
{
	MEVENT mwhat;
	int ch;
	
	initscr();
	noecho();
	keypad(stdscr,TRUE);

	mousemask(ALL_MOUSE_EVENTS,NULL);

	while(1)
	{
		ch = getch();
		if( ch == KEY_MOUSE )
		{
			getmouse(&mwhat);
			move(0,0);
			clrtoeol();
			printw("%2d %2d",mwhat.y,mwhat.x);
			refresh();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return 0;
}

