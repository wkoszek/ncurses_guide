#include <ncurses.h>

int main(void)
{
	WINDOW *coffee;
	initscr();

	coffee = newwin(2,40,0,0);

	waddstr(coffee,"I'm just an innocent little program,\n");
	waddstr(coffee,"minding my own business...");
	wmove(coffee,0,0);
	wrefresh(coffee);
	getch();

	system("echo \"RANDOM DATA\" > `tty`");
	getch();

	wredrawln(coffee,0,1);
	wrefresh(coffee);
	getch();

	endwin();
	return 0;
}

