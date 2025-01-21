#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> mpq; // declare minimum priority queue
    mpq.push(10);
    mpq.push(50);
    mpq.push(30);
    cout << mpq.top() << endl; // print min value top value
    mpq.pop();                 // pop min value
    cout << mpq.top() << endl;
    return 0;
}