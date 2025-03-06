#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long seat,left,right,a,b,c,total=0;
        cin >> seat >> a >> b >> c;
        left=seat;
        right=seat;
        if (left>=a)
        {
            total+=a;
            left-=a;
        }
        else
        {
            total+=left;
            left=0;
        }
        if (right>=b)
        {
            total+=b;
            right-=b;
        }
        else
        {
            total+=right;
            right=0;
        }
        if ((left+right)>=c)
        {
            total+=c;
        }
        else
        {
            total+=left+right;
        }
        cout << total << endl;        
    }
    return 0;
}