#include<stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    (x%2==0)?printf("Even Number"):printf("Odd Number");
    return 0;
}