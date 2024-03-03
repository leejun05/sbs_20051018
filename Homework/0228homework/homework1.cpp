#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void main() {
	//콘솔 색상바꾸기
	system("color 25");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	cout << "- 캐릭터 -" << endl;
	system("pause");	//일시정지
	system("cls");		//clear screen 화면 싹지움.
	gotoxy(1, 10); 
	
	//gotoxy로 캐릭터 만들기
	
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$00$$$$$$00$$\n ");
	printf(" $$00$$$$$$00$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
	printf(" $$$$$$$$$$$$$$\n ");
}