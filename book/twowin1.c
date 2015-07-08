#include <ncurses.h>

int main(void)
{
	WINDOW *two;		/* pointer for new window */
	
	initscr();

	addstr("This is the original window, stdscr.\n");
	refresh();
	getchar();

	two = newwin(0,0,0,0);
	if( two == NULL)
	{
		addstr("Unable to allocate memory for new window.");
		endwin();
		return(1);
	}
	waddstr(two,"This is the new window created!\n");

	getch();

	endwin();
	return 0;
}

