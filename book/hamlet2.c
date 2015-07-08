#include <ncurses.h>

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the question:\n";
	char Ham2[] = "Whether 'tis nobler in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham5[] = "And by opposing end them?\n";

	initscr();

	addstr(Ham1);
	addstr(Ham3);
	addstr(Ham5);
	refresh();
	getchar();		/* wait for key press */

	move(1,0);		/* position cursor */
	insertln();		/* insert blank line, scroll text down */
	addstr(Ham2);		/* line to insert */
	refresh();
	getchar();		/* wait for key press */

	endwin();
	return 0;
} 

