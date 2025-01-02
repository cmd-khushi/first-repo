#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* word) {
    int left = 0;
    int right = strlen(word) - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return "";
}
