#pragma once
#include <iostream>
using namespace std;

// Ŭ���� ���
// ��� : ���, �� ���� �����ִ� ��.
// : �θ� Ŭ������ �ڽ� Ŭ�������� ��� �����Ϳ� ����� �����ִ� ��.

// class [Ŭ���� �̸�] : public [�θ� Ŭ���� �̸�]

class Human
{
private:
	char* name;
	int age;

public:
	void Show();

public:
	Human(const char* name, int age);
	~Human();
};

