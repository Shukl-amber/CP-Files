#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int s,l,xl,ps,pl,pxl;
        cin >> s >> l >> xl >> ps >> pl >> pxl;
        int total=0,shirts=xl;

        if(pxl>0&&pxl>=xl)
        {
            total+=min(shirts,pxl);
            xl-=min(shirts,pxl);
        }
        else
        {
            total+=pxl;
            xl-=pxl;
        }

        shirts=l+xl;

        if (pl>0&&pl>=l)
        {
            total+=min(shirts,pl);
            l-=min(shirts,pl);
        }
        else
        {
            total+=pl;
            l-=pl;
        }

        shirts=s+l+xl;
        
        if (ps>0&&ps>=s)
        {
            total+=min(ps,shirts);
            s-=min(ps,shirts);
        }
        else
        {
            total+=ps;
            shirts-=s;
        }       
    
        cout << total << endl;
        
    }
    return 0;
}