#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma region ����
// ����ü
// ����� ���� �ڷ���
// ���� �ڷ���
// 
// <����>
// 1. ����ü ����
// struct [����ü �̸�]
// {
//		[����]��
// };
// 
// 2. ����ü ����
// struct [����ü �̸�] [���� �̸�];
// ex. struct HumanData humanData;
// humanData.height
//
#pragma endregion

// enum
// ������ ������ �ٿ��� ����ϴ� ������ ����.
// 
// <����>
// 1. enum ����.
// enum [enum�� �̸�]
// {
//		[���� 1],
//		[���� 2],
//		....
//		[���� n],
// }
// 
// 2. enum ���� ����
// enum [enum�� �̸�] [���� �̸�];
// 
// �ۼ��� �ڵ��� ������ �ǹ̸� �ο��ϱ� ���ؼ� ���.
//

enum TestEnum
{
	ONE,
	TWO,
	THREE,
};

enum Medal
{
	GOLD = 1,
	SILVER = 2,
	BRONZE = 3,
};

// ���� �����
// ���� �Է� : ���α׷����� ������ �鿩���� ��.(�ҷ�����. �ε�)
// ���� ��� : ���α׷����� ������ �������� ��.(����. ���� �����)
//

int main()
{
	#pragma region enum
	//// enum ����(= ���� ������ �Ȱ���.)
	//enum TestEnum testEnum;
	//testEnum = TWO;
	///*printf("TestEnum.TWO = %d\n", TWO);*/

	//int rank;
	//printf("�� ���� �Է��ϼ��� : ");
	//scanf_s("%d", &rank);
	//switch (rank)
	//{
	//	case GOLD:
	//		printf("�ݸ޴��Դϴ�!\n");
	//		break;
	//	case SILVER:
	//		printf("���޴��Դϴ�!\n");
	//		break;
	//	case BRONZE:
	//		printf("���޴��Դϴ�!\n");
	//		break;
	//}
#pragma endregion

	#pragma region ���� ���
		//// FILE ���� ����ü
		//FILE* fp;

		//// fopen_s() : ���� ���� �Լ�.
		//// fopen)s([���� ����ü �������� �ּ�], [���� ���], ���� ���]);

		//// [���� ���]
		//// ���� ��� : "C:\\MyFile.txt". ������ �������� ��ġ�� ��Ÿ��.
		//// ��� ��� : "..\\MyFile.txt". ���� ������ ���������ϴ� ��ġ 
		//// .. : ���� ���� 

		//// [���� ���]
		//// "w" : write : ���� ���� ���. ������ ������ ����.
		//// "r" : read : ���� �б� ���. ������ ������ ����.(NULL)
		//// "a" : append : ���� �߰� ���(������ �̾ �ۼ�.) ������ ������ ����
		//// "w+" : �б�/����. ������ ������ ����.
		//// "r+" : �б�/����. ������ ������ ����.
		//// "a+" : �б�/����. ������ ������ ����.

		//fopen_s(&fp, "MyFile.txt", "w");
		//if (fp == NULL)
		//{
		//	printf("������ �� �� �����ϴ�\n");
		//	return 1;
		//}

		//// ��� �Լ�
		//// printf, puts, putchar

		//// ���� ��� �Լ�
		//// fprintf_s, fputs, fputchar...6
		//// �տ� [���� ����ü ������]�� ���� �� �ܿ� �Ϲ� ��� �Լ��� �����ϴ�.
		//fprintf_s(fp, "�ȳ��ϼ���! �� �̸��� %s�Դϴ�.\n", "ȫ�浿");
		//

		//printf("������ �����߽��ϴ�\n");

		//fclose(fp);
	#pragma endregion

#pragma region ���� �Է�
	FILE* fp;
	fopen_s(&fp, "MyData.txt", "r");
	if (fp == NULL)
	{
		printf("������ �� �� �����ϴ�\n");
		return 1;
	}

	while (1)
	{
		char name[20];
		int age;
		float height;


		// feof([���� ����ü ������]) : ������ ������ �ƴ��� Ȯ���ϴ� �Լ�
		// ������ ���� �ƴ� ��� 0�� ��ȯ
		// ������ ���� ��� 0�� �ƴ� ������ ��ȯ.
		if (feof(fp)) 
			break;

		fscanf_s(fp, "%s %d %f", name, (int)sizeof(name), &age, &height);
		printf("�̸� : %s\n", name);
		printf("���� : %d��\n", age);
		printf("Ű : %.2fcm\n", height);

		
	}
	fclose(fp);

#pragma endregion

	return 0;
}