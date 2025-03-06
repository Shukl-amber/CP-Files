#include<iostream>
using namespace std;

int main() {
    int pop,drink,combo,total;
    cin >> pop >> drink >> combo;
    if ((combo)<(pop+drink))
    {
        total=(2*combo)+drink;
    }
    else
    {
        total=(2*pop)+(3*drink);
    }
    cout << total;
    
    return 0;
}
