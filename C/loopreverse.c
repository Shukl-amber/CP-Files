#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter a number: ");
	scanf("%s", str);
	char temp[100];
	strcpy(temp, str);
	int length = strlen(str);
	int start = 0, end = length - 1;
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	printf("The reverse of the string is \"%s\".\n", str);
	return 0;
}