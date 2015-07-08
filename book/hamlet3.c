#include <ncurses.h>

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the question:\n";
	char Ham2[] = "Whether 'tis nobler in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham4[] = "Or to take arms against a sea of troubles,\n";
	char Ham5[] = "And by opposing end them?\n";

	initscr();

	addstr(Ham1);
	addstr(Ham3);
	addstr(Ham5);
	refresh();
	getchar();

	move(1,0);		/* position cursor */
	insertln();		/* insert blank line, scroll text down */
	addstr(Ham2);		/* line to insert */
	refresh();
	getchar();

	move(3,0);
	insertln();		/* insert blank line at line 4 */
	addstr(Ham4);		/* add line 4 */
	refresh();
	getchar();

	endwin();
	return 0;
} 

