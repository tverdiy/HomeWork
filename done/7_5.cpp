#include <iostream>

using namespace std;
const int M = 100;
void line_sort(int a[], int m, int n)
{
    int nal[M];
    int k = 0;
    for (int i = 0; i <= m; ++i)
        nal[i] = 0;
    for (int i = 0; i < n; ++i)
    {
        ++nal[a[i]];
    }
    for (int i = 0; i < n; ++i)
    {
        if(nal[k])
        {
            a[i] = k;
            --nal[k];
        }
        else
        {
            while(nal[k] == 0) ++k;
            --i;
        }
    }
}

int main()
{
    int a[100];
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    line_sort(a, m, n);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}



























