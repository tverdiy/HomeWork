#include <iostream>

using namespace std;

int getline(char *buff, int lim) 
{
	int len = 0;
	char c;
	do
	{
		c = getchar(); 
		if (len < lim) 
			buff[len++] = c;
	}
	while (c != '\n');
	buff[--len] = '\0';
	return len;
}

typedef double(*foo)(double);

foo somefunc(char c)
{
	switch (c)
	{
	case 'c': 
		{ 
			return cos;
			break;
		}
	case 's':
		{
			return sin;
			break;
		}
	case 't':
		{
			return tan;
			break;
		}
	case 'e':
		{
			return exp;
			break;
		}
	case 'l':
		{
			return log;
			break;
		}
	}
}

double func(char *s)
{
	char num[10];
	char ans[100];
	double in = 0;
	int k = 0;
	while (s[k] < 57)
	{
		num[k] = s[k];
		++k;
	}
	num[k] = '\0';
	++k;
	in = atof(num);
	cout << in << endl;
	while (k != strlen(s)) 
	{
		in = somefunc(s[k])(in);
		++k;
	}
	return in;
}
int main()
{
	char s[100];
	getline(s,100);
	//char c = 'c'; 
	cout << func(s) << endl;
	system("pause");
	return 0;
}