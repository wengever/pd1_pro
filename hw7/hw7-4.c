char ans[51];
char* getAnswer1(char testcase[51]){
    int cnt[51];
    for(int i = 0; i < 51; i++){
        cnt[i] = 0;
    }
    for(int i = 0; i < 50; i++){
        if(testcase[i] == 'a' && testcase[i+1] == 'a'){
            cnt[i] = -1;
            cnt[i+1] = -1;
        }
    }
    int idx = 0;
    for(int i = 0; i < 51; i++){
        if(testcase[i] == '\0'){
            break;
        }
        else{
            if(cnt[i] != -1){
                ans[idx++] = testcase[i];
            }
        }
    }
    ans[idx] = '\0';
    return ans;
}