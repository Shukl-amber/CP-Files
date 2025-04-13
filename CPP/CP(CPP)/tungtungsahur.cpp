#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string drum, sound;
        cin >> drum;
        cin >> sound;

        ll darr[drum.size()][2] = {0}, sarr[sound.size()][2] = {0};

        if (drum == sound)
        {
            cout << "YES" << endl;
            continue;
        }

        bool fucked = false;

        ll l = 0, r = 0, di = 0, si = 0;
        char curr = drum[0];

        for (ll i = 0; i < drum.size(); i++)
        {
            if ((drum[i] != curr))
            {
                if (curr == 'L')
                    darr[di][0] = 0,
                    darr[di][1] = l;
                else if (curr == 'R')
                    darr[di][0] = 1,
                    darr[di][1] = r;

                l = r = 0;
                di++;
                curr = drum[i];
            }

            if (drum[i] == 'L')
                l++;
            else
                r++;

            if ((i == drum.size() - 1))
            {
                if (curr == 'L')
                    darr[di][0] = 0,
                    darr[di][1] = l;
                else if (curr == 'R')
                    darr[di][0] = 1,
                    darr[di][1] = r;
                di++;
            }
        }

        curr = sound[0], l = 0, r = 0;

        for (ll i = 0; i < sound.size(); i++)
        {
            if ((sound[i] != curr))
            {
                if (curr == 'L')
                    sarr[si][0] = 0,
                    sarr[si][1] = l;
                else if (curr == 'R')
                    sarr[si][0] = 1,
                    sarr[si][1] = r;

                l = r = 0;
                si++;
                curr = sound[i];
            }

            if (sound[i] == 'L')
                l++;
            else
                r++;

            if ((i == sound.size() - 1))
            {
                if (curr == 'L')
                    sarr[si][0] = 0,
                    sarr[si][1] = l;
                else if (curr == 'R')
                    sarr[si][0] = 1,
                    sarr[si][1] = r;
                si++;
            }
        }

        if (di != si)
        {
            fucked = true;
        }
        for (ll i = 0; i < di; i++)
        {
            if (darr[i][0] != sarr[i][0])
            {
                fucked = true;
                break;
            }
            if (darr[i][1] > sarr[i][1])
            {
                fucked = true;
                break;
            }
            if(sarr[i][1] > (darr[i][1]*2))
            {
                fucked = true;
                break;
            }
        }

        if (!fucked)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}