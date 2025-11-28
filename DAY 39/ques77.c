 #include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check for distinct diagonal elements
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    
    if(flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    
    return 0;
}
