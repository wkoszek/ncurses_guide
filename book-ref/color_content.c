#include <ncurses.h>

int main(void)
{
	short x,r,b,g;

	initscr();
	start_color();

	for(x=0;x<COLORS;x++)
	{
		color_content(x,&r,&g,&b);
		printw("Color %d = Red: %4d\tGreen: %4d\tBlue: %4d\n",
				x,r,g,b);
	}
	refresh();
	getch();

	endwin();
	return 0;
}

