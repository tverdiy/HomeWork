#include <iostream>
using namespace std;

int found(int a[100], int n, int k)
{
	int now, min, max, min_count;
	now = a[0];
	min_count = max  = 0;
	for (int i = 0; i < n;  ++i)
	{
		if (max < a[i]) max = a[i];
	}
	min = max;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[j] < min && a[j] > now) 
			{
				min = a[j];
				min_count = 0;
			}
			else if (a[j] == min) ++min_count;
		}
		now = min;
		i += min_count;
		min = max;
	}
	return now;
}
int main()
{
	int len, numb;
	int a[100];
	cout << "VVedite dliny and nomer elemnta, kotoriy ishite" << endl;
	cin >> len >> numb;
	for (int i = 0; i < len; ++i)
	{
		cin >> a[i];
	}
	cout << found(a, len, numb);
	system("pause");
	return 0;
}