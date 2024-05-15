#include <ncurses.h>
 
int main(void)
{
	char text[] = "Greetings from NCurses!";
	char *t;

	initscr();			/* initialize NCurses */
	t = text;			/* initialize the pointer */

	while(*t)			/* loop through the whole string */
	{
		addch(*t++);		/* put one char to curscr */
		refresh();		/* update the screen */
		napms(100);		/* delay a bit to see the display */
	}				/* end while */
	getchar();			/* wait here */

	endwin();			/* clean up NCurses */	
	return 0;			/* keep the shell happy */
}

