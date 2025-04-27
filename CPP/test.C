#include <iostream>

using namespace std;

int add(){
    static int x=10;
    x+=10;
    return x;
}

int main()
{
    cout << add() << endl;
    cout << add() << endl;
}