#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if (n < 2) {
            return n;
        }

        int maxLength = 0;
        int left = 0;
        
        int fruit1 = -1, fruit2 = -1;
        int fruit1_last_pos = -1, fruit2_last_pos = -1;

        for (int right = 0; right < n; ++right) {
            int current_fruit = fruits[right];
            
            if (fruit1 == -1) {
                fruit1 = current_fruit;
                fruit1_last_pos = right;
            } else if (fruit2 == -1 && current_fruit != fruit1) {
                fruit2 = current_fruit;
                fruit2_last_pos = right;
            } else if (current_fruit == fruit1) {
                fruit1_last_pos = right;
            } else if (current_fruit == fruit2) {
                fruit2_last_pos = right;
            } else {
                maxLength = max(maxLength, right - left);
                
                if (fruit1_last_pos < fruit2_last_pos) {
                    left = fruit1_last_pos + 1;
                    fruit1 = current_fruit;
                    fruit1_last_pos = right;
                } else {
                    left = fruit2_last_pos + 1;
                    fruit2 = current_fruit;
                    fruit2_last_pos = right;
                }
            }
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};

int main() {
    Solution sol;

    vector<int> fruits1 = {1, 2, 1};
    cout << "For fruits = {1, 2, 1}, max fruits = " << sol.totalFruit(fruits1) << endl;

    vector<int> fruits2 = {0, 1, 2, 2};
    cout << "For fruits = {0, 1, 2, 2}, max fruits = " << sol.totalFruit(fruits2) << endl;

    vector<int> fruits3 = {1, 2, 3, 2, 2};
    cout << "For fruits = {1, 2, 3, 2, 2}, max fruits = " << sol.totalFruit(fruits3) << endl;

    vector<int> fruits4 = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    cout << "For fruits = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4}, max fruits = " << sol.totalFruit(fruits4) << endl;
    
    return 0;
}