#include <ncurses.h>

int main(void)
{
	chtype ch,a;
	char bgchar;
	int bgcolor,x;
	short fore,back;
	char colors[8][8] = { "Black", "Red", "Green", "Yellow",
						"Blue", "Magenta", "Cyan", "White" };
	char attribs[15][11] = { "Standout", "Underline", "Reverse",
						 "Blink", "Dim", "Bold",
						 "AltChar", "Invis", "Protect",
						 "Horizontal", "Left", "Low",
						 "Right", "Top", "Vertical" };

	a = 0x10000;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	bkgd(COLOR_PAIR(1) | A_BOLD);

	ch = getbkgd(stdscr);

	bgchar = (ch & A_CHARTEXT);			/* Read character */
	bgcolor = (ch & A_COLOR) >> 8;		/* Read color pair */
	pair_content(bgcolor,&fore,&back);	/* Read colors */

	printw("Background chtype is 0x%04x\n",ch);
	printw("Background character is 0x%02x or '%c'\n",\
			bgchar,bgchar);
	printw("Background color pair is %d\n",bgcolor);
	printw("\tForeground color is %s\n",colors[fore]);
	printw("\tBackground color is %s\n",colors[back]);
	addstr("Other attributes found:\n");
	for(x=0;x<15;x++)
	{
		if(a & ch)
			printw("%s\n",attribs[x]);
		a <<= 1;
	}
	refresh();
	getch();

	endwin();
	return 0;
}

