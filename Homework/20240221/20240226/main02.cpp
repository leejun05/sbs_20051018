#include<iostream>
using namespace std;

void main() {

	//¼÷Á¦ 1
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 5; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
}