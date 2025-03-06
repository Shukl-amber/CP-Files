#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,op=0;
        cin >> size;
        string str;
        cin >> str;

        int flag=1;

        size++;

        while (flag)
        {
            size--;
            rest:
            

            if (size<2)
            {
                cout << "-1" << endl;
                goto skip;
            }

            for (int i = 0; i <= size/2; i++)
            {
                if (str[i]==str[size-i-1]){
                    if (i==(size/2)){
                        cout << op << endl;
                        goto skip;}   
                    continue;}
                else{
                    str[i]=0;
                    op++;
                }
                
            }
            
        }
        skip:
    }
    return 0;
}