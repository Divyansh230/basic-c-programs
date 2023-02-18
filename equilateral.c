#include <stdio.h>
#include <math.h>

int main(){
    int a,ar;
    printf("Enter side of the equilateral triangle: ");
    scanf("%d",&a);

    ar=0.5*a*sqrt(3)/2*a;
    printf("%f",ar);
    return 0;
}