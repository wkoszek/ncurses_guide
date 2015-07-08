#include <ncurses.h>

int main(void)
{
	WINDOW *tinkie;
	MEVENT mwhat;
	int ch,row,col;
	
	initscr();
	noecho();
	mousemask(ALL_MOUSE_EVENTS,NULL);

	tinkie = newwin(LINES-4,COLS-4,2,1);
	keypad(tinkie,TRUE);

	while(1)
	{
		ch = wgetch(tinkie);
		if( ch == KEY_MOUSE )
		{
			getmouse(&mwhat);
			row = mwhat.y;
			col = mwhat.x;
			wmouse_trafo(tinkie,&row,&col,FALSE);
			mvwaddch(tinkie,row,col,'*');
			refresh();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return 0;
}

