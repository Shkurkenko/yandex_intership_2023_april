#include <bits/stdc++.h>

using namespace std;

// РќР°Р№С‚Рё РјР°РєСЃРёРјР°Р»СЊРЅС‹Р№ РїРѕ РґР»РёРЅРЅРµ СЃС‚СЂРѕРіРѕ РјРѕРЅРѕС‚РѕРЅРЅС‹Р№ РїРѕРґРѕС‚СЂРµР·РѕРє РјР°СЃСЃРёРІР°
pair<int, int> MaxMonotonic(const vector<int> &in)
{
    int start_idx = 0;
    int end_idx = 0; // ? РїРѕРјРµРЅСЏС‚СЊ РЅР° start_idx
    int max_len = 1;
    pair<int, int> ans = {0, 0};
    for (int i = 1; i != in.size(); ++i)
    {
        if (in[i] >= in[i - 1])
        {
            end_idx = i;
        }
        int current_up_len = i - end_idx + 1; // current up len =  end_index - start_index + 1;
        if (current_up_len > max_len)
        {
            max_len = current_up_len;
            start_idx = end_idx;
        }
    }
    end_idx = 0;
    for (int i = 1; i != in.size(); ++i)
    {
        if (in[i] <= in[i - 1])
        {
            end_idx = i;
        }
        int current_down_len = i - end_idx + 1;
        if (current_down_len > max_len)
        {
            max_len = current_down_len;
            start_idx = end_idx;
        }
    }
    ans.first = start_idx;
    ans.second = start_idx + max_len - 1;
    return ans;
}

int main()
{
    vector<int> test = {2, 7, 5, 4, 4, 3};
    // vector<int> test = {1, 1};
    // vector<int> test = {1};
    // vector<int> test = {1, 1, 1, 1};
    // vector<int> test = {1, 2, 3, 4, 5};
    // vector<int> test = {5, 4, 3, 2, 1};
    // vector<int> test = {2, 1, 3, 2, 1};
    pair<int, int> ans = MaxMonotonic(test);
    cout << ans.first << ' ' << ans.second;
}