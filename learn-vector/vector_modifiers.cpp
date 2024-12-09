// vector modifier => pop back => insert => erase
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2;
    v2 = v;
    //   for(int i = 0;i<v2.size();i++){
    //     cout << v2[i] << ' ';
    //   }
    // for loop shortcut => note : it's work without index
    for (int x : v2)
    {
        cout << x << " "; // output v vector
    }
    cout << endl;
    // v2.pop_back(); // remove last element from vector
    // for (int x : v2)
    // {
    //     cout << x << " "; // print with last element remove
    // }

    // v2.insert(v2.begin() +2,100); // insert single value
    // insert multiple value
    vector<int> v3 = {100, 200, 300};
    v2.insert(v2.begin() + 2, v3.begin(), v3.end()); // insert multiple value
    // v2.erase(v2.begin() + 3); erase a single value
    // v2.erase(v2.begin() + 1, v2.end() - 1); delete multiple value
    for (int x : v2)
    {
        cout << x << " "; // print with last element remove
    }
    return 0;
}