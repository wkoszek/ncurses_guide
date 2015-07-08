#include <ncurses.h>

#define DELAY 500
#define TEXT "Lookee Here!"

void show(void)
{
	mvaddstr(1,10,TEXT);
	napms(DELAY);
	mvaddstr(2,50,TEXT);
	napms(DELAY);
	mvaddstr(10,1,TEXT);
	napms(DELAY);
	mvaddstr(20,30,TEXT);
	napms(DELAY);
}

int main(void)
{
	initscr();

	addstr("First round: immedok() is OFF! (Press Enter and wait!)");
	refresh();
	getch();
	show();
	mvaddstr(LINES-1,0,"Press Enter:");
	refresh();
	getch();

	immedok(stdscr,TRUE);
	clear();
	addstr("Second round: immedok() is ON! (Press Enter and watch!)");
	getch();
	show();
	mvaddstr(LINES-1,0,"Press Enter:");
	getch();

	endwin();
	return 0;
}

