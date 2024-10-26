#include<stdio.h>
int main(){
    int m,k;
    scanf("%d",&m);
    int sum = 0;
    int count = 0;
    while(sum <= m){
        scanf("%d",&k);
        sum += k;
        count++;
    }
    printf("Fried Pork!!!!\n");
    printf("%d\n",count);
}