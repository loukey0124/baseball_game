#include "Baseball.h"

void clear_buffer()
{
	while ('\n' != getchar());
}

void ShowMenu()
{
	;
}

void SelectMenu()
{
	char menu = 0;

	do
	{
		scanf_s("%c", &menu, 1);
		switch (menu)
		{
		default:
			break;
		}
	} while ('q' == menu || 'Q' == menu);
	while (1) {
		scanf_s("%c", &menu, 1);
		switch (menu)
		{
		case 'Q':
		case 'q':
			exit(1);
			break;
		case '1':
			return;
			break;
		default:
			break;
		}
	}
}