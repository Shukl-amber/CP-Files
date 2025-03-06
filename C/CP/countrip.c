#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int size=0,count=0,Ai=0,Ak=0;
        scanf("%d",&size);
        if (size<3)
        {
            printf("0");
            continue;
        }
        
        int arr[size];
        for (int i = 0; i < size; i++)
        {scanf("%d",&arr[i]);}
        int i=size-1;
        while (i>=0)
        {
            int j=size-1;
            while (j>=0)
            {
                int k=size-1;
                while (k>=i-2)
                {
                    Ai=arr[i];
                    Ak=arr[k];
                    int lhs=0,rhs=0;
                    lhs=fabs(Ai-Ak);
                    rhs=fabs(i-j)+fabs(j-k);
                    if(lhs==rhs)
                    {
                        count++;
                    }
                skip:
                k--;
                }
            j--;
            }
        i--;
        }
    printf("%d\n",count);
    tc--;
    }
return 0;
}