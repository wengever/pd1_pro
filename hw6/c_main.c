#include <stdio.h>
#include "pC.h"
int main() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    f(n, &ans);
    printf("%d", ans);
    
    return 0;
}