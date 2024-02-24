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

	cout << "몬스터와 마주쳤습니다" << endl;
	_monsterHp = 4;
	_monsterAttack = 2;

	//~면 반복한다
	//while (조건)
	//{
	//}

	while (_monsterHp > 0 && _hp > 0) {
		cout << "몬스터를 공격했습니다" << endl;
		_monsterHp -= _attack;
		cout << "몬스터 남은 체력 : " << _monsterHp << endl;

		cout << "몬스터가 당신을 공격했습니다" << endl;

		cout << "피해를 입었습니다" << endl;
		_hp = _hp - _monsterAttack;
		cout << "내 남은 체력 " << _hp << endl;

	}

}

void BossBattle() {
	
	_bossHp = 50;
	_bossAttack = 20;

	while (_bossHp > 0 && _hp > 0) {
		cout << "보스를 공격했습니다" << endl;
		_bossHp -= _attack;
		cout << "보스 남은 체력 : " << _bossHp << endl;

		cout << "보스가 당신을 공격했습니다" << endl;

		cout << "피해를 입었습니다" << endl;
		_hp = _hp - _bossAttack;
		cout << "내 남은 체력 " << _hp << endl;
		
		if (_bossHp == 0) {
			cout << "보스를 물리쳤습니다!" << endl;
		}
	}
}

void MovePlayer() {
	cout << "플레이어가 움직일 방향을 골라주세요 (0 : 북, 1 : 남, 2 : 서, 3 : 동)" << endl;
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

	//cout << "현재위치 : ( X : , Y : )" << endl;
	::printf("현재위치 : ( X : %d, Y : %d)\n", _x, _y);
}


void main() {

	cout << "-TEXT RPG-" << endl;
	cout << " 게임이 시작되었습니다 " << endl;

	while (1)
	{
		MovePlayer();

		if (_x == 2 && _y == 1) {
			cout << "- 게임을 클리어했습니다! -" << endl;
			exit(0);

		}
		else if (_x == 1 && _y == 1) {
			cout << "보스가 나타났습니다!" << endl;
			BossBattle();
		}
		else {
			BattleMonster();
		}
	}
	
	//BattleMonster();

	//숙제 2.
	//TEXT RPG 만들기
	// ATTACK, HP, X(0), Y(0) 가 있고
	//
	//1. 게임이 시작하면
	//   (상하좌우)로 이동할수있다.
	//2. 한칸 움직일때마다 방에 입장한다.
	//3. 방에서는 몬스터와 마주치는데,
	//4. 몬스터의 공격력은 1~10 사이, HP는 5~10 사이다. (방에 들어가면 이때 몬스터의 공격력과 체력이 지정)
	//5. 몬스터와 내가 한대씩 때린다.
	//6. 몬스터가 죽으면 다른방으로 이동할 수 있다.
	//7. 방을 5번 움직이거나
	//8. 보스의 능력치는 HP 50, ATTACK : 20
	//9. X(1), Y(1) 방으로 가면 보스가 나온다
	//10. X(2), Y(1) 방으로 가면 게임이 클리어된다.

}