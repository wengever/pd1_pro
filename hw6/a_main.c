#include <stdio.h>
#include "pA.h"
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int ans = add(a,b); // call this function from pA
    printf("%d", ans);
    return 0;
}
