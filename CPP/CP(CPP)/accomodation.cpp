#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll B, G, X, Y, N;
        cin >> B >> G >> X >> Y >> N;

        if (X + Y > N || B < X || G < Y)
        {
            cout << -1 << endl;
            continue;
        }

        ll min_rooms = (B + G + N - 1) / N;
        ll boys = B / X;
        ll girls = G / Y;
        ll max_rooms = min(boys, girls);

        if (min_rooms <= max_rooms)
            cout << min_rooms << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
