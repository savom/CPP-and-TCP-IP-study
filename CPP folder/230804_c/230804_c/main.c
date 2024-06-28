#include <stdio.h>

// ������.
// = ���� ������ �ּҸ� �����ϴ� ����
// [������ ����]* [������ �̸�];
// ex. float* pF;
// pF��� �̸��� �Ǽ� ������ ���� ������ �ּҸ� �����ϴ� ���� ������ ������!
//

// � ������ ������ ���� ������ �ּҴ� �׻� 16���� ������ �Ǿ� �ִ�.
void Swap(int* pA, int* pB);


int main()
{
	#pragma region ������
		int number = 10, number1 = 20;
		int* pNum = &number;

		printf("<���� ��>\n:");
		printf("number = %d\n", number); //10
		printf("number1 = %d\n", number1); //20
		printf("pNum = %p\n", pNum); // �ּ�
		printf("*pNum = %d\n", *pNum); // 10

		// * ���� ���� ������
		// �ش� �ּҷ� ã�ư�, �� �ּҿ� �ִ� ��������� ����ϴ� ������.

		*pNum = 48; 
		pNum = &number1;
		*pNum = 99;
		// pNum�� �ش��ϴ� �ּҷ� ã�ư���
		// �� �ּҿ� �ִ� ���� ������ 48�� �����Ѵ�.

		printf("<���� ��>\n:");
		printf("number = %d\n", number); // 48
		printf("number1 = %d\n", number1); // 99
		printf("pNum = %p\n", pNum); // �ּ�
		printf("*pNum = %d\n", *pNum); // 99
	#pragma endregion

		int a = 10, b = 20;
		printf("<���� ��>\n");
		printf("a = %d\n", a);
		printf("b= %d\n", b);

		// ����
		Swap(&a, &b);

		printf("<���� ��>\n");
		printf("a = %d\n", a);
		printf("b= %d\n", b);

	return 0;
}

void Swap(int* pA, int* pB)
{
	int c = *pA;
	*pA = *pB;
	* pB = c;
}
