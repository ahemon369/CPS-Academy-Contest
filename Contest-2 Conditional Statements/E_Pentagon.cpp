#include <stdio.h>
#include <stdlib.h>
int solve(char c) {
    return c-'A';
}
int circular_dist(int a, int b) {
    int diff=abs(a-b);
    return diff<5-diff?diff:5-diff;
}
int main() {
    char S1,S2,T1,T2;
    scanf(" %c%c", &S1,&S2);
    scanf(" %c%c", &T1,&T2);
    int s1=solve(S1), s2=solve(S2);
    int t1=solve(T1), t2=solve(T2);
    int distS=circular_dist(s1,s2);
    int distT=circular_dist(t1,t2);
    if(distS==distT) printf("Yes\n");
    else printf("No\n");
    return 0;
}
