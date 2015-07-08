#include <ncurses.h>

#define DELAY 150
#define ROW 10
#define REPEAT 5

void fancy(char *text)
{
	int x;

	for(x=0;x<REPEAT;x++)
	{
		mvaddstr(ROW+1,0,text);
		refresh();
		napms(DELAY);
		insdelln(1);
	}
	for(x=0;x<=REPEAT;x++)
	{
		insdelln(-1);
		refresh();
		napms(DELAY);
	}
}

int main(void)
{
	initscr();

	mvaddstr(ROW,0,"What is inserting and deleting the text?");
	refresh();
	getch();

	idlok(stdscr,TRUE);
	fancy("Hardware is!");
	getch();

	idlok(stdscr,FALSE);
	fancy("Software is!");
	getch();

	endwin();
	return 0;
}

