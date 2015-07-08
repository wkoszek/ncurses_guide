#include <ncurses.h>

int main(void)
{
	WINDOW *pad;
	int a;

	initscr();

	pad = newpad(40,100);
	if(pad == NULL)
	{
		endwin();
		puts("Problem creating pad");
		return(1);
	}

	for(a=0;a<4000;a++)
	{
		waddch(pad,'A' + (a % 26));
	}

	prefresh(pad,0,0,7,30,17,50);
	getch();

	endwin();
	return 0;
}

