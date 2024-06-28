#include "Human.h"

void Human::SetData(const char* name, int age)
{
	// this : �̰�
	// �� �ڽ� ��ü�� ������.
	
	int length = strlen(name) + 1;
	
	// this->name : �� �ڽ� ��ü�� name(��� ���� name)

	this->name = new char[length];
	strcpy_s(this->name, sizeof(char) * length, name);

	this->age = age;

	
}

void Human::DeleteData()
{
	// nullptr : null + ptr(pointer ������) �� ������
	// = (void*)0. �ּ� �����μ��� 0
	// �����Ϳ� "�ƹ��͵� ����"�̶�� �ǹ̸� ������.

	// name �ȿ� ����� �ּҰ� "�ƹ��͵� ����"�� �ƴϸ�
	// = name�� ���� �Ҵ��� ���������� �̷�� ���ٸ�
	if (name != nullptr)
	{
		// name�� �ش��ϴ� �ּҿ� �ִ� �޸� ����.
		delete[] name;
		name = nullptr;
	}
	
}

void Human::Show()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << "��" << endl;

}
