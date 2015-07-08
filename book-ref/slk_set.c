#include <ncurses.h>

#define LEFT 0
#define CENTER 1
#define RIGHT 2

int main(void)
{
	slk_init(0);
	initscr();

	slk_set(1,"Help!",LEFT);
	slk_set(2,"File",LEFT);
	slk_set(3,"Print",LEFT);
	slk_set(4,"Text",CENTER);
	slk_set(5,"Edit",CENTER);
	slk_set(6,"Quick",RIGHT);
	slk_set(7,"Conf",RIGHT);
	slk_set(8,"Change",RIGHT);
	slk_refresh();
	getch();

	endwin();
	return 0;
}

