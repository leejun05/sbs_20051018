#include<iostream>
#include<time.h>
using namespace std;
int _myHand = 0;
int _comHand = 0;
int _count = 0;

//���� ����
//int _myHand = 0; //�� ��
//int _comHand = 0; //���� ��

//�Լ� ����
// �Լ� (main�Լ� ���� �����Ұ�!)
// void �Լ���() (�Լ����� �빮�ڷ� ����) 
// {
//		�����ų �ڵ�
// }


void PrintGameStartScene() {
	srand(time(NULL));
	::printf("-Rock Scissor Paper Game-\n");

}

void ChooseMyHand() {

	printf("���� (0), ���� (1), �� (2) �߿� �ϳ��� �Է��ϼ��� : \n");
	cin >> _myHand;

	cout << "���� ���� ���� : \n ";
	if (_myHand == 0) {
		cout << "����" << endl;
	}
	else if (_myHand == 1) {
		cout << "����" << endl;
	}
	else if (_myHand == 2) {
		cout << "��" << endl;
	}
	else {
		cout << "�߸� �̾ҽ��ϴ�" << endl;
	}

}

void ChooseComHand() {


	cout << "������ ���� ����? : \n";
	_comHand = rand() % 3;
}

void PrintHands() {

	cout << "���� ��������? : \n";
	if (_myHand == 0) {
		cout << "����" << endl;
	}
	else if (_myHand == 1) {
		cout << "����" << endl;
	}
	else if (_myHand == 2) {
		cout << "��" << endl;
	}
	else {
		cout << "�߸� �̾ҽ��ϴ�" << endl;
	}

	cout << "��밡 ��������? : \n";
	if (_comHand == 0) {
		cout << "����" << endl;
	}
	else if (_comHand == 1) {
		cout << "����" << endl;
	}
	else if (_comHand == 2) {
		cout << "��" << endl;
	}
	else {
		cout << "�߸� �̾ҽ��ϴ�" << endl;
	}
}

void PrintGameResult() {

	if (_myHand == _comHand)
	{
		cout << "-----���� �����ϴ�.-----" << endl;
	}
	else if (_myHand == 0)
	{
		if (_comHand == 1)
			cout << "-----��밡 �̰���ϴ�.-----" << endl;
		else
			cout << "-----���� �̰���ϴ�.-----" << endl;
	}
	else if (_myHand == 1)
	{
		if (_comHand == 2)
			cout << "-----��밡 �̰���ϴ�.-----" << endl;
		else
			cout << "-----���� �̰���ϴ�.-----" << endl;
	}
	else if (_myHand == 2)
	{
		if (_comHand == 0)
			cout << "-----��밡 �̰���ϴ�.-----" << endl;
		else
			cout << "-----���� �̰���ϴ�.-----" << endl;
	}
	else
	{
		cout << "�ٽ� ���ּ���." << endl;
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