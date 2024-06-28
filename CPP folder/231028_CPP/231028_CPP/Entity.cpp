#include "Entity.h"

void Entity::Damage(int damage)
{
	float defParam = def * 0.01f;
	if (defParam > 0.5f) // �ִ� 50%�� �Ѿ�� �ʵ��� ����.
		defParam = 0.5f;
	bool defendSuccess = Random::Range(0.0f, 1.0f) < 0.1f + defParam;
	if (defendSuccess)
	{
		damage *= 0.1f; // �� �����ϸ� ������� 10%�� ����.
		Defend();
	}
	cout << name << "��(��) "<< damage
		<< "��ŭ�� ������� �Ծ���." << endl;
	hp -= damage;
	cout << "���� ü��: " << hp << "/" << maxHp << endl;
}

void Entity::Defend()
{
	cout <<name <<"��(��) �� �����ߴ�!" << endl;
}

Entity::Entity(const char* name, int hp, int atk, int def)
	:hp(hp),maxHp(hp),atk(atk),def(def)
{
	int length = strlen(name) + 1;
	this->name = new char[length];
	strcpy_s(this->name, length, name);
}

Entity::~Entity()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}
