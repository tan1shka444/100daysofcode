#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq1[26] = {0}, freq2[26] = {0}, i;
    scanf("%s", s);
    scanf("%s", t);
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }
    for (i = 0; s[i]; i++) {
        freq1[s[i] - 'a']++;
        freq2[t[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
