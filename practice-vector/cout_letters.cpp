#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> v(26);

    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            cout << char(i + 'a') << " " << ":" << " " << v[i] << endl;
        }
    }
    return 0;
}