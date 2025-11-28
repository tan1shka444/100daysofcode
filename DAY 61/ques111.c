#include <stdio.h>

int main() {
    int n, k, i, j, found;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid");
        return 0;
    }
    for (i = 0; i <= n - k; i++) {
        found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) printf("0");
        if (i < n - k) printf(" ");
    }
    return 0;
}
