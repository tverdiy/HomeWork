#include <iostream>

using namespace std;
long long C[100][100];
void zap()
{
	for (int i=0;i<100;i++)
		for (int j=0;j<100;j++)
			C[i][j] = 0;
}
long long cnk(int n,int k)
{
	if ((n == 0) && (k == 0)) return 1;
	if (n == 0) return 0;
	if ((n == k) || (k == 0)) return 1;
	if (n < k) return 0;
	if (C[n][k] == 0) C[n][k] = cnk(n-1,k-1) + cnk(n-1,k);
	return C[n][k];
}
void subsets(int n)
{
	cout << n << " " << endl;
	if (n) 
	{
		subsets(n - 1);
		cout << endl;
	}
	if (n) 
	{
		subsets(n - 1);
		cout << " " << n << endl;
	}

}
int main()
{
	subsets(2);
	system("pause");
	return 0;
}