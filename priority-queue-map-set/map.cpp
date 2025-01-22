#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["rahim"] = 3;
    mp["shamim"] = 15;
    mp["hamim"] = 0;
    // print single
    cout << mp["tamim"] << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // check exist in map
    if(mp.count("hamim")){
        cout << "aca";
    }
    else{
        cout << "nai";
    }
    return 0;
}