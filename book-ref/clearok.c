#include <ncurses.h>

int main(void)
{
	int x;

	initscr();

	for(x=0;x<350;x++)		/* fills screen with junk */
		printw("-0- ");
	refresh();
	getch();

	mvaddstr(5,20,"Holy updates, Batman!");
	clearok(stdscr,TRUE);
	refresh();
	getch();

	endwin();
	return 0;
}

