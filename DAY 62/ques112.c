#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int maxSum = arr[0], currSum = arr[0];
    for (i = 1; i < n; i++) {
        if (currSum < 0)
            currSum = arr[i];
        else
            currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
    }
    printf("%d", maxSum);
    return 0;
}
