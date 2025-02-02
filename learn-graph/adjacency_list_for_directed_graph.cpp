#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);

    }

    // print after input
    for(int i = 0;i<n;i++){
        cout << i << " =>";
        for(int val : adj_list[i]){
            cout <<val << ' ';
        }
        cout << endl;
    }

    return 0;
}