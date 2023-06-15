#include <bits/stdc++.h>

using namespace std;

vector<int> Find_k_closest(vector<int> a, int index, int k)
{
    vector<int> ans;
    int i = index, j = index, n = a.size();

    while ((i >= 0 or j < n) and k > 0)
    {
        int left_dist = abs(a[index] - a[i]);
        int right_dist = abs(a[index] - a[j]);
        if (left_dist <= right_dist)
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(a[j]);
        }
        --i;
        ++j;
        --k;
    }

    return ans;
};

int main()
{

    // vector<int> test = {2, 3, 5, 7, 11}; // k = 2 index = 3 -> {5, 7}
    // vector<int> test = {4, 12, 15, 15, 24}; // k = 3 index = 1 -> {12, 15, 15}
    vector<int> test = {2, 3, 5, 7, 11}; // k = 2 index = 2 -> {5, 7}

    int test_index = 2;
    int test_k = 2;
    vector<int> ans = Find_k_closest(test, test_index, test_k);

    for (auto el : ans)
    {
        cout << el << ' ';
    }
    return 0;
}