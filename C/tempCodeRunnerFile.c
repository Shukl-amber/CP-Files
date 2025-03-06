#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("the greatest no. is %d number",a);
    }else if(b>a&&b>c){
        printf("the greatest no. is %d number",b);
    }else if(c>a&&c>b){
        printf("the greatest no. is %d number",c);
    }else{
        printf("all are equal");
    }
}