#include <ncurses.h>

int main(void)
{
	WINDOW *win;
	int vy,vx,stdy,stdx,winy,winx;

	initscr();

	win = newwin(5,20,10,30);
	box(win,0,0);
	waddstr(win,"This is 'win'");
	wrefresh(win);
	
	getyx(win,winy,winx);
	getyx(stdscr,stdy,stdx);
	getsyx(vy,vx);
	printw("In Window win, the cursor is at %d,%d.\n",winy,winx);
	printw("On the standard screen, the cursor is at %d,%d.\n",stdy,stdx);
	printw("On the virtual screen, the cursor is at %d,%d.\n",vy,vx);
	refresh();
	getch();

	getsyx(vy,vx);
	printw("Now on the virtual screen, the cursor is at %d,%d.\n",vy,vx);
	refresh();
	getch();

	leaveok(win,TRUE);
	wrefresh(win);
	getyx(win,winy,winx);
	getsyx(vy,vx);
	printw("In Window win, the cursor is now at %d,%d.\n",winy,winx);
	printw("On the virtual screen, the cursor is now at %d,%d.\n",vy,vx);
	refresh();
	getch();

	endwin();
	return 0;
}

