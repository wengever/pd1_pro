#include<stdio.h>
long long int arr[200005];
long long int sum[200005];
int main(){
    int n;
    scanf("%d",&n);
    long long int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        count += arr[i];
        sum[i] = count;
    }
    int q;
    scanf("%d",&q);
    for(int i = 0; i < q; i++){
        long long int left, right;
        scanf("%lld %lld",&left,&right);
        if(left == 1){
            printf("%lld\n",sum[right-1]);
        }
        else{
            printf("%lld\n",sum[right-1]-sum[left-2]);
        }
    }
}
