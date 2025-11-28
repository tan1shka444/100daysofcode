#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int nums[n], answer[n];
    for (i = 0; i < n; i++) scanf("%d", &nums[i]);
    for (i = 0; i < n; i++) {
        int prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j) prod *= nums[j];
        }
        answer[i] = prod;
    }
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(" ");
    }
    return 0;
}
