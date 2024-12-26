#include <stdio.h>
int GameStart(){
    char input[100];

    printf("Welcome to the game A = B, please select the level\n");
    gets(input);
    if(input[0] == '1' && input[1] == '\0'){
        return 1;
    }
    if(input[0] == '2' && input[1] == '\0'){
        return 2;
    }
    else return -1;
}
