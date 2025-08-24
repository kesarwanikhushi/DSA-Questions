#include <bits/stdc++.h>
using namespace std;

vector<int> findCommon(int arr[], int brr[], int crr[], int n1, int n2, int n3) {
    vector<int> res;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        // If all three elements are equal
        if (arr[i] == brr[j] && brr[j] == crr[k]) {
            // To avoid duplicates
            if (res.empty() || res.back() != arr[i])
                res.push_back(arr[i]);
            i++;
            j++;
            k++;
        }
        // Move the pointer with the smallest value
        else if (arr[i] < brr[j])
            i++;
        else if (brr[j] < crr[k])
            j++;
        else
            k++;
    }

    return res;
}

int main() {
    int arr[] = {1, 5, 10, 20, 40, 80,20};
    int brr[] = {6, 7, 20, 80, 100, 20};
    int crr[] = {3, 4, 15, 20, 30, 70, 80, 120, 20};

    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(brr) / sizeof(brr[0]);
    int n3 = sizeof(crr) / sizeof(crr[0]);

    vector<int> common = findCommon(arr, brr, crr, n1, n2, n3);

    cout << "Common elements: ";
    for (int num : common)
        cout << num << " ";
    cout << endl;

    return 0;
}
