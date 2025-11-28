#include <stdio.h>

int main() {
    int n, k, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    
    k = k % n; // handle k > n
    
    // Rotate right using reversal method
    int temp;
    
    // Step 1: Reverse whole array
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    // Step 2: Reverse first k elements
    for(i = 0; i < k / 2; i++) {
        temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }
    
    // Step 3: Reverse remaining n-k elements
    for(i = k; i < (n + k) / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i + k - 1];
        arr[n - i + k - 1] = temp;
    }
    
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
