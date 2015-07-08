#include <ncurses.h>

int main(void)
{
	attr_t attributes;
	short cpair;

	initscr();
	attrset(A_BOLD | A_REVERSE | A_BLINK);
	
	attr_get(&attributes,&cpair,NULL);
	addstr("Attributes active in this window:\n");
	if( attributes & A_COLOR)		printw("Color w/ pair %d\n",cpair);
	if( attributes & A_STANDOUT)	addstr("Standout\n");
	if( attributes & A_REVERSE)		addstr("Reverse\n");
	if( attributes & A_BLINK)		addstr("Blink\n");
	if( attributes & A_DIM)			addstr("Dim\n");
   	if( attributes & A_BOLD)		addstr("Bold\n");
	refresh();
	getch();

	endwin();
	return 0;
}

