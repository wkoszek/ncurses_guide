#include <ncurses.h>

#define CENTER 1
#define LCOUNT 8

int main(void)
{
	char labels[LCOUNT][9] = { "Help!", "File", "Print", "Text",
						  "Edit", "Quick", "Conf", "System" };
	int x;

	slk_init(0);
	initscr();

	for(x=0;x<LCOUNT;x++)
		slk_set(x+1,labels[x],CENTER);
	slk_refresh();

	addstr("Press Enter to hide the soft label keys:\n");
	refresh();
	getch();

	slk_clear();
	addstr("Press Enter to restore the soft label keys:\n");
	refresh();
	getch();

	slk_restore();
	getch();

	endwin();
	return 0;
}

