#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b!=0){
        printf("%d",b);
    }

    if(a == 0){
        printf("%d\n",a);
    }
    while(a!=0){
        int remainder = a % 10;
        a /= 10;
        printf("%d",remainder);    
    }
    printf("\n");
}