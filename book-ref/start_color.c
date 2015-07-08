#include <ncurses.h>
#include <stdlib.h>

void bomb(int r);

int main(void)
{
	initscr();

/* first test for color ability of the terminal */
	if(!has_colors()) bomb(1);

/* next attempt to initialize curses colors */
	if(start_color() != OK) bomb(2);

/* colors are okay; continue */

	printw("Colors have been properly initialized.\n");
	printw("Congratulations!\n");
	printw("Curses reports that you can use %d colors,\n",COLORS);
	printw("and %d color pairs.",COLOR_PAIRS);
	refresh();
	getch();

	endwin();
	return 0;
}

void bomb(int r)
{
	endwin();
	printf("Color problem %d\n",r);
	exit(r);
}

