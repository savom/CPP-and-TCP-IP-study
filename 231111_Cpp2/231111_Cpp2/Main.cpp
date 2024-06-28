#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
using namespace std;

// �ڷᱸ�� Ŭ����
// - vector<T> : ���� �迭 Ŭ����
// 
// - queue<T> ť : ���Լ��� �ڷᱸ��
// ���Լ��� : ���� ���� ��Ұ� ���� ����.
// 
// - stack<T> : �������� �ڷᱸ��.
// stack ���� : �״�.
// �������� : ���� ���� ��Ұ� ���� ���߿� ����.
// 
// queue�� stack�� capacity�� �þ �� ����.
// 
// - map<TKey, TValue>
// : Key�� Value�� ������ �̷���� ��Ҹ� �����ϴ� �ڷᱸ��.
//
int main()
{
	#pragma region vector Ŭ����
		//vector<int> myVector;
		//for (int i = 0; i < 10; i++)
		//{
		//	// vector<T>.push_back() : ���� �迭�� ��Ҹ� �߰��ϴ� �޼���.
		//	myVector.push_back(i + 1);
		//	cout << "����� ���� : " << myVector.size() << endl;
		//	cout << "���� �迭�� ���� : " << myVector.capacity() << endl;
		//}
		//
		//// vector<T>.size() : ����� ������ ��ȯ�ϴ� �޼���.
		//for (int i = 0; i < myVector.size(); i++)
		//{
		//	cout << myVector[i] << " ";
		//}
		//cout << endl;
	#pragma endregion 

	#pragma region queue Ŭ����
		queue<char> myQueue;
		for (char c = 'A'; c <= 'D'; c++)
		{
			// queue<T>.push([���]) : [���]�� �߰��ϴ� �޼���.
			myQueue.push(c);
		}
	
		// queue<T>.size() : ����� ������ ��ȯ�ϴ� �޼���.
		while (myQueue.size() > 0)
		{
			// queue<T>.front() : front(��). �� �տ� �ִ� ��Ҹ� ��ȯ.
			cout << "���� ��� : " << myQueue.front() << endl;

			// queue<T>.pop() : �� �տ� �ִ� ��Ҹ� ������ �޼���.
			myQueue.pop();
		}

		// myQueue[0] = 'c'; <- �ȉ�.
	#pragma endregion	

	#pragma region stack Ŭ����
			stack<float> myStack;

			// stack<T>.push() : ��Ҹ� �߰��ϴ¸޼���.
			myStack.push(25.41f);
			myStack.push(-52.10f);
			myStack.push(100.17f);

			while (myStack.size() > 0)
			{
				// stack<T>.top() : �� ��(�� ������)�� ��Ҹ� ��ȯ�ϴ� �޼���.
				cout << "���� ��� : " << myStack.top() << endl;
				myStack.pop();
			}

	#pragma endregion

	#pragma region map Ŭ����
		map<char, int> myMap;
		// map<TKey, TValue>.insert() : ��Ҹ� �߰��ϴ� �޼���
		// �� ��Ҹ� �߰��� ��, Key�� �ߺ��Ǿ�� �ȵȴ�!
		myMap.insert({ 'A',78 });
		myMap.insert({ 'B',983 });
		myMap.insert({ 'C',395 });
		myMap.insert({ 'X',-825 });

		// map[(Key)] : (Key)�� �ش��ϴ� Value�� ��ȯ
		cout << "myMap['A'] = " << myMap['A'] << endl;
		cout << "myMap['B'] = " << myMap['B'] << endl;
		cout << "myMap['C'] = " << myMap['C'] << endl;
		cout << "myMap['X'] = " << myMap['X'] << endl;

		myMap['A'] = 11;
		cout << "myMap['A'] = " << myMap['A'] << endl;
#pragma endregion

	return 0;
}