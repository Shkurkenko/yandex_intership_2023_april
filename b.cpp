#include <bits/stdc++.h>

using namespace std;

inline void Solution(vector<int> &a, const int n, const int x, long long int t)
{
    vector<pair<size_t, int>> diffs(n);
    diffs.reserve(n);
    for (size_t i = 0; i != diffs.size(); ++i)
    {
        pair<int, size_t> diff = {abs(x - a[i]), i};
        diffs[i] = diff;
    }
    sort(diffs.begin(), diffs.end());
    vector<size_t> ideal_indxs;
    for (auto [diff, index] : diffs)
    {
        if (diff == 0)
        {
            ideal_indexs.push_back(index);
            continue;
        }
        if (t - static_cast<int>(diff) >= 0)
        {
            ideal_indexs.push_back(index);
            t -= static_cast<int>(diff);
        }
    }
    if (ideal_indexs.empty())
    {
        cout << 0;
    }
    else
    {
        cout << ideal_indexs.size() << endl;
        for (auto idx : ideal_indexs)
        {
            cout << idx + 1 << ' ';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, x, t;
    cin >> n >> x >> t;
    vector<int> a(n);
    a.reserve(n);
    for (size_t i = 0; i != n; ++i)
        cin >> a[i];
    Solution(a, n, x, t);
    return 0;
}