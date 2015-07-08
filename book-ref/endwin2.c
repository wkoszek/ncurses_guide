#include <stdlib.h>
#include <ncurses.h>

int main(void)
{
	initscr();
	
	addstr("Press Enter to go to the shell....:\n");
	refresh();
	getch();

	endwin();
	system("`echo $SHELL`");

	addstr("Back safe and sound....\n");
	refresh();
	getch();

	endwin();
	return 0;
}

