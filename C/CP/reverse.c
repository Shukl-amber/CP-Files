#include <stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int x,y,z,sum=0;
        scanf("%d",&x);
        y=x%100;
        z=y%10;
        x=x/100;
        y=y/10;
        sum=z*100 + y*10+x;
        printf("%d\n",sum);

    }
    
}