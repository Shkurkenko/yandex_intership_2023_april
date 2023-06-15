#include <bits/stdc++.h>

using namespace std;

int MaxDistToClosest(vector<int> &seats)
{
    double max_distance = 0;
    double cnt = 0;
    int i = 0;
    if (seats[i] == 0)
    {
        while (seats[i] == 0)
        {
            ++i;
            ++cnt;
            max_distance = cnt;
        }
    }
    cnt = 0;
    for (; i != seats.size(); ++i)
    {
        if (i == seats.size() - 1)
        {
            ++cnt;
            max_distance = max(max_distance, cnt);
            break;
        }
        if (seats[i] == 1)
        {
            cnt = 0;
        }
        else
        {
            ++cnt;
            double dist = ceil(cnt / 2);
            max_distance = max(max_distance, dist);
        }
    }
    return max_distance;
}
int main()
{
    vector<int> test = {1, 0, 0, 0, 1, 0, 1};
    // vector<int> test = {1, 0, 0, 0};
    // vector<int> test = {0, 1};
    // vector<int> test = {1};
    // vector<int> test = {0};
    cout << MaxDistToClosest(test);
    return 0;
}