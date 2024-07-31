#include "IntArray.h"

IntArray::IntArray(int size)
{
	if (size <= 0)
		throw std::invalid_argument("Размер массива должен быть больше нуля");
	_size = size;
	_data = new int[_size];
}

IntArray::IntArray(const IntArray& data)
{
	_size = data._size;
	_data = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_data[i] = data._data[i];
	}
}

IntArray::~IntArray()
{
	delete[] _data;
}

int& IntArray::operator[](int index)
{
	if (index >= _size)
		throw std::out_of_range("Индекс вне диапазона");
	return _data[index];
}

const int& IntArray::operator[](int index) const
{
	if (index >= _size)
		throw std::out_of_range("Индекс вне диапазона");
	return _data[index];
}

void IntArray::newSize(int n)
{
	if (n == 0) {
		throw std::invalid_argument("Новый размер должен быть больше нуля");
	}
	int* newData = new int[n]();

	// Копирование данных в новый массив
	size_t minSize = (n < _size) ? n : _size;
	for (size_t i = 0; i < minSize; ++i) {
		newData[i] = _data[i];
	}

	delete[] _data;
	_data = newData;
	_size = n;
}

void IntArray::addToEnd(int x)
{
	newSize(_size + 1);
	_data[_size - 1] = x;
}

void IntArray::addToIndex(int x, int index)
{
	if (index > _size) throw std::out_of_range("Индекс вне диапазона");

	newSize(_size + 1);

	// Сдвиг элементов
	for (int i = _size - 1; i > index; i--)
	{
		_data[i] = _data[i - 1];
	}

	_data[index] = x;
}

void IntArray::removeToIndex(int index)
{
	if (index > _size) throw std::out_of_range("Индекс вне диапазона");

	for (int i = index; i > _size - 1; i++)
	{
		_data[i] = _data[i + 1];
	}

	newSize(_size - 1);
}

int IntArray::getSize()
{
	return _size;
}

void IntArray::ShowArray()
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << _data[i] << " ";
	}
	std::cout << std::endl;
}
