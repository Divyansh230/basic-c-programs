#include <stdio.h>

int main(){
    char c;
    scanf("%d",&c);
    int k=printf("%d",c);
    if((k>=65&&k<=90)||(k>=97&&k<=123))
    printf("Alphabet");
    return 0;
}