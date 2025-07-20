#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if (x<y && y-x<=2){
        printf("Yes\n");
    }
    else if (x>y && x-y<=3){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
