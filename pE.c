#include <stdio.h>
int main(){
    long long int a, b, c, d, e;
    char aa[5],bb,cc,dd,ee;
    scanf("%4s%lld%c%lld%c%lld%c%lld%c%lld",aa,&a,&bb,&b,&cc,&c,&dd,&d,&ee,&e);
    printf("\"%lld\" \"%lld\" \"%lld\" \"%lld\" \"%lld\"\n",a,b,c,d,e);
    
    return 0;
}