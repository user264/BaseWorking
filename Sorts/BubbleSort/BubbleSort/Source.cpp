#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	/* �������� ������ ���������� */
	int const size = 10;
	int mass[size];
	for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << "-�� �������: ";
		cin >> mass[i];
	}

	/* ������� �������� ������ */
	cout << "�������� ������: ";
	for (int i = 0; i < size; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	/* ����������� ������ �� �������� */
	for (int i = 1; i < size; ++i)
	{
		for (int r = 0; r < size - i; r++)
		{
			if (mass[r] > mass[r + 1])
			{
				// ����� �������
				int temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
			}
		}
	}

	/* ������� ��������������� ������ */
	cout << "��������������� ������: ";
	for (int i = 0; i < size; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}