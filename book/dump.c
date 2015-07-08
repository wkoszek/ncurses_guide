#define _BSD_SOURCE
#include <curses.h>
#include <stdlib.h>
#include <time.h>

#define FILENAME "windump"

int main()
{
	char word[7];
	int x,w,r;

	srandom((unsigned)time(NULL));	/* seed randomizer */
	word[6] = '\0';
	initscr();

/* Fill most of the screen with random 6-char words */
	for(x=0;x<200;x++)
	{
		for(w=0;w<6;w++)
			word[w] = (random() % 26) + 'a';
		printw("%s\t",word);
	}
	addch('\n');
	addstr("Press Enter to write this screen to disk\n");
	refresh();
	getch();

/* write the window to disk */
	r = scr_dump(FILENAME);
	if( r == ERR)
		addstr("Error writing window to disk\n");
	else
		addstr("File written; press Enter to quit\n");
	refresh();
	getch();

	endwin();
	return 0;
}

