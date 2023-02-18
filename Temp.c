#include <stdio.h>

int main(){
    float c;
    printf("Enter temp in celcius ");
    scanf("%f",&c);

    float f=(c*9/5)+32;
    printf("Temprature is %f F",f);
    return 0;
}