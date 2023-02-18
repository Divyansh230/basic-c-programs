#include <stdio.h>

int main(){
    int b,h,a;
    printf("Enter base and height of the triangle: ");
    scanf("%d%d",&b,&h);

    a=0.5*b*h;
    printf("Area of the triangle is %d",(int)a);
    return 0;
}