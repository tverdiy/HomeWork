#include <iostream>
using namespace std;

int step(int n , int m)
{
	int a = n;
	int b = m;
	int c = a;
	--b;
	while (b)
	{
		if (b % 2)
		{
			c *= a;
			--b;
		}
		else 
		{
			a *= a;
			b /= 2;
		}
	}
	return c;
}
void subsets(int n)
{
	int to = step(2, n) - 1;
	for (int i = 0; i <= to; ++i)
	{
		int now = i;
		int step = 0;
		while (now)
		{
			if (now % 2)
			{
				cout << step << " ";
			}
			now /= 2;
			++step;
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	subsets(n);
	system("pause");
	return 0;
}