#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, max, p, t;
	cin >> n >> m;
	int** a = new int* [n];
	max = -1;
	setlocale(LC_ALL, " ");
	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
		for (j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	for (j = 0; j < m; j++)
	{
		p = 1;
		for (i = 0; i < n; i++)
		{
			p *= a[i][j];
			if (p > max)
			{
				max = p;
				t = j + 1;
			}
		}
	}
	cout << max << endl << t;
	return 0;
}