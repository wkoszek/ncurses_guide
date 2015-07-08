#include <ncurses.h>

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the question:\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham5[] = "And by opposing end them?\n";

	initscr();

	addstr(Ham1);
	addstr(Ham3);
	addstr(Ham5);
	refresh();
	getchar();

	endwin();
	return 0;
} 

