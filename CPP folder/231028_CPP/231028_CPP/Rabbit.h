#pragma once
#include "Monster.h"

// �䳢
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.
// - ������()
// - ����ġ��() : Ȯ�������� ����ħ!
// - ����()

class Rabbit : public Monster
{
public:
	virtual void Damage(int damage);
	void Attack(Goblin* goblin);

private:
	void Escape();
	void Bite();
	void Slam();
	
public:
	Rabbit(int hp, int atk, int def);
};

