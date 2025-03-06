#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        string s;
        cin >> s;

        vector<int> arr(5, 0);
        for (int i = 0; i < n; i++)
        {
            switch (s[i])
            {
            case 'A':
                arr[0]++;
                break;
            case 'B':
                arr[1]++;
                break;
            case 'C':
                arr[2]++;
                break;
            case 'D':
                arr[3]++;
                break;
            case 'E':
                arr[4]++;
                break;
            }
        }

        long long min_cost = (long long)n * (n + 1) / 2; 

        for (int mask = 0; mask < (1 << 5); ++mask) {
            long long current_cost = 0;
            int remaining_people = 0;

            for (int i = 0; i < 5; ++i) {
                if ((mask >> i) & 1) {
                    current_cost += c;
                }
            }

            for (int i = 0; i < 5; ++i) {
                if (!((mask >> i) & 1)) {
                    remaining_people += arr[i];
                }
            }

            long long translator_cost = (long long)remaining_people * (remaining_people + 1) / 2;
            current_cost += translator_cost;

            min_cost = min(min_cost, current_cost);
        }

        cout << min_cost << endl;
    }
    return 0;
}