#include <ncurses.h>

int main(void)
{
	SCREEN *s;

	s = newterm(NULL, stdout, stdin);
	set_term(s);

	addstr("Hello!");

	refresh();
	getch();

	endwin();
	delscreen(s);
	return 0;
}

