// TL 12 test

// 1 test
// 2
// 10 9
// 1 0
// 0 1
// 5
// 0 0 11 10 9
// 0 1 0 1 1
// 2 1 0 0 0

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_set>
// #include <time.h>

// using namespace std;

// struct Country
// {
// public:
//     int name;
//     int min_salary;
//     int education;
//     int easy_citizenship;

//     Country(int _name, int _min_salary, int _education, int _easy_citizenship)
//     {
//         name = _name;
//         min_salary = _min_salary;
//         education = _education;
//         easy_citizenship = _easy_citizenship;

//         all.push_back(*this);
//     }

//     static vector<Country> all;
// };

// vector<Country> Country::all;

// struct Classmate
// {
// public:
//     int name;
//     int salary;
//     int education;
//     int easy_citizen_country_name;

//     Classmate(int _name, int _salary, int _education, int _easy_citizen_country_name)
//     {
//         name = _name;
//         salary = _salary;
//         education = _education;
//         easy_citizen_country_name = _easy_citizen_country_name;

//         all.push_back(*this);
//     }

//     static vector<Classmate> all;

//     bool CanLiveHere(Country &country) const
//     {
//         if (easy_citizen_country_name == country.name and country.easy_citizenship == 1)
//         {
//             return true;
//         }
//         if ((country.min_salary <= salary) and
//             (country.education == education or country.education == 0))
//         {
//             return true;
//         }
//         return false;
//     }
// };

// vector<Classmate> Classmate::all;

// vector<int> GetInpVector(int size)
// {
//     int inp_iter = 0;
//     vector<int> vec(size);
//     while (inp_iter != size)
//     {
//         cin >> vec[inp_iter];
//         ++inp_iter;
//     }
//     return vec;
// }

// void Solution(int n, int q,
//             vector<int> &a, vector<int> &b,
//             vector<int> &c, vector<int> &x,
//             vector<int> &y, vector<int> &z)
// {
//     // Create countries object from arrays a b c
//     for (int i = 0; i < n; ++i)
//     {
//         Country country(i + 1, a[i], b[i], c[i]);
//     }
//     // Create objects from x y z (classmates)
//     for (int i = 0; i < q; ++i)
//     {
//         Classmate classmate(i + 1, x[i], y[i], z[i]);
//     }
//     // Traverse and match
//     vector<int> ans(q);
//     unordered_set<int> found;
//     for (size_t i = 0; i != Classmate::all.size(); ++i)
//     {
//         for (auto &j : Country::all)
//         {
//             if (Classmate::all[i].CanLiveHere(j) and found.find(i + 1) == found.end())
//             {
//                 int country_name = j.name;
//                 ans[i] = country_name;
//                 found.insert(i + 1);
//             }
//         }
//     }

//     for (auto answer : ans)
//     {
//         cout << answer << ' ';
//     }
// }

// int main()
// {
//     clock_t begin = clock();
//     double time_spent = 0.0;
//     int n, q;
//     cin >> n;
//     vector<int> a = GetInpVector(n);
//     vector<int> b = GetInpVector(n);
//     vector<int> c = GetInpVector(n);
//     cin >> q;
//     vector<int> x = GetInpVector(q);
//     vector<int> y = GetInpVector(q);
//     vector<int> z = GetInpVector(q);

//     Solution(n, q, a, b, c, x, y, z);

//     clock_t end = clock();
//     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//     cout << endl
//         << "Finished seconds: " << time_spent;
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_set>

// using namespace std;

// struct Country
// {
// public:
//     int name;
//     int min_salary;
//     int education;
//     int easy_citizenship;

//     Country(int _name, int _min_salary, int _education, int _easy_citizenship)
//     {
//         name = _name;
//         min_salary = _min_salary;
//         education = _education;
//         easy_citizenship = _easy_citizenship;

//         all.push_back(*this);
//     }

//     static vector<Country> all;
// };

// vector<Country> Country::all;

// struct Classmate
// {
// public:
//     int name;
//     int salary;
//     int education;
//     int easy_citizen_country_name;

//     Classmate(int _name, int _salary, int _education, int _easy_citizen_country_name)
//     {
//         name = _name;
//         salary = _salary;
//         education = _education;
//         easy_citizen_country_name = _easy_citizen_country_name;

//         all.push_back(*this);
//     }

//     static vector<Classmate> all;

//     bool CanLiveHere(Country &country) const
//     {
//         if (easy_citizen_country_name == country.name and country.easy_citizenship == 1)
//         {
//             return true;
//         }
//         if ((country.min_salary <= salary) and
//             (country.education == education or country.education == 0))
//         {
//             return true;
//         }
//         return false;
//     }
// };

// vector<Classmate> Classmate::all;

