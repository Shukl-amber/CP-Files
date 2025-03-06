#include<stdio.h>
#include<stdlib.h>
int main () {
    int size,rev,ind,i=0;
    scanf("%d %d %d",&size,&rev,&ind);
    int *arr;
        arr=malloc(size *sizeof(int));
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
    if (rev%2==0)
    {
        printf("%d",arr[ind]);
    }
    else
    {
        i=size-ind-1;
        printf("%d",arr[i]);
    }
    
    return 0;
}