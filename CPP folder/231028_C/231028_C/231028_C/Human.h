#pragma once
#include <iostream>
using namespace std;

// ���� �޼���.
// ���� �޼��带 �������� ���, '�׻�' �������� �޼��带 ȣ��!
// �޼��� �տ� virtual Ű���带 ����.

// �߻�(���� ����) �޼���
// ������ ���� ���� �޼���.
// (���� �޼���) = 0;

// �߻� �޼���� '�ݵ��' �ڽ� Ŭ�������� �������ؾ� �Ѵ�.

// �߻� Ŭ����
// �߻� �޼��带 1�� �̻� ���� Ŭ����.
// �߻� Ŭ������ �ϼ��� Ŭ������ �ƴϹǷ�, ��ü�� ������ �� ����!(Ŭ���� ������ ���� �� ����.)

class Human
{
// private:
protected:
	char* name;
	int age;

public:
	// void Show(); // �Ϲ� �޼���
	// virtual void Show(); // ���� �޼���
	virtual void Show() = 0; // �߻� �޼���
public:
	Human(const char* name, int age);
	~Human();
};

