#include <stdio.h>
#include <string.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        char str[101];
        scanf("%s", str);
        int size = strlen(str);
        char final[size + 1];
        for (int i = 0; i < size; i++) {
            if (str[i] == 'p') {
                final[size - i - 1] = 'q';
            } else if (str[i] == 'q') {
                final[size - i - 1] = 'p';
            } else {
                final[size - i - 1] = str[i];
            }
        }
        final[size] = '\0';
        printf("%s\n", final);
    }
    return 0;
}