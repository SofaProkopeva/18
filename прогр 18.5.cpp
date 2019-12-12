#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, t;
	cin >> n >> m;
	int** a = new int* [n];
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
		t = 0;
		for (i = 0; i < n; i++)
		{
			t = j + 1;
			if (a[i][j] % 2 != 0 && t == j + 1)
				t = j + 1;
			else
				t = 0;
		}
		if (t != 0)
		{
			cout << t;
			break;
		}
	}
	return 0;
}