#include <ncurses.h>

int main(void)
{
	WINDOW *hide;
	int row;

	initscr();
	hide = newwin(0,0,0,0);

	refresh();			/* Initial write of the standard screen */
	waddstr(hide,"Changes are being made to the standard screen\n");
	mvaddstr(3,5,"Change!");
	mvaddstr(10,60,"Change!");
	mvaddstr(20,40,"Change!");
	waddstr(hide,"Press Enter to see which rows have been changed:\n");
	wrefresh(hide);
	getch();

	for(row=0;row<LINES;row++)
	{
		if(is_linetouched(stdscr,row))
			wprintw(hide,"Line %d has been updated.\n",row);
	}
	wrefresh(hide);
	getch();

	endwin();
	return 0;
}

