#include <iostream>

using namespace std;

int main()
{
	char a[100];
	char b[100];
	char c[100];
	cin >> a;
	cin >> b;
	int lena = strlen(a);
	int lenb = strlen(b);
	int maxlen;
	//cout << "lena = "<< lena << endl;
	if (lena < lenb) 
	{
		maxlen = lenb;
		int lensdvig = lenb - lena;
		for (int i = lena; 0 <= i; --i)
		{
			a[i + lensdvig] = a[i];
		}
		for (int i = 0; i < lensdvig; ++i)
		{
			a[i] = 48;
		}
	}
	else if (lena > lenb)
	{
		maxlen = lena;
		int lensdvig = lena - lenb;
		for (int i = lenb; 0 <= i; --i)
		{
			b[i + lensdvig] = b[i];
		}
		for (int i = 0; i < lensdvig; ++i)
		{
			b[i] = 48;
		}
	}
	else 
		maxlen = lena;

	
	for (int i = 0; i < maxlen; ++i)
	{
		if (a[i] < b[i])
		{
			for (int j = 0; j < maxlen; ++j)
			{
				swap(a[j],b[j]);
			
			}
			cout << "-";
			break;
		}
		else if (a[i] > b[i]) 
			break;

	}
//	cout << a << endl << b << endl;
	for (int i = maxlen - 1; 0 <= i; --i) // 48 - 57
	{
		int ch = int(a[i]) - int(b[i]);
		if (ch >= 0)
			c[i] = ch + 48;
		else 
		{
			if (i == 0)
			{
				c[i] = 48 - ch;
				cout << "-";
			}
			else 
			{
				c[i] = ch + 58;
				--a[i - 1];
			}
		}
	}
	c[maxlen] = '\0';
	int nulllen = 0;
	while (c[nulllen] == 48 && nulllen < maxlen)
		++nulllen;
	for (int i = nulllen; i <= maxlen; ++i)
		c[i - nulllen] =  c[i];
	cout << c << endl;
	system("pause");
	return 0;
}