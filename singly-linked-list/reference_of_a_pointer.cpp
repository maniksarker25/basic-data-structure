// reference of a pointer ----------------------

// need to change the pointer in fun and it need to persist that why we need to use reference by &
// we need when i change in fun that change need in main fun
//

#include <bits/stdc++.h>

using namespace std;

// with out ref----------
// void fun(int *p)
// with ref-------
void fun(int *&p)

{
    // *p = 100;
    // cout << "In Fun : " << *p << endl;
    // int y = 200;
    p = NULL;
    // cout << "In fun:" << *p << endl;
    cout << "addr in fun=>" << p << endl;
}

int main()
{

    int x = 10;
    int *p = &x;
    fun(p);
    // cout << "In Main : " << *p << endl;
    // cout << "In Main : " << *p << endl;
    cout << "addr in main=>" << p << endl;

    return 0;
}

/*
So when we use reference by & then the pointer are not copy in fun
 */