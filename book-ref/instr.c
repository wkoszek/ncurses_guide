#include <ncurses.h>
#include <stdlib.h>

int main(void)
{
	int y,x;
	char *c;

	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);

/* set aside memory for chtype array */
	getmaxyx(stdscr,y,x);
	c = (char *)malloc((x+1));
	if( c == NULL)
	{
		endwin();
		puts("Unable to allocate memory.");
		return(1);
	}

/* write something interesting to the screen */
	attron(COLOR_PAIR(1));
	addstr("This is a bit of text!");
	attroff(COLOR_PAIR(1));
	refresh();
	getch();

/* copy the text only using instr */
	mvinstr(0,0,c);
	mvaddstr(10,0,"Here is the text read:\n");
	addstr(c);
	refresh();
	getch();

	endwin();
	return 0;
}

