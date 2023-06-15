#include <bits/stdc++.h> // OK

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    set<int> uniq;
    for(int i = 0; i != n; ++i) {
        cin >> input[i];
    }
    for(int i = 0; i != n; ++i) {
        if(uniq.find(input[i]) == uniq.end()) {
            cout << input[i];
            uniq.insert(input[i]);
        }
    }
    return 0;
}