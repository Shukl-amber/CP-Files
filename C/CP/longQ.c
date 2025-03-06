#include<stdio.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int size=0,sworth=0,count=0;
        scanf("%d",&size);
        int arr[size];

        for (int i = 0; i < size; i++)
        {scanf("%d",&arr[i]);}



        int n=size-2;
        sworth=arr[size-1]/2;
        

        while (n>0)
        {
            int x=0;
            x=arr[n];
            if (x<=sworth)
            {
                count++;
                n--;
            }
            else
            {
                goto skip;
            }
            
        }
        skip:
        if (count==(size-2))
        {printf("1\n");}
        else
        {       
        printf("%d\n",size-count);
        }

        tc--;
    }
    return 0;
}