#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include "Header 2.h";

using namespace std;


/* 1.	������ ����� ����� A � ���� ����� N (> 0).
������ 1�A + A2�A3 +.. + (�1) AN. */

double task1(double a, int n)
{
	double res = 0.0;

	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0) { res += pow(a, i); }
		else { res -= pow(a, i); }
	}

	return res;
}

void t1()
{
	double a = 0.0;
	int n = 0;

	cout << "Enter A: " << endl;
	cin >> a;
	do {
		cout << "Enter N: " << endl;
		cin >> n;
		if (n <= 0) { cout << "N must be 1 or bigger." << endl; }
	} while (n <= 0);

	cout << "Result: " << task1(a, n) << endl;

	cout << endl;
}



/* 2.	������ ���� ����� N (> 1).������ �������� 
�� ����� ����� K, ��� ����� ���� 1 + 2 + ... + K 
���� ����� ��� ������� N, �� ���� ����. */

int *task2(int n)
{
	int k = 0;
	int k1 = 0;
	int* res = new int[2];

	while (k + k1 < n)
	{
		k1++;
		k += k1;
	}

	res[0] = k1;
	res[1] = k;
	
	return res;
}

void t2()
{
	int n = 0;
	do {
		cout << "Enter N: " << endl;
		cin >> n;
		if (n <= 1) { cout << "N must be 2 or bigger." << endl; }
	} while (n <= 1);

	int* res = new int[2];
	res = task2(n);

	cout << "The number and sum: " << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << res[i] << endl;
	}

	delete[] res;

	cout << endl;

}



/* 3.	������ ����� n, ������ n ������ ����� Գ�������. */

int *task3(int n)
{
	int* res = new int[n];
	res[0] = 0;
	res[1] = 1;

	for (int i = 2; i < n; i++)
	{
		res[i] = res[i - 1] + res[i - 2];
	}

	return res;
}

void t3()
{
	int n = 0;
	do {
		cout << "Enter N: " << endl;
		cin >> n;
		if (n <= 1) { cout << "N must be 2 or bigger." << endl; }
	} while (n <= 1);

	int* res = new int[n];
	res = task3(n);

	cout << "N first numbers of the Fibonacci sequence: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << res[i] << endl;
	}

	delete[] res;

	cout << endl;

}



/* 4.	������� ��������, ��� ������ ����
��������� ������� � �������� ���� ���������� 
��������� ������� ���� �������. ʳ������ 
�������, �� ��������� ��������� ���������� �� �����. */

double task4(double sum, int count)
{
	double avrg = 0.0;
	avrg = sum / count;

	return avrg;
}

void t4()
{
	double sum = 0.0;
	double h = 0.0;
	int count = 0;

	while (true)
	{
		cout << "Enter the student's height:\
			\n(enter 0 if there are no students left) " << endl;
		cin >> h;

		if (h == 0) { break; }

		sum += h;
		count++;
	}

	cout << "Average height: " << endl;
	cout << task4(sum, count) << endl;
	
	cout << endl;
}



/* 5.	������� �������� ������� (n � ���������� ������ �����):
1 
1 2 
1 2 3 
1 2 3 4 
......... 
1 2 3 4 ... n 
*/


void t5()
{
	int n = 0;

	do {
		cout << "Enter N: " << endl;
		cin >> n;
		if (n <= 0) { cout << "N must be 1 or bigger." << endl; }
	} while (n <= 0);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl;
}



/* 6.	������� �� ����� ������������, ��������� 
� ���� ���� �������. ������ ������������ �������
���������� � ������ �������, � �������� � � ������. */

void t6()
{
	int w = 0;
	int h = 0;

	cout << "Enter width: " << endl;
	cin >> w;
	cout << "Enter height: " << endl;
	cin >> h;

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (i == 1 || i == h) { cout << "-"; }
			else if (j == 1 || j == w) { cout << "|"; }
			else { cout << "o"; }
		}

		cout << endl;
	}

	cout << endl;
}



/* 1.	������ ���������� ����� M x N,
������ ������� �������� � ������� �������. */

double *task7(int m, int n, double** arr)
{
	double* res = new double[n];

	for (int i = 0; i < n; i++)
	{
		double prod = 1.0;

		for (int j = 0; j < m; j++)
		{
			prod *= arr[j][i];
		}
		res[i] = prod;
	}

	return res;
}

