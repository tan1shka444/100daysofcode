#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i = 0, isAnagram = 1;

    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
