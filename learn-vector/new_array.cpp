#include <bits/stdc++.h>

using namespace std;

void new_array(int a[], int b[], int c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = b[i];
        c[i + n] = a[i];
    }
};
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n * 2];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    };

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    };
    new_array(a, b, c, n);
    for (int i = 0; i < 2 * n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}