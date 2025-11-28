#include <stdio.h>

int main() {
    int n, k, i, j, sum, maxSum;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid");
        return 0;
    }
    maxSum = -1000000;
    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) sum += arr[j];
        if (sum > maxSum) maxSum = sum;
    }
    printf("%d", maxSum);
    return 0;
}
