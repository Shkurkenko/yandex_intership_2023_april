#include <bits/stdc++.h>

using namespace std;

int main() {

    string test = "Very strong test to check something ";
    string str = "%20";

    int space_cnt = 0;
    int str_end = test.length() - 1;

    for(int i = 0; i != test.length(); ++i) {
        if(test[i] == ' ') ++space_cnt;
    }
    
    test.reserve(test.length() + space_cnt * (str.length() - 1));
    test.resize(test.length() + space_cnt * (str.length() - 1));

    int l = str_end;
    int r = test.length() - 1;

    while(l < r) {
        if(test[l] != ' ') {
            test[r] = test[l]; 
        } else {
            for(int i = str.length() - 1; i >= 0; --i) {
                test[r] = str[i];
                if(i != 0) --r;
            }
        }
        --r;
        --l;
    }
    
    cout << test;
    return 0;
}