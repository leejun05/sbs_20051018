#include<iostream>
#include<time.h>
using namespace std;

void main() {
	int num;
	int input;
	int count = 1;

	while (1) {
		num = rand() % 100 + 1;
		printf("숫자를 맞춰보세요(0~100)");
		do
		{
			printf("시도 횟수 : %d\n", count);
			scanf_s("%d", &input);

			if (num == input) {
				printf("맞췄습니다\n");
				printf("기록 %d\n", count);
				count = 0;
				exit(0);
		}
			if (num > input) {
				printf("숫자가 더 큽니다\n");
			}

			if (num < input) {
				printf("숫자가 더 작습니다\n");
			}
			count += 1;
		}
		while (num != input);
	}

	













}