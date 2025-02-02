#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e; // n = total node , e = total edge
    cin >> n >> e;
    int adj_mat[n][n];
    // make all value 0 initialy----------------
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         adj_mat[i][j] = 0;
    //     }
    // }

    // shortcut for make all value to 0
    memset(adj_mat, 0, sizeof(adj_mat));

    // make diagonal values to 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 1;
            }
        }
    }
    // now take input
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    // print after input graph with adjacency
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}