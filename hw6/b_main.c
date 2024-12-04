#include <stdio.h>
#include "pB.h"

int A[100][100], B[100][100];

void input(int n, int m, int (*arr)[100]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    input(n, m, A);
    input(n, m, B);

    solve(n, m, A, B);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int val = get_value(i, j);
            printf("%d", val);
            if( j != m - 1 ) printf(" ");
        }
        printf("\n");
    }

    return 0;
}