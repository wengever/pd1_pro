#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    while(n!=0){
        int remainder = n % 10;
        ans = ans * 10 + remainder;
        n /= 10;
    }
    printf("%d\n",ans);
}