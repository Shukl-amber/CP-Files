#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main () {
    int size,target;
    scanf("%d %d",&size,&target);
    int *arr;
    int i=0;
    bool l=false;
        arr=malloc(size *sizeof(int));
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        for ( i = 0; i < size; i++)
        {
          for (int j = i+1; j < size; j++)
         {
            for (int k = j+1; k < size; k++)
            {
                if (arr[i]+arr[j]+arr[k]==target)
                {
                    printf("%d %d %d",i+1,j+1,k+1);
                    l=true;
                    return 0;
                }
                
            }
         }
        }
    if (!l)
    {
        printf("-1");
    }
    
return 0;
}