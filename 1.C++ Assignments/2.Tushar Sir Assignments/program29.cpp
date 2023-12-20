#include <iostream>
#include <cstring>
#include <cctype>

// Function to find the number of occurrences of a given character in the string
int CountOccurrences(const char* str, char target) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count;
}

// Function to find the number of blank spaces in the string
int CountBlankSpaces(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    return count;
}

// Function to find the number of words in the string
int CountWords(const char* str) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (std::isalpha(str[i])) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to find the total number of all the vowels in the string
int CountVowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = std::tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];
    char targetChar;

    std::cout << "Enter a string: ";
    std::cin.getline(inputString, MAX_LENGTH);

    std::cout << "Enter a character to count its occurrences: ";
    std::cin >> targetChar;

    int charOccurrences = CountOccurrences(inputString, targetChar);
    int blankSpaces = CountBlankSpaces(inputString);
    int wordCount = CountWords(inputString);
    int vowelCount = CountVowels(inputString);

    std::cout << "Number of occurrences of '" << targetChar << "': " << charOccurrences << std::endl;
    std::cout << "Number of blank spaces: " << blankSpaces << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;
    std::cout << "Total number of vowels: " << vowelCount << std::endl;

    return 0;
}
