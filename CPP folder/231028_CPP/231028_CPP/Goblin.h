#pragma once
#include "Entity.h"
#include "Monster.h"
#include "Random.h"
using namespace std;

// - ���ΰ�(���)
// ���
// - ü��
// - �̸�
// - ���ݷ�
// - ����
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.
// - ���()
// - �� ������()
class Monster;

class Goblin : public Entity
{
private:
	void ThrowAttack();


public :
	void Attack(Monster* monster);
public:
	Goblin(int hp, int atk, int def);
	

};

