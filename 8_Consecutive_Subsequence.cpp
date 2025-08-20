#include <bits/stdc++.h>
using namespace std;

int consecutivesubsequence(vector<int> &arr) {
    int n = arr.size();

    // Sort the array
    sort(arr.begin(), arr.end());

    int res = 1;
    int cnt = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            continue; // skip duplicates
        }
        if (arr[i] == arr[i-1] + 1) {
            cnt++;
        } else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    return res;
}

int main() {
    vector<int> arr = {3, 4, 2, 2, 5, 1, 9, 6};
    int longest = consecutivesubsequence(arr);

    cout << "Sorted Array: ";
    sort(arr.begin(), arr.end());
    for (int val : arr) {
        cout << val << " ";
    }

    cout << "\nLongest consecutive subsequence length: " << longest << endl;
}
