#include<stdio.h>
void check(int arr[], int *ans, int i, int *k){
    int miss = 1;
    for(int j = 0; j < 3; j++){
        if(arr[j] == i){
            miss = 0;
            break;
        }
    }
    if(miss == 1){
        ans[(*k)++] = i;
    }
}
int main(){
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int ans[3];
    for(int i = 0; i < 3; i++){
        ans[i] = 0;
    }
    int k = 0;

    for(int i = 1; i <= 3; i++){
        check(arr, ans, i, &k);    
    }
    
    int count = 0;
    for(int i = 0; i < 3; i++){
        if(ans[i] != 0){
            count += 1; 
        }
    }
    printf("%d",count);
    if(count == 0){
        printf("Oh, Fried Shrimp, you're amazing!\n");
        return 0;
    }
    else{
        for(int i = 0; i <= (count-1); i++){
            if(i != count-1){
                printf("%d ",ans[i]);
            }
            else{
                printf("%d",ans[i]);
            }
        }
    }
    printf("\n");
}