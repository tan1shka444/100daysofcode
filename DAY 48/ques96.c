#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start = 0, end = 0, len;
    char temp;

    printf("Enter a sentence: ");
    gets(str);

    len = strlen(str);

    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0') {
            int left = start;
            int right = end - 1;

            while (left < right) {
                temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = end + 1;
        }
        end++;
    }

    printf("Sentence after reversing each word: %s\n", str);
    return 0;
}
