#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int a=x/100, b=(x/10)%10, c=x%10;
    int bca=b*100+c*10+a;
    int cab=c*100+a*10+b;
    int ans=x+bca+cab;
    printf("%d\n",ans);

    return 0;
}
