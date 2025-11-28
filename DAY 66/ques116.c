#include <stdio.h>

int main() {
    int n, target, i, j, found = 0;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) printf("-1 -1");
    return 0;
}
