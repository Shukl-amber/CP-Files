#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long target,a,b,c,days=0,iterator=0,test,count=0;
        cin >> target >> a >> b >> c;

        if (target/(a+b+c)>0)
        {
            days=(target/(a+b+c))*3;
            target=target-((a+b+c)*(days/3));
        }
        while (target>0)
        {
            if (iterator%3==0)
                test=a;
            else if (iterator%3==1)
                test=b;
            else
                test=c;
        
            if (target%(a+b+c)==0)
            {
                days+=(target/(a+b+c))*3;
                target=0;
            }       
            else
            {
                target-=test;
                days++;
                iterator++;
            }        
           
        }
        cout << days << endl;
    }
    return 0;
}