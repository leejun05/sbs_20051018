#include<iostream>
#include<time.h>

using namespace std;

void main() {
	
	int arr[100] = {};

	//1. �ʱ�ȭ
	for (int i = 0; i < 100; i++) {
		arr[i] = i;
	}

	srand(time(NULL));

	//10000�� �������
	for (int i = 0; i < 100000; i++) {
		//A,B�� 100000�� swap�Ұǵ�
		//A,B�� ���� ������
		//���� �ε����Դϴ�.

		int firstIndex = rand() % 46;
		int secondIndex = rand() % 46;

		int temp = arr[firstIndex];
		arr[firstIndex] = arr[secondIndex];
		arr[secondIndex] = temp;
	}

	for (int i = 0; i < 7; i++) {
		printf("�� : %d\n", arr[i]);
	}




}