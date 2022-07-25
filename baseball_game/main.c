#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void menu()
{
	;
}

void select_menu()
{
	char menu = 0;

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

void get_rand(int* arr, int len)
{
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < len; i++) {
		arr[i] = (rand() % 9) + 1;

		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				i--;
				break;
			}
		}
	}
}

void get_ans(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		scanf_s("%1d", &arr[i]);
	}
}

int main()
{
	int answer_c[4] = { 0 };
	int answer_p[4] = { 0 };

	select_menu();

	get_rand(answer_c, sizeof(answer_c) / sizeof(int));

	for (int i = 0; i < 4; i++)
		printf("%d ", answer_c[i]);
	get_ans(answer_p, sizeof(answer_p) / sizeof(int));

	for (int i = 0; i < 4; i++)
		printf("%d ", answer_p[i]);
	return 0;
}