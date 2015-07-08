#include <ncurses.h>

char *ncolor(int color);

int main(void)
{
	short pair,f,b;

	initscr();
	start_color();

/* Create color pairs */
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_BLACK,COLOR_RED);
	init_pair(3,COLOR_YELLOW,COLOR_RED);
	init_pair(4,COLOR_BLUE,COLOR_GREEN);
	init_pair(5,COLOR_CYAN,COLOR_MAGENTA);

/* display pair colors */
	for(pair=1;pair<=5;pair++)
	{
		attrset(COLOR_PAIR(pair));
		pair_content(pair,&f,&b);
		printw("Pair %d: %s foreground, %s background.\n",\
			pair,ncolor(f),ncolor(b));
	}
	refresh();
	getch();

	endwin();
	return 0;
}

char *ncolor(int color)
{
	switch(color)
	{
		case COLOR_BLACK:
			return("Black");
		case COLOR_RED:
			return("Red");
		case COLOR_GREEN:
			return("Green");
		case COLOR_YELLOW:
			return("Yellow");
		case COLOR_BLUE:
			return("Blue");
		case COLOR_MAGENTA:
			return("Magenta");
		case COLOR_CYAN:
			return("Cyan");
		case COLOR_WHITE:
			return("White");
	}
	return("UNKNOWN!");
}

