#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int sizes,sizet,i=0;
        cin >> sizes >> sizet;
        int ops=(sizes-sizet)/2;
        string s,t;
        cin >> s;
        cin >> t;

        if ((sizes%2==0&&sizet%2!=0)||(sizes%2!=0&&sizet%2==0))
        {
            cout << "NO" << endl;
            goto skip;
        }

        while (ops--)
        {
            for (int i = 0; i < sizes; i++)            
            if (s[i]!=t[i]){
                s.erase(i,i+1);            
                break;
            }
        }
        
        if(s.compare(t)==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        skip:;
    }
    return 0;
}