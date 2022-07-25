#include "Baseball.h"


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

	

	get_rand(answer_c, sizeof(answer_c) / sizeof(int));

	for (int i = 0; i < 4; i++)
		printf("%d ", answer_c[i]);
	get_ans(answer_p, sizeof(answer_p) / sizeof(int));

	for (int i = 0; i < 4; i++)
		printf("%d ", answer_p[i]);
	return 0;
}