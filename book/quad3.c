#include <ncurses.h>
#include <stdlib.h>

void bomb(void);

int main(void)
{
	WINDOW *a,*b,*c,*d;
	int maxx,maxy,halfx,halfy;
	int ch;
		
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
	wbkgd(a,COLOR_PAIR(1));
	mvwaddstr(a,0,0,"This is window A\n");
	wrefresh(a);
	wbkgd(b,COLOR_PAIR(2));
	mvwaddstr(b,0,0,"This is window B\n");
	wrefresh(b);
	wbkgd(c,COLOR_PAIR(3));
	mvwaddstr(c,0,0,"This is window C\n");
	wrefresh(c);
	wbkgd(d,COLOR_PAIR(4));
	mvwaddstr(d,0,0,"This is window D\n");
	wrefresh(d);

/* Update each window */
	do
	{
			ch = wgetch(a);
			waddch(b,ch);
			waddch(c,ch); 
			waddch(d,ch);
			wrefresh(b);
			wrefresh(c);
			wrefresh(d);
	} while(ch != '~');
	
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

