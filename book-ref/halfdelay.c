#include <ncurses.h>

#define DELAY 10

int main(void)
{
	int ch;

	initscr();

	halfdelay(DELAY);
	printw("Half delay has been set to %d/10 seconds.\n",DELAY);
	addstr("Try to type in your name fast enough:\n");
	refresh();

	do
	{
		ch = getch();
		if(ch == '\n')
			break;
	} while(ch != ERR);

	mvaddstr(5,0,"Hope you got it all in!");
	refresh();
	getch();

	endwin();
	return 0;
}

