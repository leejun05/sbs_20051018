#include<iostream>
#include<time.h>
using namespace std;

int _attack = 10;
int _hp = 200;
int _x = 0;
int _y = 0;
int _monsterHp = 0;
int _monsterAttack = 0;
int input;
int _moveCount = 0;
int _bossHp = 0;
int _bossAttack = 0;

void BattleMonster() {

	srand(time(NULL));

	cout << "���Ϳ� �����ƽ��ϴ�" << endl;
	_monsterHp = 4;
	_monsterAttack = 2;

	//~�� �ݺ��Ѵ�
	//while (����)
	//{
	//}

	while (_monsterHp > 0 && _hp > 0) {
		cout << "���͸� �����߽��ϴ�" << endl;
		_monsterHp -= _attack;
		cout << "���� ���� ü�� : " << _monsterHp << endl;

		cout << "���Ͱ� ����� �����߽��ϴ�" << endl;

		cout << "���ظ� �Ծ����ϴ�" << endl;
		_hp = _hp - _monsterAttack;
		cout << "�� ���� ü�� " << _hp << endl;

	}

}

void BossBattle() {
	
	_bossHp = 50;
	_bossAttack = 20;

	while (_bossHp > 0 && _hp > 0) {
		cout << "������ �����߽��ϴ�" << endl;
		_bossHp -= _attack;
		cout << "���� ���� ü�� : " << _bossHp << endl;

		cout << "������ ����� �����߽��ϴ�" << endl;

		cout << "���ظ� �Ծ����ϴ�" << endl;
		_hp = _hp - _bossAttack;
		cout << "�� ���� ü�� " << _hp << endl;
		
		if (_bossHp == 0) {
			cout << "������ �����ƽ��ϴ�!" << endl;
		}
	}
}

void MovePlayer() {
	cout << "�÷��̾ ������ ������ ����ּ��� (0 : ��, 1 : ��, 2 : ��, 3 : ��)" << endl;
	cin >> input;

	if (input == 0) {
		_y--;
	}
	else if (input == 1) {
		_y++;
	}
	else if (input == 2) {
		_x--;
	}
	else if (input == 3) {
		_x++;
	}

	//cout << "������ġ : ( X : , Y : )" << endl;
	::printf("������ġ : ( X : %d, Y : %d)\n", _x, _y);
}


void main() {

	cout << "-TEXT RPG-" << endl;
	cout << " ������ ���۵Ǿ����ϴ� " << endl;

	while (1)
	{
		MovePlayer();

		if (_x == 2 && _y == 1) {
			cout << "- ������ Ŭ�����߽��ϴ�! -" << endl;
			exit(0);

		}
		else if (_x == 1 && _y == 1) {
			cout << "������ ��Ÿ�����ϴ�!" << endl;
			BossBattle();
		}
		else {
			BattleMonster();
		}
	}
	
	//BattleMonster();

	//���� 2.
	//TEXT RPG �����
	// ATTACK, HP, X(0), Y(0) �� �ְ�
	//
	//1. ������ �����ϸ�
	//   (�����¿�)�� �̵��Ҽ��ִ�.
	//2. ��ĭ �����϶����� �濡 �����Ѵ�.
	//3. �濡���� ���Ϳ� ����ġ�µ�,
	//4. ������ ���ݷ��� 1~10 ����, HP�� 5~10 ���̴�. (�濡 ���� �̶� ������ ���ݷ°� ü���� ����)
	//5. ���Ϳ� ���� �Ѵ뾿 ������.
	//6. ���Ͱ� ������ �ٸ������� �̵��� �� �ִ�.
	//7. ���� 5�� �����̰ų�
	//8. ������ �ɷ�ġ�� HP 50, ATTACK : 20
	//9. X(1), Y(1) ������ ���� ������ ���´�
	//10. X(2), Y(1) ������ ���� ������ Ŭ����ȴ�.

}