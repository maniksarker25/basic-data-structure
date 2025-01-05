#include <bits/stdc++.h>

using namespace std;

class myQueue
{
public:
    list<int> l;
    // function for push
    void push(int val)
    {
        l.push_back(val);
    }
    // function for pop
    void pop()
    {
        l.pop_front();
    }

    // function for front
    int front()
    {
        return l.front();
    }

    // function for back
    int back()
    {
        return l.back();
    }

    // function for size
    int size()
    {
        return l.size();
    }

    // check empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    // take input a queue----------
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // print queue ----------
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}