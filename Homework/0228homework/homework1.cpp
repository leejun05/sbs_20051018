#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void main() {
	//�ܼ� ����ٲٱ�
	system("color 25");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	cout << "- ĳ���� -" << endl;
	system("pause");	//�Ͻ�����
	system("cls");		//clear screen ȭ�� ������.
	gotoxy(1, 10); 
	
	//gotoxy�� ĳ���� �����
	
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$00$$$$$$00$$\n ");
	printf(" $$00$$$$$$00$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
}