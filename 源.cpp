#include<iostream>

using namespace std;

int main()
{
	int a[3][3];
	int i, j, k, p, q, max, min;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0, max = 0, p = 0; j < 3; j++)
		{
			if (a[i][j]>max)
			{
				max = a[i][j];
					p = j;
			}
			else
			{
				max = max;
				p = p;
			}
		}
		for (k = 0, min = a[i][p], q = i; k < 3; k++)
		{
			if (a[k][p] < min)
			{
				min = a[k][p];
				q = k;
			}
			else
			{
				min = min;
				q = q;
			}
		}
		if (i == q)
		{
			cout << a[i][p] << "is the saddle point!";
			break;
		}
	}
	if (i == 3 &&i != q)
	{
		cout << "There is no saddle point!" << endl;
	}
	return 0;
}