#include<stdio.h>

int main(){
    int x;
    printf("Enter an year: ");
    scanf("%d",&x);

    (x%4==0 && x%400==0 && x%100!=0)?printf("Leap year"):printf("Not a Leap year");
    return 0;
}