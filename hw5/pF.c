#include<stdio.h>
int main(){
    int n,q,k;
    scanf("%d %d %d",&n,&q,&k);
    int arr[n+1];
    int sum [n+1];
    sum[0] = 0; //initialize
    int count = 0;
    for(int i = 1; i <= n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i] < k){
            count++;
        }
        sum[i] = count;
    }
    for(int i = 0; i < q; i++){
        int left,right;
        scanf("%d %d",&left,&right);
        printf("%d\n",sum[right]-sum[left-1]);
    }
}