#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int i;
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);

    int newSentence = 1;
    for (i = 0; i < n; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            newSentence = 1;
    }
    printf("%s", str);
    return 0;
}
