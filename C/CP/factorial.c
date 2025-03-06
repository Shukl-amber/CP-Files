#include <stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int factorial;
        long long value=1;
        scanf("%d",&factorial);
        while (factorial>0)
        {
            value=value*factorial;
            factorial--;

        }
        printf("%lld\n",value);
        tc--;
    }
    
}