#include "Human.h"

void Human::Attack(Goblin* goblin)
{
	bool activateSkill = Random::Range(0.0f, 1.0f) < 0.4f;
	int damage = atk;
	if (activateSkill) // 40%
	{
		damage *= 1.5f;
		Kick();
	}
	else
	{
		Punch();
	}
	goblin->Damage(damage);
}



void Human::Kick()
{
	cout << name << "��(��) �����Ľ�Į ű�� �����ߴ�!" << endl;
}

void Human::Punch()
{
	cout << name << "��(��) �ָ԰����� �����ߴ�!" << endl;
}

Human::Human(int hp, int atk, int def)
	:Monster("�ΰ�", hp, atk, def)
{
}
