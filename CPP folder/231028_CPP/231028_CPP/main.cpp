#include <iostream>
#include "Goblin.h"
#include "Rabbit.h"
#include "Human.h"
#include "Slime.h"
using namespace std;

// ������ TextRPG �����
// - ���ΰ�(���)
// ���
// - ü��
// - �̸�
// - ���ݷ�
// - ����
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.
// - ���()
// - �� ������()
// - 
// 
// - ���� 3���� 
// �䳢
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.
// - ������()
// - ����ġ��() : Ȯ�������� ����ħ!
// - ����()

// �ΰ�
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - ���()
// - ������()
// - ����()
// - �±�() (�����) - (����)��ŭ ���ظ� ����.

// ������
// - ü��
// - ���ݷ�
// - ����
// - ����()
// - ����()
// - Ƣ�������() 
// - �±�() (�����) - (����)��ŭ ���ظ� ����.

int main()
{
	Goblin goblin(200, 10, 5);
	// ���͸� ��������  10���� ����! 
	Monster* monsters[10];
	for (int i = 0; i < 10; i++)
	{

		// Random::Range([�ּ� ��], [�ִ� ��])
		// (����) ; [�ּ� ��]�̻� ~ [�ִ� ��] �̸��� ������ ���� ��ȯ.
		
		int index = Random::Range(0, 3); // 0 1 2
		switch (index)
		{
			case 0:
				monsters[i] = new Rabbit(50, 4, 3);
				break;
			case 1:
				monsters[i] = new Human(100, 5, 2);
				break;
			case 2:
				monsters[i] = new Slime(150, 0, 0);
				break;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("< %d��° ���� >\n", i + 1);
		goblin.Attack(monsters[i]);
		monsters[i]->Attack(&goblin);
		printf("--------------------------\n");
		cout << "����Ϸ��� Enter�� �����ּ���" << endl;
		getchar(); // Enter��
		system("cls"); // ȭ���� ����� ���.
	}

	for (int i = 0; i < 10; i++)
	{
		delete monsters[i];
	}



	return 0;
}