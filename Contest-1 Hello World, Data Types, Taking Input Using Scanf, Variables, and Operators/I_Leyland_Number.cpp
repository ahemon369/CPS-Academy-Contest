#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int ab=1, ba=1;
    for (int i=1;i<=b;i++) {
        ab=ab*a;
    }
    for (int i=1;i<=a;i++) {
        ba=ba*b;
    }
    printf("%d\n", ab+ba);

    return 0;
}