void t7()
{
	int m = 0;
	int n = 0;
	cout << "Enter the number of rows: " << endl;
	cin >> m;
	cout << "Enter the number of columns: " << endl;
	cin >> n;

	double** arr = new double*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new double[n];
	}

	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	double* res = new double[n];
	res = task7(m, n, arr);

	cout << "\nProduct of each column: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << res[i] << '	';
	}

	cout << endl;

	delete[] res;

	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}



/* 2.	���� ������� A (M, N).
ϳ��������� ���� ������� �������� ������� ����� �������. */

double* task8(int m, int n, double** arr)
{
	double* res = new double[m];

	for (int i = 0; i < m; i++)
	{
		double sum = 0.0;

		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
		res[i] = sum;
	}

	return res;
}


void t8()
{
	int m = 0;
	int n = 0;
	cout << "Enter the number of rows: " << endl;
	cin >> m;
	cout << "Enter the number of columns: " << endl;
	cin >> n;

	double** arr = new double* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new double[n];
	}


	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	double* res = new double[m];
	res = task8(m, n, arr);

	cout << "\nSum of each row: " << endl;
	for (int i = 0; i < m; i++)
	{
		cout << res[i] << endl;
	}

	cout << endl;

	delete[] res;

	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}



/* 3.	���� ������� A (M, N).
������ �������� ������������� ��������
�� ������� ������� �������. */

double task9(int m, int n, double** arr)
{
	int small = m;

	if (m > n) { small = n; }

	double* els = new double[small];

	for (int i = 0; i < small; i++)
	{
		els[i] = arr[i][i];
	}

	double max = els[0];
	for (int i = 1; i < small; i++)
	{
		if (els[i] > max) { max = els[i]; }
	}

	return max;
}


void t9()
{
	int m = 0;
	int n = 0;
	cout << "Enter the number of rows: " << endl;
	cin >> m;
	cout << "Enter the number of columns: " << endl;
	cin >> n;

	double** arr = new double* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new double[n];
	}

	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	cout << "\nLargest element of the main diagonal: " << endl;
	cout << task9(m, n, arr) << endl;
	cout << endl;

	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}



/* 4.	���� ��������� ������� A (N, N).
������ ������� ���������� � ���������� ��������
�������� � ������� ������� ����������� ������. */

double task10(int n, double** arr)
{
	double* els = new double[n];

	for (int i = 0; i < n; i++)
	{
		els[i] = arr[i][i];
	}

	double max = els[0];
	double min = els[0];
	for (int i = 1; i < n; i++)
	{
		if (els[i] > max) { max = els[i]; }
		if (els[i] < min) { min = els[i]; }
	}

	double prod = max * min;
	return prod;
}

void t10()
{
	int n = 0;
	cout << "Enter matrix order: " << endl;
	cin >> n;

	double** arr = new double* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new double[n];
	}

	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	cout << "\nProduct of the smallest and the largest \
		\nelement of the main diagonal: " << endl;
	cout << task10(n, arr) << endl;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}



/* 5.	������ ���������� ����� N x N,
������ ������������ � ��������� �������
� ������� ����� � ������� �� ������. */

double** task11(int n, double** arr)
{

	for (int i = 0; i < n; i++)
	{
		double* max = &arr[i][0];
		double* min = &arr[i][0];
		double tmp = 0.0;

		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > *max) { max = &arr[i][j]; }
			if (arr[i][j] < *min) { min = &arr[i][j]; }
		}

		tmp = *max;
		*max = *min;
		*min = tmp;
	}

	return arr;
}

void t11()
{
	int n = 0;
	cout << "Enter matrix order: " << endl;
	cin >> n;

	double** arr = new double* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new double[n];
	}

	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	double** res = new double* [n];
	res = task11(n, arr);

	cout << "\nResult matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;

}



/* 6.	������ ���������� �����, �� ����������
� N ����� � M �������� (N,M<10).
�������� �������� ���������� ���� ������� ��������,
������������ �� ������� ������ ������. */

double task12(int m, int n, double** arr)
{
	double sum = 0.0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
			{
				sum += arr[i][j];
			}
		}
	}

	return sum;
}

void t12()
{
	int m = 0;
	int n = 0;
	cout << "Enter the number of rows: " << endl;
	cin >> m;
	cout << "Enter the number of columns: " << endl;
	cin >> n;

	double** arr = new double* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new double[n];
	}

	cout << "\nInput the matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\nYour matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << '	';
		}
		cout << endl;
	}

	cout << "\nSum of side elements: " << endl;
	cout << task12(m, n, arr) << endl;
	cout << endl;

	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}