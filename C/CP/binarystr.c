#include <stdio.h> 
#include <string.h> 
 
void deleteCharacter(char *str, int index) { 
    int length = strlen(str); 
    if (index < 0 || index >= length) { 
        return;}
    for (int i = index; i < length - 1; i++) { 
        str[i] = str[i + 1]; } 
    str[length - 1] = '\0'; 
} 

int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {  
    int size;
    scanf("%d",&size);
    char str[size];
    scanf("%s",&str); 
    int indexToDelete; 
    int i=0;
    while(i<size-1)
    {
    if (str[i]!=str[i+1])
        {
            indexToDelete=i;
            deleteCharacter(str, indexToDelete);
            deleteCharacter(str, indexToDelete);
            size=strlen(str);
        }
    i++;
    }
    tc--;
    }
    return 0;
}