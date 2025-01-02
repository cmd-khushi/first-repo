int mostWordsFound(char** sentences, int sentencesSize) {
    int maxWords = 0;

    for (int i = 0; i < sentencesSize; i++) {
        int wordCount = 1;
        char* sentence = sentences[i];

        for (int j = 0; sentence[j] != '\0'; j++) {
            if (sentence[j] == ' ') {
                wordCount++;
            }
        }

        if (wordCount > maxWords) {
            maxWords = wordCount;
        }
    }

    return maxWords;
}
