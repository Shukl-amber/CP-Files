#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;
        int init[N], final[N], arr[N][2];

        for (int i = 0; i < N; i++)
            cin >> init[i];
        for (int i = 0; i < N; i++)
            cin >> final[i];

        int pivot = final[0],pivotindex=0;

        for (int i = 0; i < N; i++)
        {
            if (init[i]==pivot)
                pivotindex=i;
            arr[i][0] = abs(init[i] - pivot);
            arr[i][1] = init[i];
        }
        bool sorted = true;
        do{
            for (int i = 0; i < N - 1; i++)
            {
                sorted = true;
                if (arr[i][0] > arr[i + 1][0])
                {
                    sorted = false;
                    int temp1 = arr[i][0];
                    int temp2 = arr[i][1];
                    arr[i][0] = arr[i + 1][0];
                    arr[i][1] = arr[i + 1][1];
                    arr[i + 1][0] = temp1;
                    arr[i + 1][1] = temp2;
                }
                else if (arr[i][0]==arr[i+1][0] && arr[i][1]>arr[i+1][1])
                {
                    sorted = false;
                    int temp1 = arr[i][0];
                    int temp2 = arr[i][1];
                    arr[i][0] = arr[i + 1][0];
                    arr[i][1] = arr[i + 1][1];
                    arr[i + 1][0] = temp1;
                    arr[i + 1][1] = temp2;
                } 
            }
        }while (!sorted);
        bool flag = true;
        for (int i = 0; i < N; i++)
        {
            if (arr[i][1] != final[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << pivotindex+1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}