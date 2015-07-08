#include <ncurses.h>

int main(void)
{
	WINDOW *newman;

	initscr();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_RED);

	newman = newwin(5,30,5,10);
	if( newman == NULL)
	{
			endwin();
			puts("Error creating window");
			return(1);
	}

	wbkgd(newman,COLOR_PAIR(1));
	wborder(newman,0,0,0,0,0,0,0,0);
	mvwaddstr(newman,1,1,"Ta-da!");
	wrefresh(newman);
	getch();

	endwin();
	return 0;
}

