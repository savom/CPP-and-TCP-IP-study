#include <iostream>
#include "ArrayList.h"
using namespace std;


// �迭�� ��Ҹ� �����ϴ� �Լ� �����!
// 1 2 3 4 5 <- 87�� 3��° �ڸ��� ����.
// ��� : 1 2 87 3 4 5

// �迭�� ��Ҹ� �����ϴ� ����
// ��ǻ�� ���忡�� �ſ� ����� ���̴�.
// �迭�� ���� ������� ����ϴ�!
// �迭�� ��� ����!
// 1. �� ĭ �ø� �迭�� ���� �Ҵ�. -> ���� �������� ���� ����(���)
// 2. ���� �迭�� �����͸� ���� �Ҵ��� �迭�� ���� -> ���� �������� ���빰 �ű��(����)
// 3. ��� ����
// 4. ������ �Ҵ��� �迭�� �޸𸮿��� ����. -> ���� ������ ������(����, ���)

// ��ǻ�� ���忡�� ��ΰ� ���� => �� �ɸ�.

// �迭�� ����
// �迭�� ��Ҹ� �߰�/�����ϴ� ���� ��ƴ�.

// �ڷ� ����.
// �迭 : �⺻���� ������ �ڷᱸ��
// �迭 : ���� ���� ���� ������ ���ڷ� �����Ǿ� �ִ� ����

// ���ø� template
// Ŭ������ �Լ��� ���� Ʋ.
// ������ ������ �Ϲ�ȭ.

// �ؽ� ȸ�� ����.
// �迭 200���� + 1 ȸ��
// 1. 200�� + 1ĭ ¥�� ���ο� �迭�� �Ҵ�!
// - 1���� �����͸� �����ϴµ� 0.00001�ʶ�� ���� 20�� �ɸ�
// 2. ���� �迭�� �����͸� ���� �Ҵ��� �迭�� ���� => 200���� ������
// 3. ȸ�� �߰�
// 4. ������ 200�� �迭 ����

template<typename T>
void Insert(T** pArr, int length, int index, T value);
//void Insert(int** pArr, int length, int index, int value);


int main()
{
	#pragma region �迭 ����
		//// arr �ȿ� ���� �Ҵ��� �迭 {1,2,3,4,5}�� �ּҰ� ����
		//int* arr = new int[5] {1, 2, 3, 4, 5};
		//cout << "<���� ��>" << endl;
		//for (int i = 0; i < 5; i++)
		//{
		//	cout << arr[i] << " ";
		//}
		//cout << endl;
		//// &arr�� �������� �ּҸ� �������.
		//Insert<int>(&arr, 5, 2, 87);

		//cout << "<���� ��>" << endl;
		//for (int i = 0; i < 6; i++)
		//{
		//	cout << arr[i] << " ";
		//}
		//cout << endl;

		//delete[] arr;

		//char* text = new char[6] {"abcde"};
		//
		//cout << text << endl;
		//
		////Insert(&text, 6, 2, 'A');
		//Insert<char>(&text, 6, 2, 'A');
		//cout << text << endl;

		//delete[] text;
	#pragma endregion	


	// ArrayList ��ü ����
	// count = 0;
	// capacity = 4;
	ArrayList<int> arrayList;
	for (int i = 0; i < 10; i++)
	{
		arrayList.Add(i + 1);
	}

	for (int i = 0; i < arrayList.GetCount(); i++)
	{
		cout << arrayList[i] << " " << endl;
	}

	return 0;
}

//void Insert(int** pArr, int length, int index, int value)
//{	
//	// pArr(�λ�) = arr�� �ּ�(����), length = 5, index = 2, value = 87
//
//	// tempArr = ����
//	int* tempArr = *pArr;
//	// newArr = ����
//	int* newArr = new int[++length];
//	for (int i = 0; i < length; i++)
//	{
//		// ������ �ڸ��� �ε������� ���� ��� �״�� �ű�
//		if (i < index)
//			newArr[i] = tempArr[i];
//		// ������ �ڸ��� �ε����� ���� ��� value�� ����
//		else if (i == index)
//			newArr[i] = value;
//		// ������ �ڸ��� �ε������� Ŭ ��� ���� �� ����
//		else
//			newArr[i] = tempArr[i - 1];
//	}
//	
//	 
//	*pArr = newArr;
//	delete[] tempArr;
//	
//}

template<typename T>
void Insert(T** pArr, int length, int index, T value)
{
	// pArr(�λ�) = arr�� �ּ�(����), length = 5, index = 2, value = 87

	// tempArr = ����
	T* tempArr = *pArr;
	// newArr = ����
	T* newArr = new T[++length];
	for (int i = 0; i < length; i++)
	{
		// ������ �ڸ��� �ε������� ���� ��� �״�� �ű�
		if (i < index)
			newArr[i] = tempArr[i];
		// ������ �ڸ��� �ε����� ���� ��� value�� ����
		else if (i == index)
			newArr[i] = value;
		// ������ �ڸ��� �ε������� Ŭ ��� ���� �� ����
		else
			newArr[i] = tempArr[i - 1];
	}


	*pArr = newArr;
	delete[] tempArr;

}
