#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0, start = 0, i, j, flag;

    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = start; j < i; j++) {
            if (s[j] == s[i]) {
                start = j + 1;
                flag = 1;
                break;
            }
        }
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);
    return 0;
}
