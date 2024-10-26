#include<stdio.h>
#include<limits.h>
int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a>0 && b>0){
        long long int dif = LLONG_MAX - a;
        if(b > dif){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else if(a<0 && b<0){
        long long int dif = LLONG_MIN - a;
        if(b < dif){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else{
        printf("No\n");
    }
}