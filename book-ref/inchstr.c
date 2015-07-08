#include <ncurses.h>
#include <stdlib.h>

int main(void)
{
	int y,x;
	chtype *c;

	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);

/* set aside memory for chtype array */
	getmaxyx(stdscr,y,x);
	c = calloc((x+1), sizeof(chtype));
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

/* copy the text using inchstr */
	mvinchstr(0,0,c);
	mvaddstr(10,0,"Here is the chtype string read:\n");
	addchstr(c);
	refresh();
	getch();

	endwin();
	return 0;
}

