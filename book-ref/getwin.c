#include <ncurses.h>
#include <stdlib.h>

#define FILENAME "window.dat"

void bomb(char *message);

int main(void)
{
	FILE *wfile;
	WINDOW *win;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_RED);

	addstr("Press Enter to read the window from disk:\n");
	refresh();
	getch();

/* open the file */
	wfile = fopen(FILENAME,"r");
	if( wfile==NULL)
		bomb("Error reading file\n");

/* write the window's data */
	win = getwin(wfile);
	if( win == NULL )
		bomb("Unable to read/create window\n");
	fclose(wfile);
	wrefresh(win);
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

