#include "Student.h"

void Student::Show()
{
	/*Human::Show();*/
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << "��" << endl;
	cout << "���� : " << score << "��" << endl;
}

Student::Student(const char* name, int age, int score)
	: Human(name, age), score(score)
{
}
