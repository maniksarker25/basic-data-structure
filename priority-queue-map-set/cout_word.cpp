#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    // map for count
    map<string,int>mp;

    while (ss >> word)
    {
        // cout << word << endl;
        mp[word]++;
    }

    for(auto it = mp.begin() ;it != mp.end();it++){
        cout << it->first << ' ' << it->second << endl;
    }
    
    return 0;
}