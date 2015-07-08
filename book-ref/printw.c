#include <ncurses.h>

int main(void)
{
	int yoda = 874,ss = 65;

	initscr();

	printw("Yoda is %d years old\n",yoda);
	printw("He has collected %d years\n",yoda-ss);
	printw("of Social Security.");
	refresh();
	getch();

	endwin();
	return 0;
}

