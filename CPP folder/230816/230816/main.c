#include <stdio.h>

	#pragma region ����
// 2���� �迭
// �迭 ���� ���� ���ڷ� �����Ǿ� �ִ� ����.
// (������ ����) (�迭�� �̸�)[(�� ��)][(ĭ ��)];
// float fArr[3][10]; // 10ĭ¥�� 3��
// �ڡڡڡڡ� ��� ���� ������ �� �ٷ� �����Ǿ� �ִ�.
// 
// ������ �迭
// �����Ͱ� ���ڷ� �����Ǿ� �ִ� ����.
// (������ ����)* (�迭�� �̸�)[(ĭ ��)];
// �ڡڡڡ� ������ �迭�� 2���� �迭ó�� ����� �� �ִ�.
// 
// ������ �迭 vs 2���� �迭
// 2���� �迭�� '�ݵ��' ��� �迭�� ���ڷ� �����Ǿ� �ִ�.
// ������ �迭�� �׷��� ���� �� �ִ�.
// 
// ���� ������
// �������� ������
// ���� ������ �ּҸ� �����ϴ� ���� ������ �ּҸ� �����ϴ� ���� ����.
// 
// ���� ������ Ȱ�� 1:
// �Լ��� �Ű� ������ ����
// �ٸ� �Լ��� �ִ� �������� �����͸� ���� �� ���
// 
// ���� ������ Ȱ�� 2
// ���� �����ʹ� ������ �迭ó�� ����� �� �ִ�.
// ���� ���� �����͸� ��쿡 ���� 2���� �迭ó�� ����� �� �ִ�.
// 
#pragma endregion

	#pragma region ���� ������ ����
	// �������� �ּ� ���� ���� �����ϴ� �Լ� �����!
	void Swap_ptr();
	#pragma endregion


int main()
{
	#pragma region ���� ������ Ȱ�� 1
	// ���� ������ Ȱ�� 1:
	// �Լ��� �Ű� ������ ����
	// �ٸ� �Լ��� �ִ� �������� �����͸� ���� �� ���
	// 
	//int a = 10, b = 20;
	//int *pA = &a, *pB = &b;
	//printf("<���� ��>\n");
	//printf("a = %d, b = %d\n", a, b);
	//printf("pA = %d, pB = %d\n", *pA, *pB);

	//// pA <-> pB�� ������ ��ȯ
	//Swap_ptr(&pA, &pB);

	//printf("<���� ��>\n");
	//printf("a = %d, b = %d\n", a, b);
	//printf("pA = %d, pB = %d\n", *pA, *pB);
#pragma endregion

	#pragma region ���� ������ Ȱ�� 2
	// ���� ������ Ȱ�� 2
	// ���� �����ʹ� ������ �迭ó�� ����� �� �ִ�.
	// ���� ���� �����͸� ��쿡 ���� 2���� �迭ó�� ����� �� �ִ�.
	int** ppNum;
	int arr[2][4] = { {1,2,3,4},{5,6,7,8} };

	int* pNum = arr[0]; // arr�� ù��° ���� �ּ�
	int* pNum = arr[1];
	ppNum = pNum;

	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			printf("arr[%d][%d] = %d\n", i, k, ppNum[i][k]);
		}
	}
#pragma endregion


	return 0;
}

void Swap_ptr(int** a, int** b)
{
	int* c = 0;
	c= *a;
	*a = *b;
	*b = c;

	
}