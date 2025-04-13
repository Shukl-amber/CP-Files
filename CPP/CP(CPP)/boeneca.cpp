#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int maxSum = 0;

        for (int k = 0; k < n; ++k) {
            int currentSum = 0;
            for (int i = 0; i < n; ++i) {
                currentSum += (a[k] ^ a[i]);
            }
            maxSum = max(maxSum, currentSum);
        }

        cout << maxSum << '\n';
    }

    return 0;
}
