#include<stdio.h>
int main () {
    int size=0,sec=0;
    scanf("%d %d",&size,&sec);
    char str[size];
    scanf("%s",&str);
    //B=66 G=71
    while (sec>0)
    {
        int a=0,b=0,temp=0,z=0;
        a=str[z];
        b=str[z+1];
        printf("---%d %d---\n",a,b);
        if (a==66&&b==71)
        {   str[z]=71;
            str[z+1]=66;
        }
        

        printf("%s\n",str);
        z++;
        sec--;
    }
    
    return 0;
}