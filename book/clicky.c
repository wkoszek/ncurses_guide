#include <ncurses.h>

int main(void)
{
	MEVENT mort;
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
			clear();
			getmouse(&mort);
			switch(mort.bstate)
			{
				case BUTTON1_PRESSED:
					mvaddstr(0,0,"Button 1 Pressed!");
					break;
				case BUTTON1_RELEASED:
					mvaddstr(1,0,"Button 1 Released!");
					break;
				case BUTTON1_CLICKED:
					mvaddstr(2,0,"Button 1 Clicked!");
					break;
				case BUTTON1_DOUBLE_CLICKED:
					mvaddstr(3,0,"Button 1 Dbl-Clicked!");
					break;
				case BUTTON2_PRESSED:
					mvaddstr(0,20,"Button 2 Pressed!");
					break;
				case BUTTON2_RELEASED:
					mvaddstr(1,20,"Button 2 Released!");
					break;
				case BUTTON2_CLICKED:
					mvaddstr(2,20,"Button 2 Clicked!");
					break;
				case BUTTON2_DOUBLE_CLICKED:
					mvaddstr(3,40,"Button 2 Dbl-Clicked!");
					break;
				case BUTTON3_PRESSED:
					mvaddstr(0,40,"Button 3 Pressed!");
					break;
				case BUTTON3_RELEASED:
					mvaddstr(1,40,"Button 3 Released!");
					break;
				case BUTTON3_CLICKED:
					mvaddstr(2,40,"Button 3 Clicked!");
					break;
				case BUTTON3_DOUBLE_CLICKED:
					mvaddstr(3,40,"Button 3 Dbl-Clicked!");
					break;
				default:
					break;
			}
			refresh();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return 0;
}

