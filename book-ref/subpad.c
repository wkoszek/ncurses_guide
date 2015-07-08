#include <ncurses.h>
#include <stdlib.h>

void bomb(char *message);

int main(void)
{
	WINDOW *pod,*pea;
	
	initscr();

/* create a new pad */
	pod = newpad(50,50);
	if( pod == NULL )
		bomb("Unable to create new pad");

	addstr("New pad created\n");
	refresh();

/* create a subpad */
	pea = subpad(pod,20,20,29,29);
	if( pea == NULL )
		bomb("Unable to create subpad");

	addstr("Subpad created\n");
	refresh();
	getch();

	endwin();
	return 0;
}

void bomb(char *message)
{
	endwin();
	puts(message);
	exit(1);
}

