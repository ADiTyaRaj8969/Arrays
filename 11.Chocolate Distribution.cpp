#include<bits/stdc++.h>
using namespace std;
int findMinDifference(vector<int>& arr, int m) {
    int n = arr.size();
    if (m == 0 || n == 0 || m > n) {
        return -1;
    }
    sort(arr.begin(), arr.end());
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}
int main() {
    vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
    int result = findMinDifference(arr, m);
    if (result != -1) {
        cout << "Minimum difference is: " << result << endl;
    } else {
        cout << "Distribution is not possible." << endl;
    }
    return 0;
}