// vector<int> GetInpVector(int size)
// {
//     int inp_iter = 0;
//     vector<int> vec(size);
//     while (inp_iter != size)
//     {
//         cin >> vec[inp_iter];
//         ++inp_iter;
//     }
//     return vec;
// }

// void Solution(int n, int q,
//             vector<int> &a, vector<int> &b,
//             vector<int> &c, vector<int> &x,
//             vector<int> &y, vector<int> &z)
// {
//     // Create countries object from arrays a b c
//     for (int i = 0; i < n; ++i)
//     {
//         Country country(i + 1, a[i], b[i], c[i]);
//     }
//     // Create objects from x y z (classmates)
//     for (int i = 0; i < q; ++i)
//     {
//         Classmate classmate(i + 1, x[i], y[i], z[i]);
//     }
//     // Traverse and match
//     vector<int> ans(q);
//     unordered_set<int> found;
//     for (size_t i = 0; i != Classmate::all.size(); ++i)
//     {
//         for (auto &j : Country::all)
//         {
//             if (Classmate::all[i].CanLiveHere(j) and found.find(i + 1) == found.end())
//             {
//                 int country_name = j.name;
//                 ans[i] = country_name;
//                 found.insert(i + 1);
//             }
//         }
//     }

//     for (auto answer : ans)
//     {
//         cout << answer << ' ';
//     }
// }

// int main()
// {
//     int n, q;
//     cin >> n;
//     vector<int> a = GetInpVector(n);
//     vector<int> b = GetInpVector(n);
//     vector<int> c = GetInpVector(n);
//     cin >> q;
//     vector<int> x = GetInpVector(q);
//     vector<int> y = GetInpVector(q);
//     vector<int> z = GetInpVector(q);

//     Solution(n, q, a, b, c, x, y, z);

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// inline vector<int> GetInpVector(int size)
// {
//     int inp_iter = 0;
//     vector<int> vec(size);
//     while (inp_iter != size)
//     {
//         cin >> vec[inp_iter];
//         ++inp_iter;
//     }
//     return vec;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n, q;
//     cin >> n;
//     vector<int> a = GetInpVector(n);
//     vector<int> b = GetInpVector(n);
//     vector<int> c = GetInpVector(n);
//     cin >> q;
//     vector<int> x = GetInpVector(q);
//     vector<int> y = GetInpVector(q);
//     vector<int> z = GetInpVector(q);
//     vector<int> to_print;

//     for (size_t i = 0; i != q; ++i)
//     {
//         size_t l = 0;
//         size_t r = n - 1;
//         size_t mid;
//         bool flag = false;
//         size_t ans;
//         while ((l <= r) && (flag != true))
//         {
//             mid = (l + r) / 2;
//             if ((mid + 1 == z[i] and c[mid] == 1) or ((a[mid] <= x[i]) and
//                 (b[mid] == y[i] or b[mid] == 0)))
//             {
//                 ans = mid + 1;
//                 flag = true;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//         if(flag) {
//             to_print.push_back(ans);
//         } else {
//             to_print.push_back(0);
//         }
//     }

//     for(size_t i = 0; i != to_print.size(); ++i) {
//         if (i == to_print.size() - 1) {
//             cout << to_print[i];
//         } else {
//             cout << to_print[i] << ' ';
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int n, q;

// void Solution(int n, int q, vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &qx, vector<int> &qy, vector<int> &qz)
// {
//     vector<pair<int, int>> with_education;
//     vector<pair<int, int>> without_education;
//     for (int i = 1; i <= n; i++)
//     {
//         if (b[i])
//             with_education.push_back({a[i], i}); // добавляем пары {a[i], i} которые просят образование
//         else
//             without_education.push_back({a[i], i}); // добавляем пары {a[i], i} которые просят без образование
//     }
//     sort(with_education.begin(), with_education.end()); // Отсортирвем
//     sort(without_education.begin(), without_education.end());
//     vector<int> pref_ans_with_education;    // Префиксные минимумы по второму аргументу для with_education
//     vector<int> pref_ans_without_education; // Префиксные минимумы по второму аргументу для without_education

//     for (int i = 0; i < with_education.size(); i++)
//     { // Подсчитаем префиксные минимумы
//         pref_ans_with_education.push_back(with_education[i].second);
//         if (i > 0)
//             pref_ans_with_education[i] = min(pref_ans_with_education[i], pref_ans_with_education[i - 1]);
//     }
//     for (int i = 0; i < without_education.size(); i++)
//     {
//         pref_ans_without_education.push_back(without_education[i].second);
//         if (i > 0)
//             pref_ans_without_education[i] = min(pref_ans_without_education[i], pref_ans_without_education[i - 1]);
//     }

//     for (int it = 1; it <= q; it++)
//     {
//         int x = qx[it], y = qy[it], z = qz[it];

