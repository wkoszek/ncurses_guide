#include <ncurses.h>

#define UNI 4.5

int main(void)
{
	int pieces;

	initscr();

	addstr("SUSHI BAR");
	move(3,0);
	printw("We have Uni today for $%.2f.\n",UNI);
	addstr("How many pieces would you like? ");
	refresh();

	scanw("%i",&pieces);
	printw("You want %i pieces?\n",pieces);
	printw("That will be $%.2f!",UNI*(float)pieces);
	refresh();
	getchar();

	endwin();
	return 0;
}

