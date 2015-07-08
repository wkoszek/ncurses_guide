#include <ncurses.h>

int main(void)
{
	WINDOW *p;
	char text[] = "Greetings from pad p.";
	char *t;

	initscr();

	p = newpad(50,100);		 /* create a new pad */
	if( p == NULL )
	{
		endwin();
		puts("Unable to create new pad");
		return(1);
	}

	t = text;
	prefresh(p,0,0,0,0,1,25);
	while(*t)
	{
		pechochar(p,*t);
		t++;
		napms(50);
	}
	getch();
	
	endwin();
	return 0;
}

