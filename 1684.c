bool is_consistent(const char *word, const bool *allowed_chars) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!allowed_chars[word[i] - 'a']) {
            return false;
        }
    }
    return true;
}

int countConsistentStrings(char *allowed, char **words, int wordsSize) {
    bool allowed_chars[26] = { false };
    
    for (int i = 0; allowed[i] != '\0'; i++) {
        allowed_chars[allowed[i] - 'a'] = true;
    }
    
    int count = 0;
    for (int i = 0; i < wordsSize; i++) {
        if (is_consistent(words[i], allowed_chars)) {
            count++;
        }
    }
    
    return count;
}
