#include<iostream>
#include<time.h>
using namespace std;
int _myHand = 0;
int _comHand = 0;
int _count = 0;

//변수 선언
//int _myHand = 0; //내 손
//int _comHand = 0; //상대방 손

//함수 선언
// 함수 (main함수 위에 선언할것!)
// void 함수명() (함수명은 대문자로 시작) 
// {
//		실행시킬 코드
// }


void PrintGameStartScene() {
	srand(time(NULL));
	::printf("-Rock Scissor Paper Game-\n");

}

void ChooseMyHand() {

	printf("가위 (0), 바위 (1), 보 (2) 중에 하나를 입력하세요 : \n");
	cin >> _myHand;

	cout << "내가 뽑은 것은 : \n ";
	if (_myHand == 0) {
		cout << "가위" << endl;
	}
	else if (_myHand == 1) {
		cout << "바위" << endl;
	}
	else if (_myHand == 2) {
		cout << "보" << endl;
	}
	else {
		cout << "잘못 뽑았습니다" << endl;
	}

}

void ChooseComHand() {


	cout << "상대방이 뽑을 것은? : \n";
	_comHand = rand() % 3;
}

void PrintHands() {

	cout << "내가 뽑을것은? : \n";
	if (_myHand == 0) {
		cout << "가위" << endl;
	}
	else if (_myHand == 1) {
		cout << "바위" << endl;
	}
	else if (_myHand == 2) {
		cout << "보" << endl;
	}
	else {
		cout << "잘못 뽑았습니다" << endl;
	}

	cout << "상대가 뽑을것은? : \n";
	if (_comHand == 0) {
		cout << "가위" << endl;
	}
	else if (_comHand == 1) {
		cout << "바위" << endl;
	}
	else if (_comHand == 2) {
		cout << "보" << endl;
	}
	else {
		cout << "잘못 뽑았습니다" << endl;
	}
}

void PrintGameResult() {

	if (_myHand == _comHand)
	{
		cout << "-----둘이 비겼습니다.-----" << endl;
	}
	else if (_myHand == 0)
	{
		if (_comHand == 1)
			cout << "-----상대가 이겼습니다.-----" << endl;
		else
			cout << "-----내가 이겼습니다.-----" << endl;
	}
	else if (_myHand == 1)
	{
		if (_comHand == 2)
			cout << "-----상대가 이겼습니다.-----" << endl;
		else
			cout << "-----내가 이겼습니다.-----" << endl;
	}
	else if (_myHand == 2)
	{
		if (_comHand == 0)
			cout << "-----상대가 이겼습니다.-----" << endl;
		else
			cout << "-----내가 이겼습니다.-----" << endl;
	}
	else
	{
		cout << "다시 내주세요." << endl;
	}
}

int main() {

	srand(time(NULL));

	while (_count < 10) {
		::PrintGameStartScene();
		::ChooseMyHand();
		::ChooseComHand();
		::PrintHands();
		::PrintGameResult();
	}
}