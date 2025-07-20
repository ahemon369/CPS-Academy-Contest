#include <stdio.h>
int main() {
    int n,a;
    scanf("%d %d", &n,&a);
    int ans=n/1000;
    if ((n%500)<=a) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
