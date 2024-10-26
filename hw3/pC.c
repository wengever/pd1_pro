#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d-%d-%d",&a,&b,&c);
    int count = 0;
    if(a<b){
        count+=50;
    }
    if(a+b<c){
        count+=150;
    } 
    if(a==c){
        count+=100;
    } 
    if(a==b && a==c){
        count+=300;
    }
    printf("%d\n",count); 
}