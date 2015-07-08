#include <ncurses.h>

int main(void)
{
	MEVENT mort;
	int ch;
	
	initscr();
	noecho();
	keypad(stdscr,TRUE);

	mousemask(BUTTON1_CLICKED,NULL);
	while(1)
	{
		ch = getch();
		if( ch == KEY_MOUSE )
		{
			getmouse(&mort);
			move(0,0);
			clrtoeol();
			printw("Mouse clicked at %d, %d",mort.y,mort.x);
			refresh();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return 0;
}

