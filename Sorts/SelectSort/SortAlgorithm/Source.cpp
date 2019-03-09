#include <iostream>
using namespace std;

template< typename T >
void selectSort(T* arr, int size)
{
	T tmp;
	for (int i = 0; i < size; ++i) 
	{
		int pos = i;
		tmp = arr[i];
		for (int j = i + 1; j < size; ++j) 
		{
			if (arr[j] < tmp)
			{
				pos = j;
				tmp = arr[pos];
			}
		}
		arr[pos] = arr[i];
		arr[i] = tmp; 
		cout << arr[i] <<" ";
 	}
}


int main() 
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE];
	for(int i = 0; i < SIZE; ++i)
	{
		cout << "Введите число № " << i << " ";
		cin >> arr[i];
	}
	selectSort(arr, SIZE);


	system("pause");
}