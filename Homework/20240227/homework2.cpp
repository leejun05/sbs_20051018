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
	printf("-가위바위보 하나빼기-\n");
	while (my4 == cpu4) {
		printf("%d번째 게임\n", game);
		printf("1. 가위, 2. 바위, 3. 보\n");

		scanf_s("%d", &my1);
		scanf_s("%d", &my2);

		printf("당신은 [%s]와 [%s]을(를) 선택하셨습니다\n", (my1 == 1 ? "가위" : my1 == 2 ? "바위" : "보"), (my2 == 1 ? "가위" : my2 == 2 ? "바위" : "보"));

		cpu1 = rand() % 3 + 1;
		cpu2 = rand() % 3 + 1;

		printf("컴퓨터는 [%s]와 [%s]을(를) 냈습니다\n", (cpu1 == 1 ? "가위" : cpu1 == 2 ? "바위" : "보"), (cpu2 == 1 ? "가위" : cpu2 == 2 ? "바위" : "보"));
		printf("무엇을 빼시겠습니까?\n");
		printf("1. %s, 2. %s", (my1 == 1 ? "가위" : my1 == 2 ? "바위" : "보"), (my2 == 1 ? "가위" : my2 == 2 ? "바위" : "보"));

		scanf_s("%d", &my3);
		printf("\n");
		if (my3 == 1) {
			printf("당신은 %s을(를) 뺐습니다\n", (my1 == 1 ? "가위" : my1 == 2 ? "바위" : "보"));
			my4 = my1;
		}
		if (my3 == 2) {
			printf("당신은 %s을(를) 뺐습니다\n", (my2 == 1 ? "가위" : my2 == 2 ? "바위" : "보"));
			my4 = my2;
		}
		cpu3 = rand() % 2;
		if (cpu3 == 0) {
			printf("컴퓨터는 %s을(를) 뺐습니다\n", (cpu1 == 1 ? "가위" : cpu1 == 2 ? "바위" : "보"));
			cpu4 = cpu1;
		}
		else {
			printf("컴퓨터는 %s을(를) 뺐습니다\n", (cpu2 == 1 ? "가위" : cpu2 == 2 ? "바위" : "보"));
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