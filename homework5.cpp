#include<iostream>
#include<time.h>
using namespace std;

void main() {
	int num;
	int input;
	int count = 1;

	while (1) {
		num = rand() % 100 + 1;
		printf("���ڸ� ���纸����(0~100)");
		do
		{
			printf("�õ� Ƚ�� : %d\n", count);
			scanf_s("%d", &input);

			if (num == input) {
				printf("������ϴ�\n");
				printf("��� %d\n", count);
				count = 0;
				exit(0);
		}
			if (num > input) {
				printf("���ڰ� �� Ů�ϴ�\n");
			}

			if (num < input) {
				printf("���ڰ� �� �۽��ϴ�\n");
			}
			count += 1;
		}
		while (num != input);
	}

	













}