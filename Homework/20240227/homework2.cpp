#include<iostream>
#include<time.h>
using namespace std;
int my1;
int my2;
int my3;
int my4;
int cpu1;
int cpu2;
int cpu3;
int cpu4;
int game = 1;
void main() {
	srand(time(NULL));
	printf("-���������� �ϳ�����-\n");
	while (my4 == cpu4) {
		printf("%d��° ����\n", game);
		printf("1. ����, 2. ����, 3. ��\n");

		scanf_s("%d", &my1);
		scanf_s("%d", &my2);

		printf("����� [%s]�� [%s]��(��) �����ϼ̽��ϴ�\n", (my1 == 1 ? "����" : my1 == 2 ? "����" : "��"), (my2 == 1 ? "����" : my2 == 2 ? "����" : "��"));

		cpu1 = rand() % 3 + 1;
		cpu2 = rand() % 3 + 1;

		printf("��ǻ�ʹ� [%s]�� [%s]��(��) �½��ϴ�\n", (cpu1 == 1 ? "����" : cpu1 == 2 ? "����" : "��"), (cpu2 == 1 ? "����" : cpu2 == 2 ? "����" : "��"));
		printf("������ ���ðڽ��ϱ�?\n");
		printf("1. %s, 2. %s", (my1 == 1 ? "����" : my1 == 2 ? "����" : "��"), (my2 == 1 ? "����" : my2 == 2 ? "����" : "��"));

		scanf_s("%d", &my3);
		printf("\n");
		if (my3 == 1) {
			printf("����� %s��(��) �����ϴ�\n", (my1 == 1 ? "����" : my1 == 2 ? "����" : "��"));
			my4 = my1;
		}
		if (my3 == 2) {
			printf("����� %s��(��) �����ϴ�\n", (my2 == 1 ? "����" : my2 == 2 ? "����" : "��"));
			my4 = my2;
		}
		cpu3 = rand() % 2;
		if (cpu3 == 0) {
			printf("��ǻ�ʹ� %s��(��) �����ϴ�\n", (cpu1 == 1 ? "����" : cpu1 == 2 ? "����" : "��"));
			cpu4 = cpu1;
		}
		else {
			printf("��ǻ�ʹ� %s��(��) �����ϴ�\n", (cpu2 == 1 ? "����" : cpu2 == 2 ? "����" : "��"));
			cpu4 = cpu2;
		}
		if (my4 == cpu4) {
			printf("DRAW\n");
		}
		else if (my4 == 1 && cpu4 == 2) {
			printf("LOSE\n");
		}
		else if (my4 == 1 && cpu4 == 3) {
			printf("WIN\n");
		}
		else if (my4 == 2 && cpu4 == 1) {
			printf("WIN\n");
		}
		else if (my4 == 2 && cpu4 == 3) {
			printf("LOSE\n");
		}
		else if (my4 == 3 && cpu4 == 1) {
			printf("LOSE\n");
		}
		else if (my4 == 3 && cpu4 == 2) {
			printf("WIN\n");
			game++;
		}
	}
}