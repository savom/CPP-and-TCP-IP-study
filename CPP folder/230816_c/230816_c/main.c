#include <stdio.h>

// �Լ� ������
// �Լ��� �ּҸ� �����ϴ� ���� ����.
// 
// <����>
// [��ȯ ������ ����] (*[������ �̸�])([�Ű� ���� ����]);
// ex. int (*fp)(int,int);
//
int Add(int a, int b);
int Sub(int a, int b);

// void ������.
// <����>
// void *(������ �̸�);
// ������ ������ ���� �������� �ʴ� ������.
// = �ƹ� ������ ������ �ּҸ� ������ �� �ִ� ������.

int main()
{
	#pragma region �Լ� ������
	// ������ �̸� : fp
	// ��ȯ ������ ������ int�̰�,
	// �Ű� ������ int 2���� �Լ��� �ּ�'��' ������ �� �ִ�.
	
	// �ڡڡڡ� �Լ��� �ּ� = �Լ��� �̸�.
	/*int (*fp)(int, int);
	fp = Add;
	printf("fp(10,20) = %d\n", fp(10, 20));

	fp = Sub;
	printf("fp(10,20) = %d\n", fp(10, 20));*/
#pragma endregion

	void* vp;
	int a = 10;
	float f = 14.23f;
	char c = 'A';

	// void �����͸� ���� ��
	// �ݵ�� �ش� void �������� ������ ������ ��������� �Ѵ�!

	vp = &a;
	// printf("*vp = %d\n", *vp);
	printf("*vp = %d\n", *(int*)vp);
	vp = &f;
	printf("*vp = %.2f\n", *(float*)vp);
	
	vp = &c;
	printf("*vp = %c\n", *(char*)vp);



	return 0;
}

int Add(int a, int b)
{
	return a+b;
}

int Sub(int a, int b)
{
	return a-b;
}
