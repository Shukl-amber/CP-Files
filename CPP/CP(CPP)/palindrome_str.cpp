#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll arr[3], zero = 0;
        cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr,arr+3);

		if(arr[0]%2==0 || arr[1]%2==0)
		cout << arr[0] + arr[1] << endl;

		if(arr[0]%2!=0 && arr[1]%2!=0)
		cout << arr[0] + arr[1] - 1 << endl;
    }
    return 0;
}