//         int ans = n + 1; // Пока делаем ответ n + 1
//         if (z > 0 && c[z] == 1)
//             ans = z; // Заранее если без требований можем попасть в страну

//         int pos_with_education = upper_bound(with_education.begin(), with_education.end(), make_pair(x + 1, 0)) - with_education.begin();             // Ищем максимальную позиция, такую что туда можем попасть по доходу и образование
//         int pos_without_education = upper_bound(without_education.begin(), without_education.end(), make_pair(x + 1, 0)) - without_education.begin(); // Ищем максимальную позиция, такую что туда можем попасть по доходу и без образование
//         pos_with_education--;
//         pos_without_education--;

//         if (pos_without_education >= 0)
//             ans = min(ans, pref_ans_without_education[pos_without_education]); // Тогда без образнивае пойдем туда где минимальный второй аргумент который говорил об индексе страны
//         if (y && pos_with_education >= 0)
//             ans = min(ans, pref_ans_with_education[pos_with_education]); // Если у нас есть образование то так же попытаемся обновить
//         if (ans == n + 1)
//             ans = 0; // Если вообще никуда не смогли попасть от ответ 0
//         cout << ans << " ";
//     }
// }

// inline vector<int> GetInpVector(int size)
// {
//     int inp_iter = 1;
//     vector<int> vec(size);
//     while (inp_iter != size)
//     {
//         cin >> vec[inp_iter];
//         ++inp_iter;
//     }
//     return vec;
// }

// int main()
// {
//     ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
//     int n, q;
//     cin >> n;
//     vector<int> a = GetInpVector(n + 1);
//     vector<int> b = GetInpVector(n + 1);
//     vector<int> c = GetInpVector(n + 1);
//     cin >> q;
//     vector<int> x = GetInpVector(q + 1);
//     vector<int> y = GetInpVector(q + 1);
//     vector<int> z = GetInpVector(q + 1);

//     for(auto el: a) {
//         cout << a[0] << '\n';
//     }

//     Solution(n, q, a, b, c, x, y, z);
// }

#include <bits/stdc++.h>

using namespace std;

int n, q;

void Solution(int n, int q, vector<int> &a, vector<int> &b, vector<int> &c,
              vector<int> &qx, vector<int> &qy, vector<int> &qz)
{
    vector<pair<int, int>> with_ed;
    vector<pair<int, int>> without_ed;
    for (int i = 1; i <= n; i++)
    {
        if (b[i])
            with_ed.push_back({a[i], i});
        else
            without_ed.push_back({a[i], i});
    }
    sort(with_ed.begin(), with_ed.end());
    sort(without_ed.begin(), without_ed.end());
    vector<int> ans_with_ed;
    vector<int> ans_without_ed;

    for (int i = 0; i < with_ed.size(); i++)
    {
        ans_with_ed.push_back(with_ed[i].second);
        if (i > 0)
            ans_with_ed[i] = min(ans_with_ed[i], ans_with_ed[i - 1]);
    }
    for (int i = 0; i < without_ed.size(); i++)
    {
        ans_without_ed.push_back(without_ed[i].second);
        if (i > 0)
            ans_without_ed[i] = min(ans_without_ed[i], ans_without_ed[i - 1]);
    }

    for (int it = 1; it <= q; it++)
    {
        int x = qx[it], y = qy[it], z = qz[it];

        int ans = n + 1;
        if (z > 0 && c[z] == 1)
            ans = z;

        int pos_with_ed = upper_bound(with_ed.begin(), with_ed.end(), make_pair(x + 1, 0)) - with_ed.begin();
        int pos_without_ed = upper_bound(without_ed.begin(), without_ed.end(), make_pair(x + 1, 0)) - without_ed.begin();
        pos_with_ed--;
        pos_without_ed--;

        if (pos_without_ed >= 0)
            ans = min(ans, ans_without_ed[pos_without_ed]);
        if (y && pos_with_ed >= 0)
            ans = min(ans, ans_with_ed[pos_with_ed]);
        if (ans == n + 1)
            ans = 0;
        cout << ans << " ";
    }
}

inline vector<int> GetInputVector(int size)
{
    int inp_iter = 1;
    vector<int> vec(size);
    while (inp_iter != size)
    {
        cin >> vec[inp_iter];
        ++inp_iter;
    }
    return vec;
}

int main()
{
    ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n;
    vector<int> a = GetInputVector(n + 1);
    vector<int> b = GetInputVector(n + 1);
    vector<int> c = GetInputVector(n + 1);
    cin >> q;
    vector<int> x = GetInputVector(q + 1);
    vector<int> y = GetInputVector(q + 1);
    vector<int> z = GetInputVector(q + 1);

    Solution(n, q, a, b, c, x, y, z);
}