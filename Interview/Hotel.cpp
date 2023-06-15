#include <bits/stdc++.h>

using namespace std;

// [[1, 2], [1, 3], [2, 4], [2, 3]]

int MaxNumGuests(vector<vector<int>> &dates) {
    int max_guests = 0;
    
    map<int, int> arrives;
    map<int, int> leaving;

    for(auto guest: dates) {
        arrives[guest[0]] += 1;
        leaving[guest[1]] += 1;
    }

    for(auto day: arrives) {
        int current_max = day.second - leaving[day.first];
    }

}

int main() {

    return 0;
}