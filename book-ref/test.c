#include <ncurses.h>

int main(void)
{
	WINDOW *p;
	
	initscr();

	p = newpad(50,100);		 /* create a new pad */
	if( p == NULL )
	{
		endwin();
		puts("Unable to create new pad");
		return(1);
	}

	waddstr(p,"This is pad data");
	addstr("New pad created\n");
	prefresh(p,0,0,12,0,13,40);
	printw("Pad y data is %d.\n",p->_pad._pad_y);
	printw("Pad x data is %d.\n",p->_pad._pad_x);
	printw("Pad top data is %d.\n",p->_pad._pad_top);
	printw("Pad left data is %d.\n",p->_pad._pad_left);
	printw("Pad bottom data is %d.\n",p->_pad._pad_bottom);
	printw("Pad right data is %d.\n",p->_pad._pad_right);
	refresh();
	prefresh(p,0,0,12,0,13,40);
	getch();
	
	endwin();
	return 0;
}

