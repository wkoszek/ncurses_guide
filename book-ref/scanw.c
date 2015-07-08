#include <ncurses.h>

#define UNI 4.5

int main(void)
{
	int pieces;

	initscr();

	addstr("SUSHI BAR MENU\n\n");
	printw("We have Uni today for $%.2f.\n",UNI);
	addstr("How many pieces would you like? ");
	refresh();

	scanw("%d",&pieces);
	printw("You want %d pieces?\n",pieces);
	printw("That will be $%.2f!\n",UNI*pieces);
	refresh();
	getch();

	endwin();
	return 0;
}

