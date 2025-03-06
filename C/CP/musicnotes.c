#include<stdio.h>
#include<math.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int size=0,net=0;
        scanf("%d",&size);
        int notes[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&notes[i]);
        }
        for (int i = 0; i < size-1; i++)
        {
            net=fabs(notes[i]-notes[i+1]);
            if ((net!=5)&&(net!=7))
            {
                printf("NO\n");
                goto skip;
            }
            
        }
        printf("YES\n");
        skip:
        tc--;
    }
    
    return 0;
}