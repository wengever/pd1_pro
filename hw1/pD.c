#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    int res = (a+b)*(c=='+')+(a-b)*(c=='-')+(a*b)*(c=='*');
    printf("%d",res);
}