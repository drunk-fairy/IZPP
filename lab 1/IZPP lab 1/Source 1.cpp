#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include "Header 1.h";

#define _USE_MATH_DEFINES

using namespace std;



/* 1.	�������� ����-����� ����������� ������� ���������, 
���� ������ ������� ���� ������ � ������������ ����������. */

double task1(double k1, double k2)
{
	double h = 0.0;
	h = sqrt((pow(k1, 2)) + pow(k2, 2));
	return h;
}


void t1()
{
	double k1 = 0.0;
	double k2 = 0.0;
	cout << "Vvedit' katet 1: " << endl;
	cin >> k1;
	cout << "Vvedit' katet 2: " << endl;
	cin >> k2;
	
	cout << "Hipotenuza: " << task1(k1, k2) << endl;

	cout << endl;
}



/* 2.	������� ����-����� ���������� ����� �� ��������� ����������,
���� ���� ������� ����� ���� �����.
����� ���: a, b, c (������� ����� ����������);
������ ���: S, P (����� � �������� ����������). */

double *task2(double a, double b , double c)
{
	double p = 0.0;
	double p2 = 0.0;
	double s = 0.0;
	double* res = new double[2];

	p = (a + b + c);
	p2 = p / 2;
	s = sqrt(p2 * (p2-a) * (p2-b) * (p2-c));

	res[0] = p;
	res[1] = s;

	return res;
}


void t2()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Vvedit' storonu a: " << endl;
	cin >> a;
	cout << "Vvedit' storonu b: " << endl;
	cin >> b;
	cout << "Vvedit' storonu c: " << endl;
	cin >> c;

	double* res = new double[2];
	res = task2(a, b, c);

	cout << "Znachennya perimetra i ploshchi vidpovidno: " << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << res[i] << endl;
	}

	delete[] res;

	cout << endl;

}



/* 3.	������� ����-����� ���������� ������� ������� 
� ����������� ������: ��� ����� ������ �� ���� ����� 
500 ���. �������� ������ 10%. */

double task3(double price)
{
	double p = 0.0;
	if (price <= 500) { p = price; }
	else
	{
		p = (price * 90) / 100;
	}

	return p;
}


void t3()
{
	double price = 0.0;

	cout << "Vvedit' tsinu: " << endl;
	cin >> price;

	cout << "Vartist' vashoyi pokupki: " << endl;
	cout << task3(price);

	cout << endl;
}



/* 4.	��� �������� ����� x > 0 ������������ �������: z=ln x + y,
������, � ����, x<0, ������������ �������: z = x + y2.
������� ����-�����. */

double task4(double x, double y)
{
	double z = 0.0;

	if (x > 0) { z = log(x) + y; }
	else if (x < 0) { z = x + pow(y, 2); }

	return z;
}


void t4()
{
	double x = 0.0;
	double y = 0.0;

	cout << "VVedit' x: " << endl;
	cin >> x;
	cout << "VVedit' y: " << endl;
	cin >> y;

	cout << "Result: " << task4(x, y) << endl;
	cout << endl;
}



/* 5.	������ ����������� �������� � ����� ����� �����,
�������� � ���������. ������� ����-����� ����'������ ������. */

double task5(double a, double b, double c)
{
	double nums[3] = { a, b, c };
	double max = nums[0];

	for (int i = 1; i < 3; i++)
	{
		if (nums[i] > max) { max = nums[i]; }
	}

	return max;
}


void t5()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Vvedit' chislo a: " << endl;
	cin >> a;
	cout << "Vvedit' chislo b: " << endl;
	cin >> b;
	cout << "Vvedit' chislo c: " << endl;
	cin >> c;

	cout << "Naybilshe chislo: " << task5(a, b, c) << endl;

	cout << endl;
}



/* 6.	�������� ����-����� ���������� 
����������� ������� (ax2+bx+c=0, a!=0). */

double *task6(double a, double b , double c)
{
	double d = pow(b, 2) - 4 * a * c;
	double* res = new double[3];
	res[0] = d;

	if (d < 0) throw d; 

	if (d == 0) { res[1] = -b / (2 * a); res[2] = res[1]; }

	else if (d > 0)
	{
		res[1] = (-b + sqrt(d)) / (2 * a);
		res[2] = (-b - sqrt(d)) / (2 * a);
	}

	return res;
}


