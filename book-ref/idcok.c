#include <ncurses.h>

#define LENA 8
#define LENF 11
#define LENS 7
#define DELAY 150
#define ROW 10

int main(void)
{
	char first[] = "The terminal";
	char second[] = "Software";
	int x;

	initscr();

	mvaddstr(ROW,0,"Something is doing the inserting and deleting.");
	refresh();
	getch();

	move(ROW,0);
	for(x=0;x<=LENA;x++)
	{
		delch();
		refresh();
		napms(DELAY);
	}
	for(x=LENF;x>=0;x--)
	{
		insch(first[x]);
		refresh();
		napms(DELAY);
	}
	getch();

	idcok(stdscr,FALSE);

	for(x=0;x<=LENF;x++)
	{
		delch();
		refresh();
		napms(DELAY);
	}
	for(x=LENS;x>=0;x--)
	{
		insch(second[x]);
		refresh();
		napms(DELAY);
	}
	getch();

	endwin();
	return 0;
}

