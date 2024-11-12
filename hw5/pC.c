#include<stdio.h>
int arr[1000002] = {0};
int main(){
    int n, left, right;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &left, &right);
        arr[left]++;
        arr[right]--;
    }
    int max = 0;
    int sum = 0;
    for(int i = 1; i <= 1000000; i++){
        sum += arr[i];
        if(sum > max){
            max = sum;
        }
    }
    printf("%d\n",max);
    return 0;
}