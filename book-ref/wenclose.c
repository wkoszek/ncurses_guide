#include <ncurses.h>

int main(void)
{
	WINDOW *target;
	MEVENT eek;
	int ch;
	
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_CYAN);
	noecho();
	keypad(stdscr,TRUE);

	target = newwin(5,3,9,39);
	wbkgd(target,COLOR_PAIR(1));
	wnoutrefresh(stdscr);
	wnoutrefresh(target);
	doupdate();

	mousemask(BUTTON1_CLICKED,NULL);
	while(1)
	{
		ch = getch();
		if( ch == KEY_MOUSE )
		{
			getmouse(&eek);
			if(wenclose(target,eek.y,eek.x))
			{
				beep();
				touchwin(target);
				wnoutrefresh(target);
			}
			else
			{
				mvaddch(eek.y,eek.x,'*');
				wnoutrefresh(stdscr);
			}
			doupdate();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return 0;
}

