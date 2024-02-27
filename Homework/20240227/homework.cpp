#include<iostream>
#include<time.h>

using namespace std;

void main() {
	
	int arr[100] = {};

	//1. 초기화
	for (int i = 0; i < 100; i++) {
		arr[i] = i;
	}

	srand(time(NULL));

	//10000은 마음대로
	for (int i = 0; i < 100000; i++) {
		//A,B를 100000번 swap할건데
		//A,B를 고르는 기준이
		//랜덤 인덱스입니다.

		int firstIndex = rand() % 46;
		int secondIndex = rand() % 46;

		int temp = arr[firstIndex];
		arr[firstIndex] = arr[secondIndex];
		arr[secondIndex] = temp;
	}

	for (int i = 0; i < 7; i++) {
		printf("볼 : %d\n", arr[i]);
	}




}