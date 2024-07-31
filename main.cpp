#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	try
	{
		IntArray arr(5);

		// �������� �������
		for (int i = 0; i < arr.getSize(); i++)
		{
			arr[i] = i * 10;
		}

		cout << "������ ����� �������������: ";
		arr.ShowArray();

		cout << "������ ����� ������� �������� � �����: ";
		arr.addToEnd(40);
		arr.ShowArray();

		cout << "����� ������� �������� �� �������: ";
		arr.addToIndex(30, 1);
		arr.ShowArray();

		cout << "����� �������� �������� �� �������: ";
		arr.removeToIndex(2);
		arr.ShowArray();

		// ����� ����������
		cout << arr[10] << endl;
	}

	catch(exception& e)
	{
		cout << "������: " << e.what() << endl;
	}
}