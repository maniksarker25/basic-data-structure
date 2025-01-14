#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p;
    // use make_pair buil in fuction for store pair value
    // p = make_pair(2,3);
    // shortcut use second bracket
    // p = {2,6};
    // for print frist and second
    // cout << p.first << endl; // output 2
    // cout << p.second << endl; // output 3

    // take a pair type vector
    int n;
    cin >>n;
    vector<pair<int,int>>v(n);
    for(int i = 0;i<n;i++){
        // input 
        cin >> v[i].first >> v[i].second;
    }
    // print vector 
       for(int i = 0;i<n;i++){
        // input 
       cout <<  v[i].first << " " << v[i].second << endl;;
    }
    return 0;
}