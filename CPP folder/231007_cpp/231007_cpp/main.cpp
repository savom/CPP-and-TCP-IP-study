#include <iostream>
// <iostream> : io(input, output)stream ����� ���� ���.

using namespace std;
// std��� �̸��� ���ӽ����̽�(namespace)�� ����ϰڴ�.
// namespace : name(�̸�) + space(����)
// = �ڵ带 ������ ����.

// ���� �ٲٱ� �Լ� swap

// �Լ� �����ε�(Overloading)
// �Ȱ��� �̸��� ���� �Լ��� ���� �� ���� �� �ִ�!
// �ڡڡڴ�, �� �Լ��� �Ű� ���� ������ �ݵ�� �޶�� �Ѵ�.

// �Ȱ��� �̸��� ���� �Լ��� ���� �� ���� ���
// ��ǻ�ʹ� �ϴ� �Ȱ��� �̸��� ���� ��� �Լ��� �ҷ��´�.
// �� ��, ������ ���ؼ� �ش� ���İ� �Ȱ��� �Լ��� ȣ��!

// �Ű� ������ ������ �� ���� ���, �Լ� �����ε��� �Ұ���.

void Swap(int *a, int *b);
void Swap(int& refA, int& refB);
void Swap(int a, int b);

int main()
{
#pragma region CPP ���
	//// C��� ��Ÿ��
	//// printf("Hello world");

	//// cout : c(console �ܼ�(���� â)) + out(output ���)
	//// : �ܼ� ����� ����ϴ� '��ü'(= �����)

	//// cout���� "hello world�� endl�� ����϶�� ����.
	//// cout�� �ܼ� ��� ������̹Ƿ�, �ش� ������ ���.

	//// endl : end + l(line) ���� ��. \n
	//cout << "Hello World!";
	//cout << "Hello World!" << endl;
#pragma endregion

#pragma region C vs C++ ���
//// ���� ���
//// char* name = "ȫ�浿";
//// const : ��(�׻� ��)��. ������ �ʴ� ����.
//// const�� ǥ�õ� ������ �ʱ�ȭ ����, �����͸� ������ �� ����!

//// C++���ʹ� ���/������ ������ �����ϹǷ�,
//// �ش� �����Ͱ� ����� ��� �ݵ�� const�� �ٿ��� �Ѵ�.
//// "ȫ�浿" => ���ڿ� ���.

//const char* name = "ȫ�浿";
//// name[0] = 'A'; (x)

//int age = 24;
//float height = 175.34f;

//// C��� ��Ÿ��
//// ������ ����� ���, ��ȯ ���ڸ� ����ؾ� �Ѵ�!
///*printf("�̸� : %s\n", name);
//printf("���� : %d��\n", age);
//printf("Ű : %.2fcm\n", height);*/

//// C++ ��Ÿ��
//// ������ ����� ���, ��ȯ ���ڸ� ����� �ʿ䰡 ����.
//// cout�� �ܼ� ��� ������̹Ƿ�,
//// ������ ����� ���, '�˾Ƽ�' ������ ���Ŀ� ���� ���.
//cout << "�̸� : " << name << endl;
//cout << "���� : " << age << "��" << endl;
//cout << "Ű : " << height << "cm" << endl;
#pragma endregion

#pragma region C vs C++ �Է�
//// ���� �Է�
//// �̸��� �Է¹޴� �ڵ� �ۼ�!
//char name[30];
//
//// C��� ��Ÿ��
///*printf("�̸��� �Է��ϼ��� : ");
//scanf_s("%s", name, sizeof(name));
//printf("�Է��� �̸� : %s\n", name);*/

//// C++ ��Ÿ��
//cout << "�̸��� �Է��ϼ��� :";
//
//// cin : c(console) + in(input)
//// : �ܼ� �Է��� ����ϴ� ��ü.
//// cin�� �Է¹��� ������ name���� ����.
//// ��ȯ ����, �ּ� �����ڸ� ����� �ʿ䰡 ����.
//cin >> name;
//cout << "�Է��� �̸� : " << name << endl;
#pragma endregion


	// C++�� �߰�/������.

#pragma region bool
	// �� �� ������ ���� bool
	// �� ��(true, false)�� ������ �� ����.
	// true = 1;
	// false = 0;
	/*bool b = true;
	cout << "b = " << b << endl;

	b = false;
	cout << "b = " << b << endl;*/
#pragma endregion

#pragma region ������
	// ������
	// ���� ������ ������ ���̴� ��.
	// <����>
	// [������ ����]& [������ �̸�] = [���� �̸�];
	// : [����]�� [������ �̸�]�̶�� ������ ����.
	// ���ķ�, [���� �̸�] ��� [������ �̸�]�� ����� �� ����.

	//int a = 10;

	//// a��� ���� ������ refNum�̶�� ������ ���δ�.
	//int& refNum = a;
	//refNum = 20;
	//cout << "<���� ��>" << endl;
	//cout << "a = " << a << endl; // 10
	//cout << "refNum = " << refNum << endl; // 10
	//
	//refNum = 78;
	//
	//cout << "<���� ��>" << endl;
	//cout << "a = " << a << endl; // 78
	//cout << "refNum = " << refNum << endl; // 78

#pragma endregion

#pragma region ������ Ȱ��
//int a = 10, b = 20;
//cout << "<���� ��>" << endl;
//cout << "a = " << a << endl;
//cout << "b = " << b << endl;

//////Swap(&a, &b); // ������ Ȱ��
//Swap(a, b); // ������ Ȱ��
//
//// �ڡڡڡڡڡ�
//// �����Ϳ� ����ϰ�,
//// ������ �Ű� ������ ����� ���
//// �ٸ� �Լ��� �ִ� ������ �����͸� ������ �� �ִ�.!
//// ex. cin�� �Է� ���.	

//cout << "<���� ��>" << endl;
//cout << "a = " << a << endl;
//cout << "b = " << b << endl;

/*int a;
cin >> a;*/

#pragma endregion 

// C++�� ���� �Ҵ�.
// 
// �̸��� �Է¹޴� �ڵ� �ۼ�!(���� �Ҵ�)

#pragma region C��� �����Ҵ�
//// C��� ��Ÿ��
//// malloc()
//// ��ȯ ������ : ��� ���� �Ҵ��� �޸��� �ּ�.
//	char* nameBuffer = (char*)malloc(200); // �ӽ� ���� ����
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf_s("%s", nameBuffer, 200); //
//
//	int len = strlen(nameBuffer) + 1;
//	char* name = (char*)malloc(sizeof(char) * len);
//	strcpy_s(name, sizeof(char)* len, nameBuffer);
//
//	free(nameBuffer);
//
//	printf("�Է��� �̸� : %s\n", name);
//
//	free(name);
#pragma endregion


// C++ ��Ÿ��
// new : �޸𸮸� ���� �Ҵ��ϴ� ������.
// new (������ ����)[(ĭ ��)]; - �迭 ���� �Ҵ�
// �Ǵ�
// new (������ ����); - ���� ���� �Ҵ�

// delete : ���� �Ҵ��� �޸𸮸� �����ϴ� ������.
// delete[] : ���� �Ҵ��� �迭�� ����.
// delete : ���� �Ҵ��� ������ ����.

	char* nameBuffer = new char[200];
	// char* nameBuffer = (char*)malloc(sizeof(char) * 200);


	cout << "�̸��� �Է��ϼ��� : ";
	cin >> nameBuffer;

	int length = strlen(nameBuffer) + 1;
	char* name = new char[length];
	strcpy_s(name, sizeof(char)* length, nameBuffer);

	delete[] nameBuffer;

	cout << "�Է��� �̸� : " << name << endl;

	delete[] name;

	return 0;
}

void Swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void Swap(int& refA, int& refB)
{
	int c = refA;
	refA = refB;
	refB = c;
}
