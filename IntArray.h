#pragma once
#include <iostream>
#include <stdexcept>

class IntArray
{
public:
	// Конструктор
	IntArray(int size);
	// Конструктор копирования
	IntArray(const IntArray& data);
	// Деструктор
	~IntArray();

	// Изменение размера массива
	void newSize(int n);
	// Вставка элемента по индексу
	void addToEnd(int x);
	// Вставка элемента в конец
	void addToIndex(int x, int index);
	// Удаление элемента по индексу
	void removeToIndex(int index);
	// Получение размера массива
	int getSize();
	// Вывод массива в консоль
	void ShowArray();

	int& operator[](int index);
	const int& operator[](int index) const;

private:
	int _size;
	int* _data;
};

