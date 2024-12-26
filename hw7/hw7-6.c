#include <stdio.h>
char* ProcessingCommand(char string1[51][21], char string2[51][21], char testcase[51], int command_cnt, int testmode){
    static char res[51]; // Static array to retain the data after function ends
    strcpy(res, testcase);
    if(testmode == 1){
        for (int i = 0; i < command_cnt; i++) {
            char *pos = NULL;
            while ((pos = strstr(res, string1[i])) != NULL) {
                char temp[51];
                strcpy(temp, pos + strlen(string1[i])); // Copy remaining part after string1[i]
                strcpy(pos, string2[i]); // Replace part with string2[i]
                strcat(res, temp); // Append the rest of the string
                printf("%s\n", res);
            }
        }
    }
    else{
        for (int i = 0; i < command_cnt; i++) {
            char *pos = NULL;
            while ((pos = strstr(res, string1[i])) != NULL) {
                char temp[51];
                strcpy(temp, pos + strlen(string1[i])); // Copy remaining part after string1[i]
                strcpy(pos, string2[i]); // Replace part with string2[i]
                strcat(res, temp); // Append the rest of the string
            }
        }
    }
    return res;
}