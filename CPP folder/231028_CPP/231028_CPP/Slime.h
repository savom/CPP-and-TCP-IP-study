#pragma once
#include "Monster.h"

// ������
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - ����()
// - Ƣ�������() 
// - �±�() (�����) - (����)��ŭ ���ظ� ����.

class Slime : public Monster
{

public:
	void Attack(Goblin* goblin);
	void Bounce();
	
public:
	Slime(int hp, int atk, int def);
};