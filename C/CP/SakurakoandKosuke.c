#include<stdio.h>
#include<math.h> 
int main () {
    int tc=0;
    scanf("%d",&tc);
    while (tc>0)
    {
        int limit=0,i=0,count=0;
        scanf("%d",&limit);
        limit=fabs(limit);
        for ( i = 1; i ;)
        {
            /*Sakurako*/
                count=count-((2*i)-1);
                if (fabs(count)>limit)
                {printf("Sakurako\n");
                goto skip;}
                i++;
            

            /*Kosuke*/
                count=count+((2*i)-1);
                if (fabs(count)>limit)
                {printf("Kosuke\n");
                goto skip;}
                i++;
            
        }
        skip:
        tc--;
    }
return 0;
}