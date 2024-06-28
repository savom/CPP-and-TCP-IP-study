#include <stdio.h>
#include <stdlib.h>

#pragma region ����
// ���� �Ҵ�
// ���������� �޸𸮸� �Ҵ�(= ���� ������ �����.
// ���α׷��� �ʿ��� �޸��� ũ�⸦ ��Ȯ�� �˱� ��ƴ�.
// 
// C ����� ���� �Ҵ�
// <stdlib.h> �ʿ�!
// malloc(), free()
// malloc() : m(memory) + alloc(allocation �Ҵ�)
// malloc([�޸� ũ��]) : [�޸� ũ��]�� ũ�⸸ŭ ���ο� ���� ������ �����.
// ��ȯ ������ : ������ ���� ������ �ּ�.
// 
// ���� �Ҵ��� �޸𸮴� ���� �����ϱ� �������� �������� �ʴ´�!
// ����, �ݵ�� ���� �����ؾ� �Ѵ�.
// 
// free([�޸� �ּ�])
// [�޸� �ּ�]�� �ش��ϴ� ���� ������ ����.
//
#pragma endregion

// ����� ���� �ڷ���(����ü)
// �����ڰ� ���� ����� �ڷ���(������ ����)
// �ٸ� ������ ������ ���� �� ������ �ִ� ���� ������ ����.

// <����>
// 1. ����ü ���� : �̷��̷��� ������ ����ü�� �ִ�!��� �����.
// struct [����ü �̸�]
// {
//		[����]��
// }
// ����ü �ȿ� �ִ� ������ ��� ������� �Ѵ�.
// 
// 
// 2. ����ü ����
// struct [����ü �̸�] [���� �̸�]
//

struct HumanData
{
	char* name;
	int age;
	float height;
	float weight;
	char* sex;
};

// HumanData�� �̸�, ����, Ű, �����Ը� �Է¹޴� �Լ� �����!
void InputHumanData(struct HumanData* humanData);
// Humandata�� �̸�, ����, Ű, �����Ը� ����ϴ� �Լ� �����!
void OutputHumanData(struct HumanData* humanData);
int main()
{
	// 2. ����ü ���� ����.
	//
	// ����ü �ȿ� �ִ� ��� ������ ����ϱ�!
	// : [���� �̸�].[��� ���� �̸�]

	struct HumanData human;
	human.name = "����";
	human.age = 24;
	human.weight = 60.03f;
	human.height = 167.4f;
	
	struct HumanData humanData;
	InputHumanData(&humanData);
	OutputHumanData(&humanData);

	/*printf("�̸� : %s\n", human.name);
	printf("���� : %d\n", human.age);
	printf("Ű : %.2f\n", human.height);
	printf("������ : %.2f\n", human.weight);*/
	

	return 0;
}

void InputHumanData(struct HumanData* humanData)
{
	printf("�̸��� �Է��ϼ��� : "); 
	scanf_s("%s", humanData->name, sizeof(humanData->name));// �ڡڡڡڡ� ���� ���Ŀ���

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", humanData->age);

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%.2f", humanData->height);

	printf("�����Ը� �Է��ϼ��� : ");
	scanf_s("%.2f", humanData->weight);
}

void OutputHumanData(struct HumanData* humanData)
{
	printf("�̸� : %s\n", humanData->name);
	printf("���� : %d\n", humanData->age);
	printf("Ű : %.2f\n", humanData->height);
	printf("������ : %.2f\n", humanData->weight);
}
