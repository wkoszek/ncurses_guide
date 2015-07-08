#include <ncurses.h>

int main(void)
{
	char text1[] = "Oh give me a clone!\n";
	char text2[] = "Yes a clone of my own!";

	initscr();
	addstr(text1);		/* add the first string */
	addstr(text2);		/* add the second string */
	move(2,0);		/* cursor to row 3, column 1 */
	addstr("With the Y chromosome changed to the X.");
	refresh();		/* display the result */
	getch();

	endwin();
	return 0;
}

