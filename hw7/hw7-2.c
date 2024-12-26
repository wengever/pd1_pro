#include <stdio.h>
char input[21];
char* getUserInput(){
    gets(input);
    return input;
}

void printAllInput(char command[][21], int command_cnt){
    for(int i = 0; i < command_cnt; i++){
        printf("%s\n",command[i]);   
    }
}