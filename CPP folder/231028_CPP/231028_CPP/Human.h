#pragma once
#include "Monster.h"


// �ΰ�
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - ���()
// - ������()
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.

class Human : public Monster
{
public:
	void Attack(Goblin* goblin);
	
public:
	
	void Kick();
	void Punch();

public:
	Human(int hp, int atk, int def);
};

