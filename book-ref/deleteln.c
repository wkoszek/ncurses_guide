#include <ncurses.h>

int main(void)
{
	int x;

	initscr();

	addstr("To be, or not to be: that is the question:\n");
	addstr("Whether 'tis nobler in the mind to suffer\n");
	addstr("The slings and arrows of outrageous fortune,\n");
	addstr("Or to take arms against a sea of troubles,\n");
	addstr("And by opposing end them?\n");

	move(0,0);
	for(x=0;x<5;x++)
	{	
		refresh();
		getch();
		deleteln();
	}

	endwin();
	return 0;
} 

