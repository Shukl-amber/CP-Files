#include<stdio.h>
#include<stdlib.h>
int main (void) {
    int i=0,tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int size=0;
        int sum=0,a;
        scanf("%d",&size);
    int *arr;
    arr= malloc(size *sizeof(int));
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    tc--;
    }
    return 0;
}