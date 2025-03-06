#include<iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++){
        if (n<0){
            if (i%2==0)
                cout << "true";
            else
                cout << "false";

            return 0;
        }
        else
            n=n-(10-i);
    }
    return 0;
}