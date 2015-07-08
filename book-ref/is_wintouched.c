#include <ncurses.h>

int main(void)
{
	WINDOW *fred;

 	initscr();
	fred = newwin(0,0,0,0);

	wrefresh(fred);			/* Initial write of fred */
	waddstr(fred,"Hello?");
	addstr("The window 'fred' ");
	if(is_wintouched(fred))
		addstr("has");
	else
		addstr("has not");
	addstr(" been changed since the last refresh().\n");
	refresh();
	getch();
	
	endwin();
	return 0;
}

