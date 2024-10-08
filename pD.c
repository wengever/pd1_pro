#include <stdio.h>
int main(){
    int day, start;
    scanf("%d %d", &day,&start);

    int idx = start;
    int count = 1;
    int check = 1;

    while(check <= start){
        if(check < start){
            printf("   ");
        }
        else if(check == start){
            if(idx % 7 == 0){
                idx = 1;
                printf("%2d\n",count);
            }
            else{
                printf("%2d ",count);
                idx++;
            }
            count++;
        }
        check++;
    }
    while(count <= day){
        if(idx % 7 != 0){
            printf("%2d ",count);
            idx++;
        }
        else{
            idx = 1;
            printf("%2d\n",count);
        }
        count++;
    }
    printf("\n");
    return 0;
}