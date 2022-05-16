#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <ctime>
#include "Header 3.h";

using namespace std;


/* 1.	������ � �������������� ������������ 
����� � ���� ��������, �� ����� ����� ���. */

int task1(int size, int* arr)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0) { sum += arr[i]; }
	}

	return sum;
}

void t1()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe sum: " << task1(size, arr) << endl;

	cout << endl;

}



/* 2.	������ ������� ��������
� �������������� ������������ ����� �
� ��������� ��������. */

int task2(int size, int* arr)
{
	int prod = 1;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0) { prod *= arr[i]; }
	}

	return prod;
}

inline void t2()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe product: " << task2(size, arr) << endl;

	cout << endl;
}



/* 3.	������ ������� �������� ��������������
������������ ������ � � ������� ��������,
�� ����������� ������ ����� �. */

int task3(int size, int c, int* arr)
{
	int prod = 1;

	for (int i = 0; i < size; i++)
	{
		if ((i % 2 == 0) && (i > c)) { prod *= arr[i]; }
	}

	return prod;
}

inline void t3()
{
	int size = 0;
	int c = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;
	cout << "\nEnter number C: " << endl;
	cin >> c;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe product: " << task3(size, c, arr) << endl;

	cout << endl;
}



/* 4.	� �������� ������������ �����,
�� ���������� � n ����� �����, ����������
������� ����. */

int task4(int size, int* arr)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) { count += 1; }
	}

	return count;
}

void t4()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -10;
	int max = 10;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nNumber of 0's: " << task4(size, arr) << endl;

	cout << endl;
}



/* 5.	������ ������� �������� ��������
�������������� ������������ ������ � ������� ��������,
�� ���������� � n ��������. */

int task5(int size, int* arr)
{
	int prod = 1;

	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2 != 0) && (i % 2 == 0)) { prod *= arr[i]; }
	}

	return prod;
}

inline void t5()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -10;
	int max = 10;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe product: " << task5(size, arr) << endl;

	cout << endl;
}



/* 6.	������ ����� ���������� �������� ������������ ������. */

int task6(int size, int* arr)
{
	int max = arr[0];
	int maxnum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) { max = arr[i]; maxnum = i; }
	}

	return maxnum;
}

void t6()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nNumber of the largest element: " << task6(size, arr) << endl;

	cout << endl;
}



/* 7.	������ ������ �����������
�������� ������������ ������ � ��������� ��������. */

double task7(int size, int* arr)
{
	double sum = 0;
	double count = 0;
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0) { sum += arr[i]; count += 1; }
	}
	avg = sum / count;

	return avg;
}

inline void t7()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe average of the elements: " << task7(size, arr) << endl;

	cout << endl;
}



/* 8.	������ ���� �������� ������������ ������
�������� � ������� ��������, ������� �䒺���� �������� 
�� ������� �������� ��������. */

int* task8(int size, int* arr)
{
	int sum = 0;
	int prod = 1;
	int num = 0;
	int* res = new int[3];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0) { sum += arr[i]; }
		if (arr[i] < 0) { prod *= arr[i];}
		if (arr[i] % 2 != 0) { num += 1; }
	}

	res[0] = sum;
	res[1] = prod;
	res[2] = num;

	return res;
}

void t8()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	int* res = new int[3];
	res = task8(size, arr);

	cout << "Sum, product and number: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << res[i] << endl;
	}

	delete[] res;

	cout << endl;
}



/* 9.	������ ��������� �������� ������� ������������ ������. */

int task9(int size, int* arr)
{
	int min = 0;

	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2 != 0) && (arr[i] < min)) { min = arr[i]; }
	}

	return min;
}

void t9()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	cout << "\nThe smallest odd element: " << task9(size, arr) << endl;

	cout << endl;
}



/* 10.	������ ����������� ����� �, �� ����������
� n ��������. ���������� ����� ����� �, 
�� ���������� � ������ �������� ������ �. */

int* task10(int size, int* arr)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) { count += 1; }
	}

	int* res = new int[count];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) { res[j] = arr[i]; j += 1; }
	}

	return res;
}

void t10()
{
	int size = 0;
	cout << "\nEnter the size of the array: " << endl;
	cin >> size;

	int* arr = new int[size];

	srand(time(NULL));

	int min = -100;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}

	cout << "\nRandomly generated array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ") " << arr[i] << endl;
	}

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) { count += 1; }
	}

	int* res = new int[count];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) { res[j] = arr[i]; j += 1; }
	}

	cout << "Array of even elements: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << res[i] << endl;
	}

	delete[] arr;
	delete[] res;

	cout << endl;
}