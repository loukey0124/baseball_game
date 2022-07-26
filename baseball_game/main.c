#include "Baseball.h"

int main()
{
	int answer_c[4] = { 0 };
	int answer_p[4] = { 0 };
	while (1) {
		get_rand(answer_c);

		for (int i = 0; i < 4; i++)
			printf("%d ", answer_c[i]);
		printf("´ä\n");

		int strike = 0, ball = 0, count;
		for (count = 0; count < 4; count++) {
			get_ans(answer_p);
			for (int i = 0; i < LEN; i++) {
				if (answer_c[i] == answer_p[i]) {
					strike++;
					continue;
				}

				for (int j = 0; j < LEN; j++) {
					if (answer_c[j] == answer_p[i]) {
						ball++;
						break;
					}
				}
			}

			printf("strike:%d, ball:%d\n", strike, ball);
			if (4 == strike) {
				Sleep(1000);
				break;
			}
			strike = 0;
			ball = 0;
			
		}

		
	}
	return 0;
}