void ParsingData(char command[21], char string1[21], char string2[21]){
    int i = 0;
    for(; i < 22; i++){
        if(command[i] == ' '){
            break;
        }
        else{
            string1[i] = command[i];
        }
    }

    i++;
    i++;
    i++;
    int idx = i;

    for(; i < 22; i++){
       if(command[i] == '\0'){
            break;
        }
        else{
            string2[i-idx] = command[i];
        }
    }   
}