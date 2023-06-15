#include<bits/stdc++.h>

using namespace std;

int Solution(vector<int> &c, vector<int> &r, vector<int> &s, int n, int k)
{
    unordered_map<int, int> keys;
    int ans = 0;
    for (size_t i = 0; i != c.size(); ++i)
    {
        keys.insert({c[i], r[i]});
    }
    for (size_t i = 1; i != s.size(); ++i)
    {
        if (keys[s[i]] != keys[s[i - 1]])
        {
            ++ans;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k, input_iter;
    cin >> n;
    input_iter = 0;
    vector<int> c(n);
    while (input_iter != n)
    {
        cin >> c[input_iter];
        ++input_iter;
    }
    input_iter = 0;
    vector<int> r(n);
    while (input_iter != n)
    {
        cin >> r[input_iter];
        ++input_iter;
    }
    input_iter = 0;
    cin >> k;
    vector<int> s(k);
    while (input_iter != k)
    {
        cin >> s[input_iter];
        ++input_iter;
    }
    cout << Solution(c, r, s, n, k);
    return 0;
}
