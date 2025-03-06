#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        
        int Dtypes,Cust,req,sad=0;
        cin >> Dtypes >> Cust;

        int donuts[Dtypes],cust_pref[Cust];

        for (int i = 0; i < Dtypes; i++)
        {
            cin >> donuts[i];
        }

        for (int i = 0; i < Cust; i++)
        {
            cin >> cust_pref[i];
        }
        
       for (int i = 0; i < Cust; i++)
       {
            req = cust_pref[i]-1;
            if (donuts[req] == 0)
            {
                sad++;
                continue;
            }
            else
            {
                donuts[req]--;
            }
            
       }
       cout << sad << endl;
    }
    return 0;
}