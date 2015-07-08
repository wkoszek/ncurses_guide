#include <ncurses.h>

#define Y 5
#define X1 10
#define X2 60
#define DELAY 250

int main(void)
{
	char text[] = "Elvis found alive *** Stock market tops 20,000 *** Rocky XII big box office hit *** Congressman indicted *** ";
	char *t;

	initscr();
	noecho();
	nodelay(stdscr,TRUE);
	
	t = text;
	while( getch() == ERR )
	{
		if( *t == '\0') t = text;
		mvinsch(Y,X2,*t);
		mvdelch(Y,X1);
		refresh();
		napms(DELAY);
		t++;
	}
	
	endwin();
	return 0;
}

