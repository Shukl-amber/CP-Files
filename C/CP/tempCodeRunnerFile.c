#include <stdio.h>
int main(){
    int arr[9];
    for(int i=0; i<10; i++){
         printf("enter the 10 element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<10; j++){
        if(arr[j]>arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("the elements of the array sorted are:\n");
    for(int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}