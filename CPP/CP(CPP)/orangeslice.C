#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N,K;
        cin >> N >> K;
        
        while (N--)
        {
            switch (K%10)
            {
            case 0:
                K-=10;
                break;
            case 2:
            case 4:
            case 6:
            case 8:
                K-=12;
                break;
            default:
                K-=11;
                break;
            }
        }
        sskip:
        if (K==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}