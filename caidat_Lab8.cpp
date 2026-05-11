#include "thuvien_Lab8.h"

int nhapSoNguyen(int& n)
{
	do
	{
		cin >> n;
	} while (n < 0 || n > KTMT);

	return n;
}

void nhapMaTran(int a[][KTMT], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap " << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void xuatMaTran(int a[][KTMT], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void lietKeSoChan(int a[][KTMT], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				cout << a[i][j] << " ";
			}
		}
	}
	cout << endl;
}

void lietKe35(int a[][KTMT], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 3 == 0 && a[i][j] % 5 == 0)
			{
				cout << a[i][j] << " ";
			}
		}
	}
	cout << endl;
}

int timMax(int a[][KTMT], int m, int n)
{
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

int timMaxDongK(int a[][KTMT], int m, int n, int k)
{
	int max = a[k][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max && a[i][j] % 5 == 0)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

bool checkCP(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}

void tongCP(int a[][KTMT], int m, int n)
{
	int tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (checkCP(a[i][j]))
			{
				tong = tong + a[i][j];
			}
		}
	}
}