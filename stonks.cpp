#include <bits/stdc++.h>

using namespace std;

inline vector<double> GetInputInVector(int size)
{
    int inp_iter = 0;
    vector<double> vec(size);
    while (inp_iter != size)
    {
        cin >> vec[inp_iter];
        ++inp_iter;
    }
    return vec;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<double> prices = GetInputInVector(n);

    vector<vector<double>> left(n, {1, 0, 0});
    vector<vector<double>> right(n, {1, 0, 0});

    double current_min_left = prices[0];
    double max_profit_left = 0;
    double current_max_right = prices[prices.size() - 1];
    double max_profit_right = 0;
    int min_idx_left = 0;
    int max_idx_left = 0;
    int max_idx_right = prices.size() - 1;
    int min_idx_right = prices.size() - 1;

    for (size_t i = 1; i != prices.size(); ++i)
    {
        double price_left = prices[i];
        double current_factor = price_left / current_min_left;
        vector<double> days_left(3, 0);
        if (current_factor > max_profit_left)
        {
            max_idx_left = i;
            max_profit_left = current_factor;
            days_left[0] = max_profit_left;
            days_left[1] = min_idx_left;
            days_left[2] = max_idx_left;
            left[i] = days_left;
        }
        else
        {
            left[i] = left[i - 1];
        }
        if (current_min_left >= price_left)
        {
            min_idx_left = i;
            current_min_left = price_left;
        }
    }

    for (size_t i = prices.size() - 1; i-- > 0;)
    {
        double price_right = prices[i];
        double current_factor = current_max_right / price_right;
        vector<double> days_right(3, 0);
        if (current_factor > max_profit_right)
        {
            min_idx_right = i;
            max_profit_right = current_factor;
            days_right[0] = max_profit_right;
            days_right[1] = min_idx_right;
            days_right[2] = max_idx_right;
            right[i] = days_right;
        }
        else
        {
            right[i] = right[i + 1];
        }
        if (current_max_right < price_right)
        {
            max_idx_right = i;
            current_max_right = price_right;
        }
    }
    vector<vector<int>> ans(2, {0, 0});
    double max_product = 0;
    for (size_t i = 1; i != left.size() - 1; ++i)
    {
        double current_product = left[i][0] * right[i][0];
        if (max_product < current_product)
        {
            if (current_product > 1.0)
            {
                max_product = current_product;
                if (left[i][2] == right[i][1])
                {
                    ans[0] = {(int)left[i][1] + 1, (int)right[i][2] + 1};
                    ans[1] = {{0, 0}};
                }
                else
                {
                    ans[0] = {(int)left[i][1] + 1, (int)left[i][2] + 1};
                    ans[1] = {(int)right[i][1] + 1, (int)right[i][2] + 1};
                }
            }
        }
    }
    // Output
    if (ans[0][0] == 0 and ans[1][0] == 0)
    {
        cout << 0;
    }
    else if (ans[1][0] == 0)
    {
        cout << 1 << '\n';
        cout << ans[0][0] << ' ' << ans[0][1];
    }
    else
    {
        cout << 2 << '\n';
        cout << ans[0][0] << ' ' << ans[0][1] << '\n';
        cout << ans[1][0] << ' ' << ans[1][1];
    }

    return 0;
}