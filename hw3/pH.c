#include<stdio.h>
#include<limits.h>
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a==LLONG_MIN && b==LLONG_MIN){
        printf("-18446744073709551616\n");
        return 0;
    }
    else if((a<0&&b>0) || (a>0&&b<0)){
        printf("%lld\n",a+b);
    }
    else{
        unsigned long long sum = 0;
        sum = (unsigned long long)a+(unsigned long long)b;
        printf("%llu\n",sum);
    }
}