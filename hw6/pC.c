void f(int n, int *ans){
    if(n == 1){
        *ans = 1;
    }
    else if(n == 2){
        *ans = 1;
    }
    else{
        int a = 1;
        int b = 1;
        for(int i = 3; i <= n; i++){
            *ans = a + b;
            a = b;
            b = *ans;
        }
    }

}