#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long size, m, k, z = -1;
            cin >> size >> m >> k;
        long long list[m], known[k], unknown[size - k];
        for (int i = 0; i < m; i++)
            cin >> list[i];
        for (int i = 0; i < k; i++)
            cin >> known[i];
        
        for (int i = 1; i < k; i++)
        {
            if (known[i-1]!=i)
            {
                z++;
                unknown[z]=i;
                cout << unknown[z] << " " << endl;
            }
        }
        z=m-k;
        if (k==m)
        {
            for (int i = 0; i < m; i++)
                cout << 1;
            goto skip;
        }

        if (k==0)
        {
            for (int i = 0; i < m; i++)
                cout << 1;
            goto skip;
        }

        for (int i = 0; i < m; i++)
        {
            int flag=0;
            for (int j = 0; j < z; j++)
            {
                if (list[i]==unknown[j])
                {
                    flag=1;
                    break;
                } 
            }
            if (!flag)
                cout << 0;
            else
                cout << 1;
        }
        
        skip:;
        cout << endl;
    }
    return 0;
}