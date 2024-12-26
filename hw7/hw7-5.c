char* getAnswer2(char testcase[51]){
    int n = 0;
    while(testcase[n] != '\0'){
        n++;
    }
    int size = n-1;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j <= size; j++){
            if(testcase[i] > testcase[j]){
                char c = testcase[i];
                testcase[i] = testcase[j];
                testcase[j] = c;
            }
        }
    }
    return testcase;
}