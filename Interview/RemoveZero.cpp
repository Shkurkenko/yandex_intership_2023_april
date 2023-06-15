#include <bits/stdc++.h>

using namespace std;

int RemoveOneElement(vector<int> &arr)
{
    int start = 0, end = 0, n = arr.size(), res = 0, zero_cnt = 0;
    while (end < n)
    {
        if (arr[end] == 0)
        {
            ++zero_cnt;
        }
        while (zero_cnt > 1)
        {
            if (arr[start] == 0)
            {
                --zero_cnt;
            }
            ++start;
        }

        res = max(res, end - start);
        ++end;
    }

    return res;
};

int main()
{

    // vector<int> test = {0, 0}; // -> 0
    // vector<int> test = {1, 0}; // -> 1
    // vector<int> test = {0, 1}; // -> 1
    // vector<int> test = {1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1}; // -> 5
    vector<int> test = {1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1}; // -> 6
    // vector<int> test = {1, 1, 1, 1, 0, 0}; // -> 4
    // vector<int> test = {1, 1, 1, 1, 1}; // -> 4

    cout << RemoveOneElement(test);
    return 0;
}