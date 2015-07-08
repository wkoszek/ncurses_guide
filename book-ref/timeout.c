#include <ncurses.h>

#define DELAY 1000

int main(void)
{
	int ch;

	initscr();

	timeout(DELAY);
	printw("The timeout delay has been set to %d milliseconds.\n",DELAY);
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

