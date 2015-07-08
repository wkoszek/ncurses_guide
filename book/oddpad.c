#include <curses.h>

int main()
{
	WINDOW *p;
	char text[] = "This is interesting";
	char *t;
	
	initscr();

/* create a new pad */
	p = newpad(50,100);
	if( p == NULL )
	{
		addstr("Unable to create new pad");
		refresh();
		endwin();
		return(1);
	}

	t = text;
	prefresh(p,0,0,1,1,1,25);
	while(*t)
		pechochar(p,*t++);
	wgetch(p);

	endwin();
	return 0;
}

