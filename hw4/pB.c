#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    float *floatPtr = (float*)&n;
    printf("%.23e\n",*floatPtr);
}

