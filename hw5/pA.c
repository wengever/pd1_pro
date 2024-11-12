#include<stdio.h>
int main(){
    int n, car_speed;
    scanf("%d",&n);
    int check = 0; //no car in the range
    int count = 0; // how many times
    for(int i = 0; i < n; i++){
        scanf("%d",&car_speed);
        if(car_speed > 60 && check == 0){
        }
        else if(car_speed > 60 && check == 1){
            check = 0;
            count++;
        }
        else if(car_speed <= 60 && check == 0){
            check = 1;
        }
        else if(car_speed <= 60 && check == 1){
        }
        if(check == 1 && i == n-1){
            count++;
        }
    }
    printf("%d\n",count);
}
