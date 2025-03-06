#include <stdbool.h>
#include <stdio.h>

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i*i<= N; i++) {
        if (N%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf("%d",&N);
    int z=2;
    while (z<=N)
    {
    if (isPrime(z)) {
        printf("%d ",z);
    }
    else {}
    z++;
    }
    

    return 0;
}
