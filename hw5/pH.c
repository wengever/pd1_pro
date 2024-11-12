#include<stdio.h>
int arr[2005][2005];
int new[2005][2005];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int row[n];
    int col[m];

    // intialize row
    for(int i = 0; i < n; i++){
        row[i] = 0;
    }

    // intialize col
    for(int i = 0; i < m; i++){
        col[i] = 0;
    }

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // find row max
    for(int i = 0 ; i < n; i++){
        int max = 0;
        for(int j = 0; j < m; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        row[i] = max;
    }
    // find col max
    for(int i = 0 ; i < m; i++){
        int max = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] > max){
                max = arr[j][i];
            }
        }
        col[i] = max;
    }

    //build new one
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == row[i] || arr[i][j] == col[j]){
                new[i][j] = arr[i][j];
            }
            else{
                new[i][j] = min(row[i],col[j]);
            }
        }
    } 

    //count
    long long int count = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            count += (new[i][j] - arr[i][j]);
        }
    }
    printf("%lld\n",count);
}