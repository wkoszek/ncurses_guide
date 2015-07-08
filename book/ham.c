#include <curses.h>

#define LMAX 12
#define CENTER 1

int main()
{
	char label_text[LMAX][20] = { "I", "AM", "SAM", "DO",
								 "NOT", "LIKE", "THAT", "SAY",
								 "WOULD", "COULD", "YOU",
								 "GREEN EGGS AND HAM" };
	int label,ch;
	
	slk_init(2);					/* 12 soft labels */
	initscr();
	noecho();						/* disable key echoing */
	keypad(stdscr,TRUE);			/* Turn on Fkey reading */
	
/* display the labels and instructions */
	for(label=0;label<LMAX;label++)
		slk_set(label+1,label_text[label],CENTER);
	slk_refresh();
	addstr("Use the Function Keys to type\n");
	addstr("Press '?' or '!' or '.' to end a line\n");
	addstr("Press Enter to quit\n\n");
	refresh();

/* Process input */
	while( (ch=getch()) != '\n')
	{
		switch(ch)
		{
				case '?':
				case '!':
				case '.':
					addch(ch);
					addch('\n');
					break;
				case KEY_F(1):
					printw("%s ",label_text[0]);
					break;
				case KEY_F(2):
					printw("%s ",label_text[1]);
					break;
				case KEY_F(3):
					printw("%s ",label_text[2]);
					break;
				case KEY_F(4):
					printw("%s ",label_text[3]);
					break;
				case KEY_F(5):
					printw("%s ",label_text[4]);
					break;
				case KEY_F(6):
					printw("%s ",label_text[5]);
					break;
				case KEY_F(7):
					printw("%s ",label_text[6]);
					break;
				case KEY_F(8):
					printw("%s ",label_text[7]);
					break;
				case KEY_F(9):
					printw("%s ",label_text[8]);
					break;
				case KEY_F(10):
					printw("%s ",label_text[9]);
					break;
				case KEY_F(11):
					printw("%s ",label_text[10]);
					break;
				case KEY_F(12):
					printw("%s ",label_text[11]);
					break;
				default:
					break;
		}
		refresh();
	}

	endwin();
	return 0;
}

