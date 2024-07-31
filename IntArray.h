#pragma once
#include <iostream>
#include <stdexcept>

class IntArray
{
public:
	// �����������
	IntArray(int size);
	// ����������� �����������
	IntArray(const IntArray& data);
	// ����������
	~IntArray();

	// ��������� ������� �������
	void newSize(int n);
	// ������� �������� �� �������
	void addToEnd(int x);
	// ������� �������� � �����
	void addToIndex(int x, int index);
	// �������� �������� �� �������
	void removeToIndex(int index);
	// ��������� ������� �������
	int getSize();
	// ����� ������� � �������
	void ShowArray();

	int& operator[](int index);
	const int& operator[](int index) const;

private:
	int _size;
	int* _data;
};

