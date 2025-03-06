#include<stdio.h>
#include<string.h>
int main () {
    int count=0;
    char str[100];
    scanf("%s",str);
    for (int i = 0; i < strlen(str)-1; i++)
    {
        if (str[i]==str[i+1])
        {
            count++;
        }
        
    }
    
    printf("%d",count+1);

    return 0;
}