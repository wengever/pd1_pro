#include<stdio.h>
int main(){
    int n,c,k;
    scanf("%d %d %d",&n,&c,&k);
    int direction = 1;
    int arr[n+1];

    for(int i = 0; i <= n; i++){
        arr[i] = 0;
    }

    while(1){
        if(direction > 0){
            for(int i = 1; i <= n; i++){
                if(c > 0){
                    arr[i]++;
                    c--;        
                }
                else{
                    break;
                }
            }
        }
        if(direction < 0){
            for(int i = n; i >= 0; i--){
                if(c > 0){
                    arr[i]++;
                    c--;        
                }
                else{
                    break;
                }
            }
        }
        direction *= -1;
        if(c == 0){
            break;
        }
    }
    printf("%d\n",arr[k]);

}
