#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N,K;
        cin >> N >> K;
        if (N%2==0)
        {
            if (K==(N/2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (K==(N/2)||K==(N/2)+1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}