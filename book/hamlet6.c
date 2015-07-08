#include <ncurses.h>

int main(void)
{
	char Ham1[] = "To be, or not to be: that is the question:\n";
	char Ham2[] = "Whether 'tis nobler in the mind to suffer\n";
	char Ham3[] = "The slings and arrows of outrageous fortune,\n";
	char Ham4[] = "Or to take arms against a sea of troubles,\n";
	char Ham5[] = "And by opposing end them?\n";
	char *ob = "obnoxious";
	int c;

	initscr();

	addstr(Ham1);
	addstr(Ham2);
	addstr(Ham3);
	addstr(Ham4);
	addstr(Ham5);
	refresh();
	getchar();		/* wait for key press */

/* First, remove "outrageous" */

	move(2,25);		/* move to the start of "outrageous" */
	for(c=0;c<10;c++)	/* only loop 2 times */
	{
		delch();	/* gobble! */
		refresh();	/* update screen (cursor doesn't move) */
		napms(100);	/* pause */
	}

/* Second, insert "obnoxious" */

	move(2,25);		/* reset cursor */
	for(c=0;c<9;c++)
	{
		insch( *(ob+8-c) );
		refresh();
		napms(100);
	}
	getchar();

	endwin();
	return 0;
} 

