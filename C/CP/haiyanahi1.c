#include <stdio.h>
int main() {
    int size, size2;
    scanf("%d %d", &size, &size2);
    int arr[size];
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    while (size2--) {
        int target, start = 0, end = size - 1, found = 0;
        scanf("%d", &target);
        while (start <= end) {
            int center = (start + end) / 2;
            if (arr[center] == target) {
                found = 1;
                break;
            }
            if (arr[center] < target) start = center + 1;
            else end = center - 1;
        }
        printf(found ? "YES\n" : "NO\n");
    }
return 0;
}