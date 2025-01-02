#include <stdbool.h>
#include <ctype.h>

bool checkIfPangram(char* sentence) {
    bool letters[26] = { false };
    int index = 0;

    while (sentence[index] != '\0') {
        if (isalpha(sentence[index])) {
            letters[tolower(sentence[index]) - 'a'] = true;
        }
        index++;
    }

    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            return false;
        }
    }
    return true;
}
