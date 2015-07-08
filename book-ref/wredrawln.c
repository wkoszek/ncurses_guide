#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("I'm just an innocent little program,\n");
	addstr("minding my own business...\n");
	move(0,0);
	refresh();
	getch();

	system("echo \"RANDOM DATA\" > `tty`");
	getch();

	wredrawln(stdscr,0,2);
	refresh();
	getch();

	endwin();
	return 0;
}

