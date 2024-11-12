#include<stdio.h>
#include<math.h>
#include <limits.h>
#include<stdlib.h>
int main(){
    int arr[3];
    int ans = 0;
    int max = INT_MIN;
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            if(i == j){
                continue;
            }
            for(int k = 0; k < 3 ; k++){
                if(i == k || j == k){
                    continue;
                }
                int sum_1 = arr[i]+arr[k];
                int sum_2 = arr[j]-arr[k];
                ans = sum_1 ^ sum_2;
                int sum_3 = arr[i] & arr[k] & (arr[j] & 2024) | abs(arr[k]-arr[j]);
                ans -= sum_3;
                if(ans > max){
                    max = ans;
                }
            }
        }
    }
    printf("%d\n",max);   
}