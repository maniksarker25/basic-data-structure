#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(30);
    cout << pq.top() << endl; // print max value top value
    pq.pop(); // pop max value
    cout << pq.top() << endl;
    
    return 0;
}