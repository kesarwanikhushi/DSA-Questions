#include <bits/stdc++.h>
using namespace std;

int numgreaterk(vector<int> &arr, int k) {
    int n = arr.size();
    int a = n / k;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= a) {
            bool alreadyPrinted = false;
            for (int j = 0; j < i; j++) {
                if (arr[j] == arr[i]) {
                    alreadyPrinted = true;
                    break;
                }
            }
            if (!alreadyPrinted) {
                cout << arr[i] << " ";
                cnt++;
            }
        }
    }
    cout << endl;
    return cnt;
}
int main() {
    vector<int> arr = {1, 4, 2, 3, 7, 7, 9, 3};
    int res = numgreaterk(arr, 2);
    cout << res;
}
