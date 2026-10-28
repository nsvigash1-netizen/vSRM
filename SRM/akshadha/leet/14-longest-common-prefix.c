char* longestCommonPrefix(char** strs, int strsSize) {
    char* common = malloc(256 * sizeof(char));
    common = strs[0];
    int idx;
    for (int i = 1; i < strsSize; i++) {
        idx = 0;
        while(common[idx]) {
            if (common[idx] == strs[i][idx]) {
                idx++;
            } else {
                common[idx] = '\0';
                idx = 0;
                break;
            }
        }
    }
    return common;    
}