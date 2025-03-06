#include<stdio.h>
int main () {
    int frn=0,bottle=0,milli=0,lime=0,slice=0,salt=0,tml=0,tsl=0,maxtoast=0,toastdrink=0,toastsalt=0,toastlime=0;
    scanf("%d %d %d %d %d %d %d %d",&frn,&bottle,&milli,&lime,&slice,&salt,&tml,&tsl);
    toastlime=((lime*slice)/frn);
    toastdrink=((bottle*milli)/frn)/tml;
    toastsalt=(salt/tsl)/frn;
    while (toastdrink>0&&toastlime>0&&toastsalt>0)
    {
    toastlime--;
    toastdrink--;
    toastsalt--;
    maxtoast++;
    }
    printf("%d",maxtoast);
    return 0;
}