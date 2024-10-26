#include<stdio.h>

void fill_in_exponent(int *arr, int exponent){
    int idx = 8;
    while(exponent){
        int remainder = exponent % 2;
        arr[idx--] = remainder;
        exponent /= 2; 
    }    
}
void complement2(int *arr){
    for(int i = 0; i < 32; i++){
        arr[i] = (arr[i] == 1)? 0 : 1;
    }
    int idx = 31;
    int carry = 1;
    while(idx != -1){
        int sum = carry + arr[idx];
        if(sum < 2){
            arr[idx--] = sum;
            break;
        }
        else{
            arr[idx--] = sum % 2;
            carry = sum / 2;
        }
    }
}

void INT_BIT(int x, int *arr){
    for(int i = 0; i < 32; i++){
        arr[i] = 0;
    }
    int idx = 31;
    int ope = 0;
    if(x<0){
        ope = 1;
        x = -x;
    }
    while(x){
        int remainder = x % 2;
        arr[idx--] = remainder;
        x /= 2; 
    }
    if(ope == 1){
        complement2(arr);
    }
}

void FLOAT_BIT(float x, int *arr){
    int sign = (x < 0) ? 1 : 0;
    arr[0] = sign;
    if(x<0){
        x = -x;
    }
    int exponent = 0;
    float fraction;
    if (x != 0) {
        while (x >= 2.0) {
            x /= 2.0;
            exponent++;
        }
        while (x < 1.0) {
            x *= 2.0;
            exponent--;
        }
        exponent += 127;
    }

    fill_in_exponent(arr,exponent);

    fraction = x - 1.0; 
        for (int i = 9; i < 32; i++) { 
            fraction *= 2.0;
            if (fraction >= 1.0) {
                arr[i] = 1; 
                fraction -= 1.0; 
            }
            else {
                arr[i] = 0; 
            }
        }

}

int main(){
    int n;
    int arr[32];
    scanf("%d",&n);
    if(n==1){
        int x;
        scanf("%d",&x);
        INT_BIT(x,arr);
        for(int i = 0; i < 32; i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    else{
        float x;
        scanf("%f",&x);
        FLOAT_BIT(x, arr);
        for(int i = 0; i < 32; i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
}
