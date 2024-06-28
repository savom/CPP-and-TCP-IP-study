#include "Rabbit.h"



void Rabbit::Attack(Goblin* goblin)
{
	bool activateSkill = Random::Range(0.0f, 1.0f) < 0.4f;
	int damage = atk;
	if (activateSkill) // 40%
	{
		damage *= 1.5f;
		Bite();
	}
	else
	{
		Slam();
	}
	goblin->Damage(damage);
}

void Rabbit::Damage(int damage)
{
	float defParam = def * 0.01f;
	if (defParam > 0.5f) // �ִ� 50%�� �Ѿ�� �ʵ��� ����.
		defParam = 0.5f;
	bool defendSuccess = Random::Range(0.0f, 0.1f) < 0.1f + (def * 0.01f);
	if (defendSuccess)
	{
		bool escapeSuccess = Random::Range(0.0f, 0.1f) < 0.3f;
		if (escapeSuccess)
		{
			Escape();
			return;
		}
		else
		{
			damage *= 0.1f;
			Defend();
		}

	}
	cout << name << "��(��) " << damage
		<< "��ŭ�� ������� �Ծ���." << endl;
}

void Rabbit::Escape()
{
	cout << name << "��(��) ������ �����ƴ�!" << endl;
}

void Rabbit::Bite()
{
	
	cout << name << "��(��) �����⸦ �����ߴ�!" << endl;
}

void Rabbit::Slam()
{
	cout << name << "��(��) ���� ��ġ�⸦ �����ߴ�!" << endl;
}

Rabbit::Rabbit(int hp, int atk, int def)
	:Monster("�䳢", hp, atk, def)
{

}
