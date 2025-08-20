#include <bits/stdc++.h>
using namespace std;

int minOperationsToMakePalindrome(vector<int> &arr) {
    int i = 0, j = arr.size() - 1;
    int count = 0;

    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        }
        else if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            i++;
            count++;
        }
        else {
            arr[j - 1] += arr[j];
            j--;
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 4, 2, 3, 5, 6, 2, 4, 1};
    cout << "Minimum operations: " << minOperationsToMakePalindrome(arr) << endl;
    return 0;
}
