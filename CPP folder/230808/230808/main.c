#include <stdio.h>

	#pragma region ����
// ������
// ��������� �ּҸ� �����ϴ� �������.
// [������ ����]* [�������� �̸�];
// pD��� �̸��� 8����Ʈ �Ǽ� ������ ��������� �ּҸ� ������ �� �ִ� ��������� ������.
// double* pD;
// 
// * ���� ���� ������.
// �ش��ϴ� �ּҷ� ã�ư��� �� �ּҿ� �ִ� ���� ������ ����Ѵ�.
// 
// � �Լ��� �Ϲ����� �Ű� ������ �ٸ� �Լ��� �ִ� ������ �����͸� �����Ϸ���?
//
#pragma endregion

// �������� Ư¡
// 1. � ������ ������ �������̴� �޸� ũ�Ⱑ �����ϴ�.
// = ��� �ּҴ� 16���� ������ ǥ���Ǳ� ������!
// 64��Ʈ(x64) : 8����Ʈ
// 32��Ʈ(x86) : 4����Ʈ.
// 
// 2. �����ʹ� ������ ������ �����ϴ�.
// ������ + 1 => [�ش� �ּ� ��] + [�����Ͱ� ����Ű�� ���� ������ ������ ���� �޸� ũ��]
// ex. double d;
// double* pD = &d;
// pD + 1 => 8����Ʈ �����δ�.
// 
// �迭�� ������.
// �迭 : ���� ���� ��������� ���� ���� ������Ų ����.
// �ڡڡڡڡ� �迭�� �̸� = �迭�� ù��° ���� ������ �ּ�.
// 
// arr[0] => *(arr + 0)
// 
// �迭�� �Լ�.
// ���� �迭�� ����(�� ĭ����?)�� ��ȯ�ϴ� �Լ� �����!
// int GetArrayLength(int arr[]);
// 

// �ڡڡڡ� 
// �迭�� �Լ��� �Ű������� ������ ���, �ڵ����� �����ͷ� ����ȴ�!
// �̷��� Ư¡ ������, �Լ��� �Ű� ������ ������ �迭�� ��ü �޸� ũ�⸦ �� �� ����,
// ���� ���� ���� �Ի��ϴ� ���� �Ұ����ϴ�.

// �迭�� �Ű������� ����� ���, �ݵ�� �迭�� ����(ũ��)�� �Բ� �Ű������� ����ϴ� ���� ����!
int GetArrayLength(int arr[]);


int main()
{
	#pragma region �������� �޸� ũ��
		//int n, *pN;
		//char c, *pC;
		//double d, *pD;

		//printf("n�� �޸� ũ�� : %ld\n", sizeof(n)); // 4
		//printf("c�� �޸� ũ�� : %ld\n", sizeof(c)); // 1
		//printf("d�� �޸� ũ�� : %ld\n", sizeof(d)); // 8
	
		//printf("pN�� �޸� ũ�� : %ld\n", sizeof(pN)); // 8
		//printf("pC�� �޸� ũ�� : %ld\n", sizeof(pC)); // 8
		//printf("pD�� �޸� ũ�� : %ld\n", sizeof(pD)); // 8
	#pragma endregion 

	#pragma region ������ ����
		/*int num;
		int* pNum = &num;

		float f;
		float* pF = &f;

		char c;
		char* pC = &c;

		double d;
		double* pD = &d;

		printf("pNum = %d\n", (int)pNum);
		printf("pNum + 1 = %d\n", (int)(pNum + 1));

		printf("pF = %d\n", (int)pF);
		printf("pF + 1 = %d\n", (int)(pF + 1));
	
		printf("pC = %d\n", (int)pC);
		printf("pC + 1 = %d\n", (int)(pC + 1));

		printf("pD = %d\n", (int)pD);
		printf("pD + 1 = %d\n", (int)(pD + 1));*/
	#pragma endregion

	#pragma region �����Ϳ� �迭
	//int arr[5] = { 1,2,3,4,5 };

	//printf("arr = %d\n", *arr);
	//printf("&arr[0] = %p\n", &arr[0]);

	//// �迭�� 2��° ���� ������ �ּ�
	//printf("&arr[1] = %p\n", &arr[1]);
	//printf("arr + 1 = %p\n", arr + 1);

	//for (int i = 0; i < 5; i++)
	//{
	//	// �ڡڡڡڡ� *((�迭 �̸�) + i ) => (�迭 �̸�)[i]
	//	// [] ÷�� ������.(= ������ ���� ���� ������!)

	//	printf("%d\n", *(arr + i));
	//}

	//// �����ʹ� �迭ó�� ����� �� �ִ�!
	//int* pNum = arr;
	//printf("pNum : ");
	//for (int i = 0; i < 5; i++)
	//{
	//	// printf("%d ", pNum[i]);
	//	printf("%d ", *(pNum + i));
	//}
	//printf("\n");
#pragma endregion

	//int arr[10];
	//int length = GetArrayLength(arr);

	//int size = sizeof(arr); // 40
	//printf(" arr�� ��ü �޸� ũ�� : %d\n", size); // 40

	//printf("arr�� ���� : %d\n", size/sizeof(int)); // 10
	//printf("arr�� ���� : %d\n", length); // 2?

	char name[20];

	

	printf("�̸��� �Է��ϼ��� : ");

	// scanf_s() :
	// name�� &�� �Ⱥ��̴� ������ name��ü�� �迭�� ù ��° �ּҸ� ������ �־��.
	// sizeof�� ���� ������ ��������� ũ�⸦ �˷��༭, ���࿡ �Է��� ������ ���� ���� �������� ���� ��� (�Ϻη� �� ū ������ ����� ����)������ ����.
	scanf_s("%s", name, sizeof(name));

	return 0;
}

int GetArrayLength(int arr[])
{
	// 40 ����Ʈ /4
	int b = 0;
	int a = sizeof(arr);
	b = a / 4;

	return b;
}
