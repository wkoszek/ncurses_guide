#include <ncurses.h>

int main(void)
{
	WINDOW *bob;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_WHITE);

	bob = newwin(0,0,0,0);
	wbkgd(bob,COLOR_PAIR(2));
	bkgd(COLOR_PAIR(1));

	waddstr(bob,"Hello from the window bob!\n");
	waddstr(bob,"I like long walks and romantic candlelit dinners.\n");
	waddstr(bob,"Press Enter to return to the standard screen.\n");
	addstr("This is the standard screen.\n");
	addstr("To see the window bob, press the Enter key:\n");
	refresh();
	getch();

	wrefresh(bob);
	getch();

	addstr("Welcome back to the standard screen (kinda).\n");
	addstr("To see the whole window bob, press Enter.\n");
	refresh();
	getch();

	waddstr(bob,"Thanks!\n");
	waddstr(bob,"Press Enter to see the whole standard screen.\n");
	touchwin(bob);
	wrefresh(bob);
	getch();

	touchwin(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}

