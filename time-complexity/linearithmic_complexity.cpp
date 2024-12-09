// linearithmic complexity

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j *= 2) // INCREMENT HOSSA MULIPHY HOIA
        {
            cout << "Hello world"; // complexity  0(n log n)
        }
    }
    return 0;
}