#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	try
	{
		IntArray arr(5);

		// Создание массива
		for (int i = 0; i < arr.getSize(); i++)
		{
			arr[i] = i * 10;
		}

		cout << "Массив после инициализации: ";
		arr.ShowArray();

		cout << "Массив после вставки элемента в конец: ";
		arr.addToEnd(40);
		arr.ShowArray();

		cout << "После вставки элемента по индексу: ";
		arr.addToIndex(30, 1);
		arr.ShowArray();

		cout << "После удаления элемента по индексу: ";
		arr.removeToIndex(2);
		arr.ShowArray();

		// Вызов исключения
		cout << arr[10] << endl;
	}

	catch(exception& e)
	{
		cout << "Ошибка: " << e.what() << endl;
	}
}