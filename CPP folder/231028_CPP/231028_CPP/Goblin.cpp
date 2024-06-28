#include "Goblin.h"

void Goblin::Attack(Monster* monster)
{
	// 60% Ȯ���� �ָ� ����
	// 40% Ȯ���� ������ ����
	// Random::Range([�ּ� ��], [�ִ� ��])
	// : [�ּ� ��] �̻� ~ [�ִ� ��] ������ ������ �Ǽ� ��ȯ.
	bool activateSkill = Random::Range(0.0f, 1.0f) < 0.4f;
	int damage = atk;
	if (activateSkill) // 40% Ȯ���� �� �����Ⱑ �ߵ��Ǹ�
	{
		damage *= 1.5f;
		ThrowAttack();
	}
	else
	{
		cout << name << " ��(��) �ָ����� �����ߴ�!" << endl;
	}
	monster->Damage(damage);

}

void Goblin::ThrowAttack()
{
	cout << name << "��(��) ���� ������!" << endl;
}

Goblin::Goblin(int hp, int atk, int def)
	: Entity("���", hp, atk, def)
{

}
