#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    // Step 1: Sort intervals based on start time
    sort(arr.begin(), arr.end());

    vector<vector<int>> res; // Stores merged intervals

    for (auto interval : arr) {
        // If res is empty OR no overlap with the last interval
        if (res.empty() || interval[0] > res.back()[1]) {
            res.push_back(interval); // Add as a new interval
        } else {
            // Overlap: merge with last interval
            res.back()[1] = max(res.back()[1], interval[1]);
        }
    }

    return res;
}

int main() {
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);

    cout << "The merged intervals are:\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;

    return 0;
}
