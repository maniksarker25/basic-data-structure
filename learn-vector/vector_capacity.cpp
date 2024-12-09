// learn about vector capicity
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    // cout << v.capacity() << endl;
    // push a value is last
    v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(20);

    // cout << v.capacity() << endl;
    v.push_back(10);
    // cout << v.capacity() << endl;
    // cout << "vector size before clear " << v.size() << endl;
    v.clear(); // clear the size but not delete the value from memory
    // cout << "vector size after clear " << v.size() << endl;
    // cout << v[0] << endl; // that's why here we can access vector values
    vector<int> v2 = {2, 3, 5};
    // v2.resize(2);
    v2.resize(7, 20);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " "; // output will be 2 3 5 20 20 20 20
    }

    return 0;
}