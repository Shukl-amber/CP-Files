#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        int s1=0,s0=0,t1=0,t0=0;
        string S,T;
        cin >> size;
        cin >> S;
        cin >> T;     
        if (size<=0){
            cout << "YES";
            cout << endl;
            goto skip;
        }
        if (size==1)
        {
            if (S[0]==T[0])
                cout << "YES";
            else   
                cout << "NO";
            cout << endl;
            goto skip;
        }           
        for (int i = 0; i < size; i++)
        {
            if (S[i]=='0')
                s0++;
            else
                s1++;
                
            if (T[i]=='0')
                t0++;
            else    
                t1++;
        }
        if (((s0==t0)&&(s1==t1))||((s0==t1)&&(s1==t0)))
            cout << "YES";
        else    
            cout << "NO";
        cout << endl;
        skip:
        }
    return 0;
}