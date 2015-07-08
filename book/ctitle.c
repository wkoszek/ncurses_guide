#include <ncurses.h>
#include <string.h>

void center(int row, char *title);

int main(void)
{
	initscr();

	center(1, "Penguin Soccer Finals");
	center(5, "Cattle Dung Samples from Temecula");
	center(7, "Catatonic Theater");
	center(9, "Why Do Ions Hate Each Other?");
	getchar();

	endwin();
	return 0;
}

void center(int row, char *title)
{
	int len,indent,y,width;

	getmaxyx(stdscr,y,width);	/* get screen width */

	len = strlen(title);		/* get title's length */
	indent = width - len;		/* subtract it from screen width */
	indent /= 2;			/* divide result into two */

	mvaddstr(row,indent,title);
	refresh();
}

