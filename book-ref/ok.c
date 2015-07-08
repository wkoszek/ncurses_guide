#include <ncurses.h>

int main(void)
{
	int y,x,r;

	initscr();

	addstr("You Move The Cursor!\n");
	addstr("Enter the Y (row) coordinate: ");
	refresh();
	scanw("%d",&y);
	addstr("Enter the X (column) coordinate: ");
	refresh();
	scanw("%d",&x);

	r = move(y,x);
	if(r == OK)
	{
		mvaddstr(3,0,"You have moved the cursor!");
		move(y,x);
	}
	else
		mvaddstr(3,0,"You cannot move the cursor there!");
	refresh();
	getch();

	endwin();
	return 0;
}

