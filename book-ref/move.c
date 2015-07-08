#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Putting an asterisk at location 10,50:");
	move(10,50);
	addch('*');
	refresh();
	getch();

	endwin();
	return 0;
}

