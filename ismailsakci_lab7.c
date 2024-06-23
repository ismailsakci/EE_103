
#include <stdio.h>
#include <ctype.h>
#include <string.h>

    void countWords(char sentence[]) {
        int words = 0;
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] == ' ' || sentence[i] == '\n') {
                words++;
            }
        }
        printf("Number of words the sentence: %d\n", words);
    }

    void countVowelsAndConsonants(char sentence[]) {
        int vowels = 0, consonants = 0;
        for (int i = 0; sentence[i] != '\0'; i++) {
            char character = tolower(sentence[i]);
            if (isalpha(character)) {
                if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        printf("Number of vowels in the sentence: %d\n", vowels);
        printf("Number of consonants the sentence: %d\n", consonants);
    }

    int main() {
        char sentence[100];
        printf("Please enter a sentence: \n");
        fgets(sentence, sizeof(sentence), stdin);
        countWords(sentence);
        countVowelsAndConsonants(sentence);

        return 0;
    }



















