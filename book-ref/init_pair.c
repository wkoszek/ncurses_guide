#include <ncurses.h>

int main(void)
{
	int pair,fg,bg;

	initscr();
	start_color();

	pair = 1;
	for(fg=0;fg<COLORS;fg++)
		for(bg=0;bg<COLORS;bg++)
		{
			init_pair(pair,fg,bg);
			pair++;
		}

	for(pair=0;pair<COLOR_PAIRS;pair++)
	{
		attrset(COLOR_PAIR(pair));
	   	addstr("Color! ");
		if( !(pair % COLORS))
			addch('\n');
	}
	refresh();
	getch();

	endwin();
	return 0;
}

