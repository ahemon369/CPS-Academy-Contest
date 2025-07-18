#include <stdio.h>

int main() {
    long long a,b;
    scanf("%llu %llu", &a, &b);
    long long attacks=(a+b-1)/b;
    printf("%llu\n", attacks);

    return 0;
}
