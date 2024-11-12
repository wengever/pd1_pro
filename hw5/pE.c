#include<stdio.h>
int main(){
    int n,q,k;
    scanf("%d %d %d",&n,&q,&k);
    int arr[n+1];
    for(int i = 1; i <=n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < q; i++){
        int left,right;
        int sum = 0;
        scanf("%d %d",&left,&right);
        for(int j = left; j <= right; j++){
            if(arr[j] < k){
                sum++;
            }
        }
        printf("%d\n",sum);
    }

}