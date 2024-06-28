#pragma once
#include <iostream>
using namespace std;

// ���ø����� ������ '���� �迭' Ŭ����.
// ���� �迭 : ���������� ���̰� �����ϴ� �迭.
// ���� ������ ������ �δ� �迭.

// �迭 vs ���� �迭
// ���� : ���� �迭�� �޸� �Ҵ� Ƚ���� ���� ����.
// ���� : ���� �迭�� ������� �ʴ� �޸𸮰� ���� �� ����.


// ArrayList ��ü ����
template<typename T>
class ArrayList
{
private:
	T* data;

private :
	int count;
	int capacity;

public:
	void Add(const T& item);
	T& operator[](int index); // [] ÷�� ������ �����ε�.

public:
	int GetCount();
	int	GetCapacity();

public:
	ArrayList();
	~ArrayList();

};

// ���ø� Ŭ������ �޼����
// �ݵ�� ��� ���Ͽ� �����ؾ� �Ѵ�!!

template<typename T>
inline void ArrayList<T>::Add(const T& item) // �迭�� ��Ҹ� �߰��ϴ� �޼���
{
	if (count >= capacity)
	{
		capacity <<= 1; // capacity *= 2;
		// capacity = capacity << 1
		T* newArr = new T[capacity];
		// memcpy_s() : mem(memory) + cpy(copy) �޸� ��� �Լ�.
		// memcpy_s([������], [������ ũ��], [����], [���� ũ��])
		memcpy_s(newArr, sizeof(T) * capacity, data, sizeof(T) * count);
		delete[] data;
		data = newArr;
	}
	data[count++] = item;
	
}
// ArrayList ��ü ����

template<typename T>
inline T& ArrayList<T>::operator[](int index)
{
	if (index >= count || index < 0) // ���� ó��.
	{
		cout << "index�� ������ ������ϴ�.(index : " << index << ")" << endl;
		exit(1);
	}
	return data[index];
}

template<typename T>
inline int ArrayList<T>::GetCount()
{
	return count;
}

template<typename T>
inline int ArrayList<T>::GetCapacity()
{
	return capacity;
}

// count = 0;
// capacity = 4;
template<typename T>
inline ArrayList<T>::ArrayList()
	: count(0), capacity(4)
{
	data = new T[capacity];
}

template<typename T>
inline ArrayList<T>::~ArrayList()
{
	if (data != nullptr)
	{
		delete[] data;
		data = nullptr;
	}
}
