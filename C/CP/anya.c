#include<stdio.h>
#include<string.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        char str[200000];
        scanf("%s",str);
        int op;
        scanf("%d",&op);
        while (op>0)
        {
            int pos=0;
            int repl;
            scanf("%d %d",&pos,&repl);
            /*if (strlen(str)<=3)
            {   printf("NO\n");
                goto skip;*/
            printf("%c %c %c %c\n",str[0],str[1],str[2],str[3]);
            str[pos-1]=(repl==0?'0':'1');
            printf("%c %c %c %c\n",str[0],str[1],str[2],str[3]);
            for (int k = 0; k < strlen(str)-3; k++)
            {
                if (((str[k]+str[k+1])==2)&&((str[k+2]+str[k+3])==0))
                {
                    printf("YES\n");
                    goto skip;
                }
            }
            printf("NO\n");
            skip:
            op--;
        }
        
        tc--;
    }
    return 0;
}