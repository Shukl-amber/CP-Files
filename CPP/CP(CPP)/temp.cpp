#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int trans(int cost, int j)
{
    int temp = 0;
    if(j==1){
        return cost+1;
    }
    else if(j==0){
        return 0;
    }
    else{
        for (int i = 0; i < j; i++)
        {
            temp += cost;
            cost++;
        }
        return temp;
    }
}

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N = 0, langcost = 0, transcost = 1;
        string lang;
        int total = 0;
        cin >> N >> langcost;
        cin >> lang;
        int arr[5]={0,0,0,0,0};
        for (int i = 0; i < N; i++)
        {
            switch (lang[i])
            {
            case 'A':
                arr[0]++;
                break;
            case 'B':
                arr[1]++;
                break;
            case 'C':
                arr[2]++;
                break;
            case 'D':
                arr[3]++;
                break;
            case 'E':
                arr[4]++;
                break;
            }
        }

        // sort(arr, arr + 5);
        
        // for (int i = 0; i < 5; i++)
        // {
        //     if (arr[i]>0&&trans(transcost, arr[i])<langcost)
        //     {
        //         transcost=trans(transcost, arr[i]);
        //         total+=transcost;
        //         arr[i]=0;
        //     }
        //     else if (arr[i]>0){
        //         total+=langcost;
        //         arr[i]=0;
        //     }
            
        // }
        cout << trans(transcost,1) << endl;
    }
    return 0;
}