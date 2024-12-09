#include <bits/stdc++.h>

using namespace std;

int main()
{
    // type 1----
     //   vector<int>v;\
    type 2----
    // vector<int> v(5);

    // type 3 -----
    // vector<int> v(10, 2); // all value is 1

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // copy v vector in v2 vector------------------
    // vector<int> v2(v);
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // copy array in vector---------------------------
    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v3(a, a + 5);
    // for (int i = 0; i < v3.size(); i++)
    // {
    //     cout << v3[i] << " ";
    // }

    // type 4
    vector<int> v = {1, 2, 1, 2};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v.size() << endl;
    return 0;
}