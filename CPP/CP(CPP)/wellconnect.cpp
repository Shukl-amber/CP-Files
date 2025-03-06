#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int wells;
        cin >> wells;
        int x[wells],y[wells];
        int maxdiffx=0,maxdiffy=0;

        for (int i = 0; i < wells; i++)
            cin >> x[i] >> y[i];

        sort(x,x+wells);
        sort(y,y+wells);
        for (int i = 0; i < wells-1; i++)
        {
            if ((x[i+1]-x[i])>maxdiffx)
                maxdiffx=x[i+1]-x[i];
            if ((y[i+1]-y[i])>maxdiffx)
                maxdiffy=y[i+1]-y[i];
        }
        if (maxdiffx>maxdiffy)
            cout << maxdiffx << endl;
        else
            cout << maxdiffy << endl;
    }
    return 0;
}