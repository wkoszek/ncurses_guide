#include <ncurses.h>

int main(void)
{
	char name[80];
	char stuff[] = "\nakoozaB eoJ";
	char *c;

	c = stuff;
	initscr();

/* stuff input */
	while(*c)
		ungetch(*c++);

/* typical Q&A type of code */
	addstr("Your name: ");
	refresh();
	getstr(name);
	printw("Pleased to meet you, %s.\n",name);
	refresh();
	getch();

	endwin();
	return 0;
}

