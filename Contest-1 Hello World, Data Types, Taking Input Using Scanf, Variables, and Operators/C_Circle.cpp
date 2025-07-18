#include <stdio.h>

int main() {
    double r;
    scanf("%lf", &r);
    double pi=3.141592653589793;
    double area=pi*r*r;
    double circumference=2*pi*r;
    printf("%.6lf %.6lf\n", area, circumference);

    return 0;
}