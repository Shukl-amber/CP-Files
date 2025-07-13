#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int test(double target, int a, int b)
{
    double A = abs(target - a);
    double B = abs(target - b);

    if (A == B)
        return a < b ? a : b;
    else
        return A < B ? a : b;
}

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        int arr[size];
        double avg = 0;

        unordered_map<int, int> freq;

        for (ll i = 0; i < size; i++)
            cin >> arr[i],
                avg += arr[i],
                freq[arr[i]]++;

        avg /= size;

        auto max = max_element(freq.begin(), freq.end(),
                               [avg](const pair<int, int> &a, const pair<int, int> &b)
                               {
                                   if (a.second == b.second && (b.first == test(avg, a.first, b.first)))
                                       return a.first > b.first;
                                   return a.second < b.second;
                               });

        int cakes = max->first, cost = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= cakes)
                cost += cakes * 20;
            else
                cost += arr[i] * 20,
                    cost -= abs(arr[i] - cakes) * 30;
        }

        cout << cost << endl;
    }
    return 0;
}