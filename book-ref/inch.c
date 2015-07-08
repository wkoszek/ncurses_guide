#include <ncurses.h>

int main(void)
{
	WINDOW *other;
	int x;
	chtype ch;

	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	
	addstr("Creating and fillling other window...");
	other = newwin(0,0,0,0);
	if( other==NULL)
	{
		endwin();
		puts("Error creating window");
		return(1);
	}
	wbkgd(other,COLOR_PAIR(1));
	waddch(other,'\"');
	wattron(other,A_BOLD);
	waddstr(other,"Hello!");
	wattroff(other,A_BOLD);
	waddstr(other,"\" from the other window!");
	addstr("Done!\n");
	addstr("Press Enter to evaluate the other window's text:\n");
	refresh();
	getch();

	addstr("Other window's text:\n");
	for(x=0;x<31;x++)
	{
		ch = mvwinch(other,0,x);
		addch(ch & A_CHARTEXT);
	}
	refresh();
	getch();
			
	addstr("\nAnd here are the other window's text and attributes:\n");
	for(x=0;x<31;x++)
	{
		ch = mvwinch(other,0,x);
		addch(ch);
	}
	refresh();
	getch();

	endwin();
	return 0;
}

