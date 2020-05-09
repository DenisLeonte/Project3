#include <iostream>

using namespace std;

int main()
{
	int v[19][19];
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		v[i][n - i - 1] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		int aux = -1;
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 0)
			{
				aux = j;
			}
		}

		for (int j = 1; j < n; j++)
		{
			if (aux + j < n)
			{
				v[i][aux + j] = j;
			}
			if (aux - j >= 0)
			{
				v[i][aux - j] = j;
			}
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}