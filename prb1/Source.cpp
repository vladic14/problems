#include <iostream>

using namespace std;

int a[100][100], i, j, n, m, c[100], k, d, p, f, l;

int simetrica(int a[100][100], int n)
{
	int i, j, ok;
	for (i = 1;i <= n - 1;i++)
		for (j = 1;j <= n - 1;j++)
		{
			if (a[i][j] == a[n - i + 1][n - j + 1])
				ok = 1;
			else ok = 0;
		}
	if (ok == 1)
		return 1;
	return 0;
}

int reflexiva(int a[100][100], int n)
{
	int i, j;
	for (i = 1;1 <= n;i++)
		for (j = 1;j <= n;j++)
			if (a[i][j] != 1)
				return 0;
	return 1;

}

int tranzitiva(int a[100][100], int n)
{
	int i, j, k;
	for (i = 1;1 <= n;i++)
		for (j = 1;j <= n;j++)
			for (k = 1;k <= n;k++)
				if ((a[i][j] == 1) && (a[j][k] == 1))
					if (a[i][k] != 1)
					{
						return 0;
					}

	return 1;

}

int main()
{
	cin >> n >> m;
	for (i = 1;i <= n;i++)
		for (j = 1;j <= m;j++)
			cin >> a[i][j];
	d = simetrica(a, n);
	f = reflexiva(a, n);
	k = tranzitiva(a, n);
}

