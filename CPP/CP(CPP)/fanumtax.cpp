#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m;
ll solve(ll test){
    return m-test;
}

int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n >> m;
        ll arr[n][2];
        for (int i = 0; i < n; i++){
            cin >> arr[i][0];
            arr[i][1]=0;
        }
        cin >> m;
        int flag=0;
        for (int i = n-1; i > 0; i++){
            if (arr[i][0]<arr[i-1][0]){
                if (arr[i][1]==1&&arr[i][1]==1)
                {
                    flag=1;
                    goto skip;
                }
                if (solve(arr[i][0])<arr[i-1][0]&&arr[i][1]==0)
                {
                    if (solve(arr[i][0])<solve(arr[i-1][0])&&arr[i-1][1]==0)
                    {
                        flag=1;
                        goto skip;
                    }
                    else
                    {
                        arr[i][0]=solve(arr[i][0]);
                        arr[i][1]=1;
                        i=n-1;
                    }
                }
                else
                {
                    arr[i][0]=solve(arr[i][0]);
                    i-n-1;
                } 
            }
        }
        skip:
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}