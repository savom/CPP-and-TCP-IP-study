#pragma once
#include "Human.h"

class Student : public Human
{
private:
	int score;

public:
	void Show(); // �θ� Ŭ������ Show()�� ������

public:
	Student(const char* name, int age, int score);
	// (������) = default �Ǵ�
	// (�Ҹ���) = default
	// : �ƹ��͵� �������� �ʴ� �⺻ ������/�Ҹ��ڸ� ����ϰڴ�! ��� �ǹ�.
	~Student() = default;
};

