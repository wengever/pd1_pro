#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size = 2*n;
    int arr[size];
    for(int i = 0; i < n; i++){
        scanf("%d %d",&arr[2*i],&arr[2*i+1]);
    }
    int max = 0;
    for(int i = 1; i <= 1000; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i >= arr[2*j] && i < arr[2*j+1]){
                count ++;
            }
        }
        if(count > max){
            max = count;
        }
    }
    printf("%d\n",max);
}