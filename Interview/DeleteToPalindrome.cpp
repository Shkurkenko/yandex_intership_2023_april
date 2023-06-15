#include <bits/stdc++.h>

using namespace std;

bool IsPalindrome(string::iterator left, string::iterator right) {
    while(left < right) {
        if(*left != *right) {
            return false;
        }
        left++;
        right--;
    }
    return true;
};

bool RemovedOnePalindrome(string &s) {
    int l = 0, r = s.length() - 1;
    while(l < r) {
        if(s[l] == s[r]) {
            ++l;
            --r;
        } else {
            if(IsPalindrome(s.begin() + l + 1, s.begin() + r)) return true;
            if(IsPalindrome(s.begin() + l, s.begin() + r - 1)) return true;
            return false;
        }
    }
    return true;
};

int main() {

    // string test = "abecbea";
    string test = "caa";
    // cout << IsPalindrome(test.begin()); 
    cout << false;

    
    // cout << RemovedOnePalindrome(test);
    
    return 0;
}