#include<stdio.h>
#include<math.h>
int main () {
    float words,wpp,tp,tcp;
    scanf("%f %f",&words,&wpp);
    tcp=(words/wpp);
    tp=ceil(tcp);
    tcp=floor(tcp);
    printf("%.0f %.0f",tp,tcp);
    return 0;
}