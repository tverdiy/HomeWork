#include <iostream>

using namespace std;
template <class Type>
int lineSeach(Type a[], int len,  Type elem)
{
	for (int i = 0; i < len; ++i)
	{
		if (a[i] == elem) return i;
	}
	return -1;
}
template <class Type>
int binSeach(Type a[], int len,  Type elem)
{
	int now_i, from, to;
	from = 0;
	to = len - 1;
	now_i = len / 2;
	while (a[now_i] != elem && now_i < len)
	{
		if (a[now_i] > elem)
		{
			from = now_i;
			++now_i;
		}
		else 
		{
			to = now_i;
			++now_i;
		}
	}
	if (now_i < len) return now_i;
	return -1;
}
int main()
{
	int len, srav;
	int mas[100];
	cin >> len;
	cin >> srav;
	for (int i = 0; i < len; ++i) 
		cin >> mas[i];
	cout << lineSeach(mas, len, srav) << endl;
	cout << binSeach(mas, len, srav) << endl;
	system("pause");
	return 0;
}