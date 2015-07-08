#include <ncurses.h>

#define NEW_COLOR 1
#define RED 1000
#define GREEN 750
#define BLUE 750

int main(void)
{
	initscr();
	start_color();
	if(!can_change_color())
		addstr("This probably won't work, but anyway:\n");

	init_color(NEW_COLOR,RED,GREEN,BLUE);

	init_pair(1,NEW_COLOR,COLOR_BLACK);
	attrset(COLOR_PAIR(1));
	printw("This is the new color %d.\n",NEW_COLOR);
	refresh();
	getchar();

	endwin();
	return 0;
} 

