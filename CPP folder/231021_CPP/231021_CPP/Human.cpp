#include "Human.h"

void Human::Show()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << "��" << endl;
}

Human::Human(const char* name, int age) : age(age)
{
	int length = strlen(name) + 1;
	this->name = new char[length];
	strcpy_s(this->name, sizeof(char) * length, name);
}

Human::~Human()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}
