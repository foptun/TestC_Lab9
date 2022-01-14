#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int x = 0;
    
    printf("Enter size of matrix (n x n) : ");
    scanf("%d", &n);
 
 
    int matrix[n][n];
    
    
    printf("Enter a matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &(matrix[i][j]) );   
        }
    }
    
    printf("\nEnter a scalar: ");
    scanf("%d", &x);
    
    printf("\nResult: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", (x * matrix[i][j]) );
        }
        printf("\n");
    }
    
    return 0;
}
