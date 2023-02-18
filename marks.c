#include <stdio.h>

int main(){
    int a,b,c,d,f;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    printf("Total\tAverage\tPercentage\n");
    int t=a+b+c+d;
    int q=(a+b+c+d)/5;
    int p=t/50*100;
    printf("%d\t%d\t%d",t,p,q);
    return 0;
}