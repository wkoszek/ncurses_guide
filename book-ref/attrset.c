#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	
	attrset(A_BOLD);
	addstr("Attributes set for the screen to BOLD.\n");
	attroff(A_BOLD);
	addstr("Bold attribute has been removed.\n");
	attron(COLOR_PAIR(1));
	addstr("Color pair 1 has been added.\n");
	attrset(A_REVERSE);
	addstr("Attrset just reset things to reverse.\n");
	attroff(A_REVERSE);
	addstr("And now things are back to normal.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

