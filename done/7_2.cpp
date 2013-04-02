#include <iostream>

using namespace std;

int num(int x, int y)
{
	return x * y + y;
}
int main()
{
	int m, n, ans;
	int nowNum, now_i, now_j;
	now_i = now_j = 0;
	int a[100][100];
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
	cin >> ans;
	nowNum = a[now_i][now_j];
	while(a[now_i][now_j] != ans)
	{
		if (a[now_i][now_j + 1] < a[now_i + 1][now_j])
			++now_j;
		else 
			++now_i;
	}
	cout << now_i << " " << now_j << endl;
	system("pause");
	return 0;
}