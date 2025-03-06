#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int width=0,length=0,target=0,peri=0,buffer=0;
        cin >> length >> width >> target;
        for (int wd = 1; wd <= width; wd++)
        {
            for (int ln = 1; ln <= length; ln++)
            {
                peri = 2 * (ln + wd);
                if (peri < target){
                }
                else
                {
                    cout << peri-target << endl;    
                    goto skip;
                }
            }
        }   
        cout << target-peri << endl;
        skip:;    
    }
    return 0;
}