#include <bits/stdc++.h>

using namespace std;

int FindShortestDist(string s)
{
    int max_len = INT_MAX;
    int start = -1;
    int end = -1;
    for (int i = 0; i != s.length(); ++i)
    {
        char c = s[i];
        if (c == 'X')
        {
            start = i;
        }
        if (c == 'Y')
        {
            end = i;
        }
        if (start != -1 and end != -1)
        {
            int current_dist = abs(end - start);
            max_len = min(current_dist, max_len);
        }
    }
    if(max_len != INT_MAX) {
        return max_len;
    } else {
        return 0;
    }
};

int main()
{

    // string test = "YY";
    // -> 0
    // string test = "XX";
    // -> 0
    // string test = "XY";
    // -> 1
    // string test = "YOX";
    // -> 2
    string test = "OOOXOOYOXO";
    // -> 2
    // string test = "OOOXXOY";
    // -> 2
    cout << FindShortestDist(test);
    return 0;
}