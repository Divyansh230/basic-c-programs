#include <stdio.h>

int main(){
    float f;
    printf("Enter temprature in Fahrenhite ");
    scanf("%f",&f);

    float c=(f-32)*5/9;
    printf("The Temprature is %fC",c);
    return 0;
}