void t6()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Vvedit' a: " << endl;
	cin >> a;
	cout << "Vvedit' b: " << endl;
	cin >> b;
	cout << "Vvedit' c: " << endl;
	cin >> c;

	double* res = new double[3];


	cout << "Diskriminant i koreni rivnyannia: " << endl;
	try
	{
		res = task6(a, b, c);

		for (int i = 0; i < 3; i++)
		{
			cout << res[i] << endl;
		}
	}
	catch (const double d)
	{
		cout << "Discriminant dorivnuye " << d << ". Rivnyannia ne maye koreniv. " << endl;
	}


	delete[] res;

	cout << endl;
}



/* 7.	������� ����-����� ���������� �������� �������
y = 1/x, ���� x < 0;
y = sqrt(x), ���� 0 <= x <= 16; 
y = 4, ���� x > 16. */

double task7(double x)
{
	double y = 0.0;

	if (x < 0) { y = 1 / x; }
	else if (x <= 16) { y = sqrt(x); }
	else { y = 4; }

	return y;
}

void t7()
{
	double x = 0.0;

	cout << "Vvedit' x: " << endl;
	cin >> x;

	cout << "Znachennia funktsiyi dorinvnuye: " << task7(x) << endl;

	cout << endl;
}



/* 8.	�������� ����-����� ����������� ������ ���������,
� ����� �������� ����� �(�,�). */

double task8(double x, double y)
{
	double quad = 0.0;
	
	if (x > 0 && y > 0) { quad = 1; }
	else if (x < 0 && y > 0) { quad = 2; }
	else if (x < 0 && y < 0) { quad = 3; }
	else if (x > 0 && y < 0) { quad = 4; }

	return quad;

}

void t8()
{
	double x = 0.0;
	double y = 0.0;

	cout << "Vvedit' x: " << endl;
	cin >> x;
	cout << "Vvedit' y: " << endl;
	cin >> y;

	cout << "Nomer kvadranta tochki dorivnuye " << task8(x, y) << endl;

	cout << endl;

}



/* 9.	������� �������� �� ��� ����-���� ��� ��������
���������� ��������: ���������, �� � ��������� �� ��������
��������� a, b, c ������������. */

double task9(double a, double b, double c)
{
	double res = 0.0;

	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && a == c && b == c) { res = 2; }
		else if (a == b || a == c || b == c) { res = 1; }
		else { res = 0; }
	}
	else { res = 3; }

	return res;
}

void t9()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Vvedit' a: " << endl;
	cin >> a;
	cout << "Vvedit' b: " << endl;
	cin >> b;
	cout << "Vvedit' c: " << endl;
	cin >> c;

	if (task9(a, b, c) == 0)
	{
		cout << "Trikutnik ne ye rivnobedrenim. " << endl;
	}

	else if (task9(a, b, c) == 1)
	{
		cout << "Trikutnik ye rivnobedrenim. " << endl;
	}

	else if (task9(a, b, c) == 2)
	{
		cout << "Trikutnik ye rivnostoronnim. " << endl;
	}

	else
	{
		cout << "Trikutnik ne isnuye. " << endl;
	}

	cout << endl;
}



/* 10.	�������� �������� ���������� �� ����-����.
����������� ������� ������� (SP). ��������� ���������� 
��� ���� ������ (����� �) � ��� ������� �������
������ (����� �) �������. �� ������� ������� ������������ 
������ � ��������� �� ������� ���������� ������� ������:
���� ������� ������� ����� 50, �� ������ �� ��;
���� ������������ ����� 50 ������� � ������������ 
������� ������ � 5%, ���� �����, �� 100 ������� � 10%. */

double task10(double c, int k)
{
	double sp = 0.0;

	if (k <= 50) { sp = c*k; }

	else if (k <= 100)
	{
		sp = (c*k * 95) / 100;
	}

	else
	{
		sp = (c*k * 90) / 100;
	}

	return sp;
}


void t10()
{
	double c = 0.0;
	int k = 0;

	cout << "Vvedit' tsinu: " << endl;
	cin >> c;

	cout << "Vvedit' kilkist' odinits tovaru: " << endl;
	cin >> k;

	cout << "Vartist' vashoyi pokupki: " << endl;
	cout << task10(c, k) << endl;

	cout << endl;
}
