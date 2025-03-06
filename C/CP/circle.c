#include<stdio.h>
#include<math.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        double area,pi,r;
        pi=3.1415926535;
        scanf("%lf",&r);
        area=(pi*r*r);
        printf("%.7f\n",area);
        tc--;
    }
    
    return 0;
}