#pragma once
#include <iostream>
using namespace std;

// �Ϲ����� Ŭ����
//class Wolf
//{
//protected:
//	const char* name;
//
//public:
//	void Show();
//
//public:
//	Wolf(const char* name);
//	~Wolf();
//};

// �������̽� Ŭ����
class Wolf
{
public:
	virtual void Show() = 0;
};

