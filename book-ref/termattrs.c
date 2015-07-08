#include <ncurses.h>

void attryn(chtype a, chtype c)
{
	if(a | c)
		addstr("Yes");
	else
		addstr("No");
	addch('\n');
}

int main(void)
{
	chtype attributes;

	initscr();

	attributes = termattrs();
	addstr("This terminal is capable of the following attributes:\n");
	printw("%14s","AltCharSet: ");	attryn( attributes, A_ALTCHARSET);
	printw("%14s","Blink: ");		attryn( attributes, A_BLINK);
	printw("%14s","Bold: ");		attryn( attributes, A_BOLD);
	printw("%14s","Dim: ");		attryn( attributes, A_DIM)	;
	printw("%14s","Invisible: ");	attryn( attributes, A_INVIS);
	printw("%14s","Normal: ");		attryn( attributes, A_NORMAL);
	printw("%14s","Reverse: ");	attryn( attributes, A_REVERSE);
	printw("%14s","Standout: ");	attryn( attributes, A_STANDOUT);
	printw("%14s","Underline: ");	attryn( attributes, A_UNDERLINE);
	printw("%14s","Protect: ");	attryn( attributes, A_PROTECT);
	printw("%14s","Horizontal: ");	attryn( attributes, A_HORIZONTAL);
	printw("%14s","Left: ");		attryn( attributes, A_LEFT);
	printw("%14s","Low: ");		attryn( attributes, A_LOW);
	printw("%14s","Right: ");		attryn( attributes, A_RIGHT);
	printw("%14s","Top: ");		attryn( attributes, A_TOP);
	printw("%14s","Vertical: ");	attryn( attributes, A_VERTICAL);
	refresh();
	getch();

	endwin();
	return 0;
}

