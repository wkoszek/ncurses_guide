#include <ncurses.h>

int main(void)
{
	char text[] = "Hello there, handsome!";
	char *t;
	
	t = text;
	initscr();

	while(*t)
		echochar(*t++);
	getch();

	endwin();
	return 0;
}

