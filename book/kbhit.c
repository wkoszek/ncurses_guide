#include <ncurses.h>

int kbhit(void)
{
	int delay_stat,ch,r;

/* turn off getch() blocking and echo */
	nodelay(stdscr,TRUE);
	noecho();

/* check for input */	
	ch = getch();
	if( ch == ERR)			/* no input */
		r = FALSE;
	else					/* input */
	{
		r = TRUE;
		ungetch(ch);
	}

/* restore block and echo */
	echo();
	nodelay(stdscr,FALSE);
	return(r);
}
		
int main(void)
{
	char name[80];

	initscr();

	addstr("Press any key to end this program:");
	while(!kbhit())
		;

	endwin();
	return 0;
}

