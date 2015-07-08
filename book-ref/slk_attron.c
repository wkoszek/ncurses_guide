#include <ncurses.h>

#define CENTER 1
#define LCOUNT 8

int main(void)
{
	char labels[LCOUNT][19] = { "Help!", "File", "Print", "Text",
						  "Edit", "Quick", "Config", "System" };
	char *text;
	int x;

	slk_init(0);
	initscr();

	for(x=0;x<LCOUNT;x++)
		slk_set(x+1,labels[x],CENTER);
	slk_attron(A_BOLD);
	slk_refresh();
	getch();

	endwin();
	return 0;
}

