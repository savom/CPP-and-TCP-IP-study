#include <stdio.h>

#pragma region ����
// �Լ�
// = ���
// printf() �Է� ���
// scanf_s() ��� ���.
// main() 
// 
// 1. �Լ� ���� : �̷��̷��� ������ �Լ��� �ִ�!
// [��ȯ ������ ����] [�Լ��� �̸�] ([�Ű� ���� ���]);
// 
// 2. �Լ� ���� : �Լ��� ���� ������ �ۼ�.
// [��ȯ ������ ����] [�Լ��� �̸�] ([�Ű� ���� ���])
// {
//		[���๮]��;
//		return [��ȯ ������];
// }
// 
// 3. �Լ� ȣ�� : �Լ��� ������.
// [�Լ��� �̸�]([�Ű� ���� ���]);
//
#pragma endregion


// ������ ���� �ٲٴ� �Լ� �����!
void Swap(int* a, int* b);


void Greeting();
// void : ����, �� ��
// ������ ����(= �ƹ��͵� ������ �ǹ��Ѵ�.)
// �Լ��� [��ȯ ������ ����]���� ����� ���, ��ȯ �����Ͱ� ������ �ǹ��Ѵ�.
// ���� �ش� �Լ��� return�� ������ �� �ִ�.
//
int main()
{

	InputNumberInRange(20,10,11);
	printf("�Է��� ���� : %d", InputNumberInRange);
	// Greeting();
	int a = 10, b = 20;
	printf("<���� ��>\n");
	printf("a= %d\n", a);
	printf("b= %d\n", b);

	Swap(a, b);

	printf("<���� ��>\n");
	printf("a= %d\n", a);
	printf("b= %d\n", b);

	return 0;
}

void Swap(int* a, int* b)
{
	int c = a;
	a = b;
	b = c;

	printf("<���� ��>\n");
	printf("a= %d\n", a);
	printf("b= %d\n", b);
}

void Greeting()
{
	printf("�ȳ��ϼ���!\n");
}


// [�ּ� ��] �̻� ~ [�ִ� ��] �̸��� ������ �Է¹ް�
// �Է¹��� ������ ��ȯ�ϴ� �Լ� �����!
// ���࿡ ���� ���� ������ �Է¹����� �ݺ��ؼ� �ٽ� �Է�
// 1 ~ 10 57 �ٽ�
// InputNumberInPRange

int InputNumberInRange(int a,int b,int c)
{
	
	printf("�ִ� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ּ� ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &c);
	while (1)
	{
		if (a <= c && c <= b)
		{
			
			break;
		}
		else
		{
			printf("�ٽ� �Է��� �ּ���.");
			
		}
		return c;
	}
}

// �ڡڡڡ�
// �Լ��� �Ϲ����� �Ű������δ�
// �ٸ� �Լ� �ȿ� �ִ� ������ �����͸� ������ �� ����.