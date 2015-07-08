#include <ncurses.h>

int main(void)
{
	int key;
	
	initscr();

	noecho();			/* turn input echo off */
	addstr("Type your name: ");
	while( (key=getch()) != '\n')
	{
		switch(key)
		{
			case 'a':
				addch('A');
				break;
			case 'e':
				addch('E');
				break;
			case 'i':
				addch('I');
				break;
			case 'o':
				addch('O');
				break;
			case 'u':
				addch('U');
				break;
			default:
				addch(key);
				break;
		}
		refresh();
	}
	getch();

	endwin();
	return 0;
}

