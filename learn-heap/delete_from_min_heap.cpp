// delete from min heap ----------------
#include <bits/stdc++.h>
using namespace std;

void insert_in_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] > v[current_index])
        {
            swap(v[parent_index], v[current_index]);
        }
        else
        {
            break;
        }
        current_index = parent_index;
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << ' ';
    }
}

void delete_from_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int left_value = INT_MAX;
        int right_value = INT_MAX;
        if (left_idx < v.size())
        {
            left_value = v[left_idx];
        }

        if (right_idx < v.size())
        {
            right_value = v[right_idx];
        }

        //
        if (left_value <= right_value && left_value < v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if (right_value < left_value && right_value < v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_in_heap(v, val);
    }
    print_heap(v);
    cout <<endl;
    delete_from_heap(v);
    print_heap(v);

    return 0;
}