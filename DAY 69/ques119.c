#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    int expected = (n - 1) * (n - 2) / 2;
    printf("%d", sum - expected);
    return 0;
}
