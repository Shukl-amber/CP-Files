#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main () {
    int *arr;
    int size,size2,i=0,z;
    scanf("%d %d",&size,&size2);
        arr=malloc(size *sizeof(int));
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        
        for (int n = 0; n < size2; n++)
        {
            bool x=false;
            scanf("%d",&z);
           for ( i = 0; i < size; i++)
           {
             if(arr[i]==z){
                printf("YES\n");
                x= true;
                break;
            }
            else if (arr[i]>z)
            {
                break;
            }
            
           }
        if (! x)
        {
            printf("NO\n");
        }
            
        }
        

    
    return 0;
}