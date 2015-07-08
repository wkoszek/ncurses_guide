#include <ncurses.h>

#define INTERM "/dev/ttyp1"
#define OUTTERM "/dev/ttyp2"

int main(void)
{
	FILE *termin,*termout;
	SCREEN *tp1,*tp2;
	char name[81];

/* Open terminal one for reading
   Open terminal two for writing */
	termin = fopen(INTERM,"r");
	termout = fopen(OUTTERM,"w");
	if( termin==NULL || termout==NULL )
	{
			puts("Unable to open terminal.");
			return(1);
	}

/* set up the new terminal in NCurses */
	tp2 = newterm(NULL,termout,termin);
	if( tp2 == NULL)
	{ 
		puts("Unable to open terminal window.");
		return(2);
	}

/* NCurses is now started for the new terminal */
	tp1 = set_term(tp2);
	printw("Welcome to Curses output on terminal %s.\n",OUTTERM);
	printw("You can type on terminal %s, and see it here.\n",INTERM);
	addstr("What is your name: ");
	refresh();
	getnstr(name,80);
	printw("%s, glad to have you aboard!",name);
	refresh();
	getch();

	endwin();
	return 0;
}

