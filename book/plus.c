#include <curses.h>

#define HLIN 10
#define VLIN 5

int main()
{
	int y[] = {  0,  0, 5,  0,  5,  5, 10, 10, 10, 10, 15, 5 };
	int x[] = { 10, 10, 1, 20, 20, 30,  1, 10, 20, 20, 10, 0 };
	int c;
	
	initscr();

	for(c=0;c<12;c+=2)
	{
		mvhline(   y[c],   x[c], 0, HLIN);
		mvvline( y[c+1], x[c+1], 0, VLIN);
	}

	refresh();
	getch();

	endwin();
	return 0;
}

