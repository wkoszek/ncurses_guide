#include <ncurses.h>

int main(void)
{
	int x;
	char hamlet[5][46] = { "And by opposing end them?", 
						"Or to take arms against a sea of troubles,",
						"The slings and arrows of outrageous fortune,",
						"Whether 'tis nobler in the mind to suffer",
		   				"To be, or not to be: that is the question:" };

	initscr();

	for(x=0;x<5;x++)
	{	
		move(0,0);
		insertln();
		addstr(hamlet[x]);
		refresh();
		getch();
	}

	endwin();
	return 0;
} 

