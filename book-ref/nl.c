#include <ncurses.h>

int main(void)
{
	int ch = '\0';
	
	initscr();

	nonl();
	while(ch != 'z')
		ch = getch();

	endwin();
	return 0;
}

