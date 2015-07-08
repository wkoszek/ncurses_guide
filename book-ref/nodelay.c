#include <ncurses.h>

int main(void)
{
	int value = 0;

	initscr();

	nodelay(stdscr,TRUE);		/* turn off getch() wait */
	addstr("Press the Spacebar to stop the insane loop!\n");
	while(1)
	{
		printw("%d\r",value++);
		refresh();
		if(getch() == ' ') break;
	}
	getch();
	
	endwin();
	return 0;
}

