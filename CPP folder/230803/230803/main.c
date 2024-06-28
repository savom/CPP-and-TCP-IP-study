#include <stdio.h>

#pragma region ����
// break, continue
// �ݺ��������� break : ���๮�� �����ϴ� ���� break�� ������ ��� �ݺ��� ����.
// 
// �ݺ��������� continue
// while�� continue : ���๮�� �����ϴ� ���� continue�� ������ [�� ��]���� �̵�.
// for�� continue : ���๮�� �����ϴ� ���� continue�� ������ [���๮ 2]���� �̵�.
// 
// do ~ while
// <����>
// do
//  [���๮] 1��.
// while([�� ��]);
// 
// 1. [���๮] ����
// 2. [�� ��] Ȯ��
// 3. [�� ��]�� ���̸� 1.�� ���ư� �ݺ�. �����̸� ����.
// 
// �迭
// ���� ���� ���� ������ ���� ���� �����Ǿ� �ִ� ����.
// <����>
// (������ ����) (�迭�� �̸�)[(ĭ��)];
// ex. float fArr[48]; 
// fArr�̶�� �Ǽ� ������ ���� ���� 48ĭ¥�� �迭�� ������!
// �迭�� {}�߰�ȣ �ʱ�ȭ�� �����ϴ�.
// {}�߰�ȣ �ʱ�ȭ ��, �ʱ�ȭ ���� ���� �κ��� ���� 0���� �ʱ�ȭ�ȴ�.
// float fArr[48] = {1,2,3};
// 
// �迭�� ���� ���� ��ȣ�� 0���� �����Ѵ�.
// fArr[2]
// fArr�� 3��° �������
//
#pragma endregion

// �Լ�.
// ��(����) + ��(����) = ����(��� ��ġ) ����.
// function ���
// 
// �׵��� ����ߴ� ���(=�Լ�)��
// printf() : ��� ���
// scanf_s() : �Է� ���
// main() : 
// 
// <����>
// 1. �Լ� ���� :�̷��̷��� ������ �Լ��� �ִ�! ��� ���ϴ� ��.
// [��ȯ ������ ����] [�Լ��� �̸�]([�Ű� ���� ���]);
// 
// 2. �Լ� ���� : �Լ��� ���� ������ �ۼ�.
// [��ȯ ������ ����] [�Լ��� �̸�]([�Ű� ���� ���]);
// {
//		[���๮]��
//		return [��ȯ ������];
// }
// 
// 3. �Լ� ȣ��(= �Լ� ����)
// [�Լ��� �̸�]([�Ű� ������]);
//

// 1. �Լ� ����
int Add(int a, int b);

// ����(Sub), ���ϱ�(Mul), ������(Div) �Լ� �����
int Sub(int a, int b);
float Mul(float a, float b);
float Div(float a, float b);

// ������ �Է¹ް�, �Է¹��� ������ ��ȯ�ϴ� �Լ� �����!
// InputNumber
int InputNumber();

// [�ּ� ��] �̻� ~ [�ִ� ��] �̸��� ������ �Է¹ް�
// �Է¹��� ������ ��ȯ�ϴ� �Լ� �����!
// ���࿡ ���� ���� ������ �Է¹����� �ݺ��ؼ� �ٽ� �Է�
// 1 ~ 10 57 �ٽ�
// InputNumberInPRange
int InputNumberInRange();

int main() 
{
#pragma region ��Ģ���� �Լ�
	// 3. �Լ� ȣ��
	/*int result = Add(10, 20);
	printf("Add(10, 20) = %d\n", result);
	
	int sub = Sub(20, 10);
	printf("sub(20, 10) = %d\n", sub);

	float mul = Mul(5, 2);
	printf("mul(5, 2) = %.2f\n", mul);
	
	float div = Div(20, 4);
	printf("div(20, 4) = %.2f\n", div);*/
#pragma endregion
	
	//int a = 0;
	//// ���� �Լ��� ������ �Է� ���� ��, �� ������ ���
	//int inputNum = InputNumber();
	//printf("����� ���� : %d", inputNum);

	int number = InputNumberInRange(0, 100);
	printf("�Է��� ���� : %d\n", number);

	return 0;
}

// 2. �Լ� ����
int Add(int a, int b)
{
	int result = a + b;

	return result;
}

int Sub(int a, int b)
{
	int result = a - b;

	return result;
}

float Mul(float a, float b)
{
	float result = a * b;
	return result;
}

float Div(float a, float b)
{
	// return��  ����Ǹ�, �Լ��� ����� ��ȯ�Ǹ鼭 ����.
	if (b == 0)
	{
		// ����ó��!
		printf("0���� ���� �� �����ϴ�!\n");
		return 0;
	}
	float result = a / b;
	return result;
}

int InputNumber()
{
	int a;
	printf("������ �Է��� �ּ��� : ");
	scanf_s("%d", &a);
	return a;
}

// [�ּ� ��] �̻� ~ [�ִ� ��] �̸��� ������ �Է¹ް�
// �Է¹��� ������ ��ȯ�ϴ� �Լ� �����!
// ���࿡ ���� ���� ������ �Է¹����� �ݺ��ؼ� �ٽ� �Է�
// 1 ~ 10 57 �ٽ�
// InputNumberInPRange

int InputNumberInRange(int min, int max)
{
	/*int a = 0; �ٽ� Ǯ���!!
	int b = 0;
	int c = 0;
	printf("�ִ� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ּ� ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &c);
	while (a <= c && c <= b)
	{
		if (a <= c && c <= b)
			printf("�Է��� ���� : %d", c);
			break;
		case 0:
			printf("�ٽ� �Է��� �ּ���.");

	}*/

	int number;
	while (1)
	{
		printf("������ �Է��ϼ���(%d ~ %d) : ", min, max);
		scanf_s("%d", &number);
		if (min <= number && number <= max)
		{
			break;
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n");
		}
		return number;
	}
	
	
	
	return 0;
}
