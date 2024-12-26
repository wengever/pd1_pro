#include <stdio.h>
#include <string.h>
void GeneratingRecursion(int level, int target_len, char current[], char all_testcase[50549][11], int *index) {
    if(level == target_len){
        current[level] = '\0';
        strcpy(all_testcase[*index],current);
        (*index)++;
        return;
    }

    for(char ch = 'a'; ch <= 'c'; ch++){
        current[level] = ch;
        GeneratingRecursion(level+1, target_len, current, all_testcase, index);
    }

}

void GeneratingTest(int target_len, char all_testcase[50549][11]){
    char current[11]; // to store the current string
    int index = 0;
    GeneratingRecursion(0, target_len, current, all_testcase, &index);
}