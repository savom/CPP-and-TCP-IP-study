#pragma once
#include "Human.h"
#include "Wolf.h"


// ���� ���.
class WereWolf : public Wolf, public Human
{
public: // show�� ������ �޸տ��� ���ĵ� ��� ����. why? ��������޼��� ������� �Ӹ� �ƴ϶� �θ𿡼� �޾ƿ� �޼��带 ������ �ؾ��ϱ� ������
	void Show();

public :
	WereWolf(const char* name);
	~WereWolf() = default;
};

