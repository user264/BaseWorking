#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	/* Заполним массив значениями */
	int const size = 10;
	int mass[size];
	for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << "-ый элемент: ";
		cin >> mass[i];
	}

	/* Выведем исходный массив */
	cout << "Исходный массив: ";
	for (int i = 0; i < size; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	/* Отсортируем массив по убыванию */
	for (int i = 1; i < size; ++i)
	{
		for (int r = 0; r < size - i; r++)
		{
			if (mass[r] > mass[r + 1])
			{
				// Обмен местами
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
			}
		}
	}

	/* Выведем отсортированный массив */
	cout << "Отсортированный массив: ";
	for (int i = 0; i < size; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}