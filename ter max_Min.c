#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter 3 no: ");
    scanf("%d%d%d",&x,&y,&z);

    (x>y && x>z)?printf("%d",x):(y>x && y>z)?printf("%d",y):printf("%d",z);
    return 0;
}