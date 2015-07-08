#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

#define MAX 23

int main(void)
{
	WINDOW *alpha;
	int rows[MAX];
	int c,r,total;

	srandom((unsigned)time(NULL));	/* seed randomizer */
	for(c=0;c<MAX;c++)				/* initialize array */
		rows[c] = 0;
	total = 0;						/* initialize counter */

/* Curses setup stuff */
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	alpha = newwin(0,0,0,0);
	wbkgd(alpha,COLOR_PAIR(1));
	untouchwin(alpha);				/* pretend win is updated */

	addstr("Press Enter to touch and display window alpha\n");
	refresh();
	getch();

/* Loop to gradually reveal the blue window */
	while(total<=MAX)
	{
		r = random() % (MAX + 1);
		if( rows[r]==0 )
		{
			rows[r] = 1;
			touchline(alpha,r,1);
			wrefresh(alpha);		/* update the line */
			napms(100);				/* pause 1/10 sec */
			total++;
		}
	}
	getch();
	
	endwin();
	return 0;
}

