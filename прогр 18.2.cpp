#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m, i, j, k, sum, p, l;
	//cin >> n >> m;
	cout << "k=";
	cin >> k;
	int a[6][3];
	n = 6;
	m = 3;
	l = 1;
	sum = 0;
	p = 1;
	setlocale(LC_ALL, " ");
	cout << "Введите элементы массива: ";
	for (i = 0; i < n; i++)
	{
		cout << l << " строка: ";
		for (j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
		l++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == (k - 1))
			{
				sum += a[i][j];
				p *= a[i][j];
			}
		}
	}
	cout << "Сумма:" << sum << endl << "Произведение:" << p;
	return 0;
}