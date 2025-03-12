#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N <= 0) {
            cout << -1 << endl;
            continue;
        }
        vector<int> init(N), finalArr(N);
        for (int i = 0; i < N; i++)
            cin >> init[i];
        for (int i = 0; i < N; i++)
            cin >> finalArr[i];

        int pivot = finalArr[0];
        int pivotIndex = -1;
        for (int i = 0; i < N; i++) {
            if (init[i] == pivot) {
                pivotIndex = i;
                break;
            }
        }
        if (pivotIndex == -1) {
            cout << -1 << endl;
            continue;
        }

        vector<pair<int, int>> arr;
        for (int i = 0; i < N; i++) {
            arr.emplace_back(abs(init[i] - pivot), init[i]);
        }

        sort(arr.begin(), arr.end());

        bool matches = true;
        for (int i = 0; i < N; i++) {
            if (arr[i].second != finalArr[i]) {
                matches = false;
                break;
            }
        }
        cout << (matches ? pivotIndex + 1 : -1) << endl;
    }
    return 0;
}
