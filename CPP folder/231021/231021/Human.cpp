#include "Human.h"

void Human::Setdata(const char* name, int age)
{
	int length = strlen(name) + 1;
	this->name = new char[length];
	strcpy_s(this->name, sizeof(char) * length, name);

	this->age = age;
}

void Human::DeleteData()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}

void Human::Show()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << "��" << endl;
}

Human& Human::operator=(const Human& copyHuman)
{
	if (name != nullptr) // ���� �� �̸���  ���� �Ҵ�Ǿ� �ִٸ�
		delete[] name; // �� �̸� �޸� ����.
	
	// ���� ���� ���� �ۼ�
	// 1. ���ο� �޸𸮸� ���� �Ҵ�.
	int length = strlen(copyHuman.name) + 1;
	name = new char[length];

	// 2. �Ҵ��� �޸𸮿� ���� ������ ����.
	strcpy_s(name, sizeof(char) * length, copyHuman.name);

	age = copyHuman.age;
	return *this;
}

Human::Human()
{
	cout << "Human ������ ȣ��!" << endl;
}

// ��� �̴ϼȶ����� Member Initializer
// Initialize : �ʱ�ȭ.
// <����> �����ڸ� ����
// [������] : [��� 1]([������]), [��� 2]([������]) ...
// [���]�� [������]�� ����.
Human::Human(const char* name, int age) : age(age) // ��� �̴ϼȶ�����
{
	int length = strlen(name) + 1;
	this->name = new char[length];
	strcpy_s(this->name, sizeof(char) * length, name);

	
}

Human::Human(const Human& copyHuman) : age(copyHuman.age)
{
	// ���� ���� ���� �ۼ�
	// 1. ���ο� �޸𸮸� ���� �Ҵ�.
	int length = strlen(copyHuman.name) + 1;
	name = new char[length];
	
	// 2. �Ҵ��� �޸𸮿� ���� ������ ����.
	strcpy_s(name, sizeof(char) * length, copyHuman.name);

}

Human::~Human()
{
	// cout << "Human �Ҹ��� ȣ��!" << endl;
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}
