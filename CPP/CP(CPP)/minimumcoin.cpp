#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,cost;
        cin >> size >> cost;
        int coin[size],value[size],totalvalue[size];

        for (int i = 0; i < size; i++)
            cin >> coin[i];
        for (int i = 0; i < size; i++){
            cin >> value[i];
            totalvalue[i] = value[i] * coin[i];
        }

        sort(totalvalue,totalvalue+size);

        for (int i = 0; i < size; i++)
        {
            if (cost<=0)
            {
                cout << i << endl;
                goto skip;
            }
            else
                cost-=totalvalue[size-i-1];
        }
        cout << -1 << endl;
        skip:;        
    }
    return 0;
}