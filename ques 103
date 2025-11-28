#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int total = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
