#include <ncurses.h>
#include <stdlib.h>

void bomb(void);

int main(void)
{
	WINDOW *a,*b,*c,*d;
	int maxx,maxy,halfx,halfy;
		
	initscr();
	refresh();	/* Added after the book was printed */
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLUE);
	init_pair(2,COLOR_BLACK,COLOR_RED);
	init_pair(3,COLOR_BLACK,COLOR_GREEN);
	init_pair(4,COLOR_BLACK,COLOR_CYAN);

/* calculate window sizes and locations */
	getmaxyx(stdscr,maxy,maxx);
	halfx = maxx >> 1;
	halfy = maxy >> 1;

/* create four windows to fill the screen */
	if( (a = newwin(halfy,halfx,0,0)) == NULL) bomb();
	if( (b = newwin(halfy,halfx,0,halfx)) == NULL) bomb();
	if( (c = newwin(halfy,halfx,halfy,0)) == NULL) bomb();
	if( (d = newwin(halfy,halfx,halfy,halfx)) == NULL) bomb();
	
/* Write to each window */
	mvwaddstr(a,0,0,"This is window A\n");
	wbkgd(a,COLOR_PAIR(1));
	wrefresh(a);
	mvwaddstr(b,0,0,"This is window B\n");
	wbkgd(b,COLOR_PAIR(2));
	wrefresh(b);
	mvwaddstr(c,0,0,"This is window C\n");
	wbkgd(c,COLOR_PAIR(3));
	wrefresh(c);
	mvwaddstr(d,0,0,"This is window D\n");
	wbkgd(d,COLOR_PAIR(4));
	wrefresh(d);
	getchar();

	endwin();
	return 0;
}

void bomb(void)
{
	addstr("Unable to allocate memory for new window.\n");
	refresh();
	endwin();
	exit(1);
}

