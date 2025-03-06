#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,count=0;
        cin >> size;
        string str;
        cin >> str;
        bool cont=true;
        while (cont)
        {
            auto start=str.begin(),end=str.begin();
            for (int i = 0; i < str.size(); i++)
            {
                if (i==str.size()-1)
                {
                    end++;
                    cont=false;
                    goto skip;
                }
                if (str[i]!=str[i+1]){
                    end++;
                    continue;
                }
                else
                {
                    end++;
                    goto skip;
                }
            }
            skip:
            str.erase(start,end);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}