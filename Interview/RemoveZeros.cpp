#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> test = {1, 2, 3, 0, 0, 5, 6};
    int n = test.size();
    int l = 0;
    int r = 0;
    while(r < n) {
        if(test[r] == 0) {
            ++r;
        } else {
            swap(test[l], test[r]);
            ++r;
            ++l; 
        }
    }
    for(auto el: test) {
        cout << el << '\n';
    }
    return 0;
}