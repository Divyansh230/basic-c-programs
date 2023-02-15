#include <stdio.h>

int main(){
    
   int m,n,c;
   scanf("%d%d%d",&m,&n,&c);
   (m>n&&m>c)?printf("%d",m):(n>m&&n>c)?printf("%d",n):printf("%d",c);
   return 0;
}