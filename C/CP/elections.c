#include<stdio.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int size,xvotes,counter=0,stcount=0,min=0;
        scanf("%d %d",&size,&xvotes);
        int dsize=size;
        int A[size],B[size],D[size];
        for (int i = 0; i < size; i++)
        scanf("%d",&A[i]);
        for (int i = 0; i < size; i++)
        scanf("%d",&B[i]);

        for (int i = 0; i < size; i++)
        {   if (A[i]>B[i])
            counter++;}
        
        if (counter>(size/2))
        {   printf("YES\n");
            goto skip;}
        
        min=A[0]-B[0];

        for (int i = 0; i < size; i++)
            D[i]=A[i]-B[i];

        
        repeat:
        for (int i = 0; i < size; i++)
        {   if (D[i]<min){
            min=D[i];
            D[i]=200000;}
        }
        
        xvotes=xvotes-min;

        if (xvotes>=0)
        {
            stcount++;
            goto repeat;
        }

        skip:
        
        if ((counter+stcount)>dsize/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    
        tc--;
    }
    
    return 0;
}