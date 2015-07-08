#include <ncurses.h>

void showhelp(void);

WINDOW *help;

int main(void)
{
	int ch;
	
	initscr();
	
/* build help menu */
	if((help = newwin(0,0,0,0)) == NULL)
	{
		addstr("Unable to allocate window memory\n");
		endwin();
		return(1);
	}
	mvwaddstr(help,6,32,"Help menu Screen");
	mvwaddstr(help,9,28,"Press the ~ key to quit");
	mvwaddstr(help,12,28,"Press ENTER to go back");

/* now start the program loop */

	addstr("Typer Program\n");
	addstr("Press + for help:\n\n");
	refresh();
	noecho();
	do
	{
		ch = getch();
		refresh();
		if(ch == '+')
			showhelp();
		else
			addch(ch);
	} while (ch != '~');
	
	endwin();
	return 0;
}

void showhelp(void)
{

	wrefresh(help);
	getchar();				/* wait for key press */

	refresh();
}

