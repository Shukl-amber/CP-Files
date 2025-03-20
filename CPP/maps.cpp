#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    unordered_map<string, int> map;
    map["amber"]=69;
    cout << map.at("amber") << endl;
    auto tab = map.find("amber");
    cout << tab << endl;
    return 0;
}