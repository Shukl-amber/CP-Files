#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long num;
        int count2 = 0, count3 = 0, addcount = 0, target = 0;
        ;
        cin >> num;
        int size = trunc(log10(num)) + 1;
        for (int i = 0; i <= size; i++)
        {
            int single = num % 10;
            addcount += single;
            if (single == 2)
                count2++;
            else if (single == 3)
                count3++;
            num = num / 10;
        }
        int i = 1;
        while (1)
        {

            if ((9 * i < addcount))
                i++;
            else
            {
                target = 9 * i;
                break;
            }
        }
        int diff = target - addcount;
        while (1)
        {
            if ((count2*2)+(count3*6)+addcount==target+9)
            {
                goto yes;
            }
            if (diff % 2 == 0 && diff != 0)
            {
                if (count2 != 0)
                {
                    if (diff-(count2*2)<=0&&diff%3!=0)
                    {
                        goto yes;
                    }
                    else if (count2>0)
                    {
                        diff-=2;
                        count2--;
                    }                   
                }
                else
                {
                    goto no;
                }
            }
            else if (diff % 2 != 0 && count3 > 0)
            {
                if (count3 != 0)
                {
                    diff -= 6;
                    count3--;
                }
                else
                {
                    goto no;
                }
            }
            else if (diff == 0)
            {
            yes:
                cout << "YES" << endl;
                goto skip;
            }
            else if (count2 + count3 == 0 || diff < 0)
            {
            no:
                cout << "NO" << endl;
                goto skip;
            }
        }
    skip:;
    }
    return 0;
}