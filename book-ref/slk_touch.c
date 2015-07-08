#include <ncurses.h>

#define CENTER 1
#define LCOUNT 8

int main(void)
{
	char labels[LCOUNT][19] = { "Help!", "File", "Print", "Text",
						  "Edit", "Quick", "Config", "System" };
	int x;

	slk_init(0);
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_YELLOW);

	for(x=0;x<LCOUNT;x++)
		slk_set(x+1,labels[x],CENTER);
	slk_refresh();
	getch();

	slk_color(1);
	slk_touch();
	slk_refresh();
	getch();

	endwin();
	return 0;
}

