int firstUniqChar(char* s) {
    int count[256] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (count[s[i]] == 1) {
            return i;
        }
    }
    
    return -1;
}
