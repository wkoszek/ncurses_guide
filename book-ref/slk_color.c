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
	init_pair(1,COLOR_BLUE,COLOR_WHITE);

	slk_color(1);
	for(x=0;x<LCOUNT;x++)
		slk_set(x+1,labels[x],CENTER);
	slk_refresh();
	getch();

	endwin();
	return 0;
}

