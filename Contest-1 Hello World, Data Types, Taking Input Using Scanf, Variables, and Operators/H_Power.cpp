#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int ans=1;
    for (int i=0;i<b;i++) {
        ans=ans*a;
    }
    printf("%d\n",ans);

    return 0;
}
