#include "Baseball.h"

void ClearBuffer()
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
		ClearBuffer();

		switch (menu)
		{
		case 1:
			break;
		default:
			break;
		}
	} while ('q' == menu || 'Q' == menu);
}

void get_rand(int* arr)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < LEN; i++) {
		arr[i] = (rand() % 9) + 1;

		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				i--;
				break;
			}
		}
	}
}

void get_ans(int* arr)
{
	for (int i = 0; i < LEN; i++) {
		scanf_s("%1d", &arr[i]);
	}
}