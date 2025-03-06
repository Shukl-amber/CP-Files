#include<stdio.h>
#include<stdlib.h>
int main (void) {
        int size=0,x,i;
        scanf("%d %d",&size,&x);
        int *arr;
        arr=malloc(size *sizeof(int));
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        for ( i = 0; i < size; i++)
        {
            if (x==arr[i])
            {
                printf("%d ",i);
            }
            
        }
    return 0;
}