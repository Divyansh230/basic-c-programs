#include <stdio.h>

int main(){
    int d;
    printf("Enter Number of the Days: ");
    scanf("%d",&d);
    printf("Years are %d\nWeeks are %d\n Months are %d",d/365,d/7,d/30);
    return 0;
}