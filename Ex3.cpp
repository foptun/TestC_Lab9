#include <stdio.h>
#include <stdlib.h>

int main() {

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sumAll = 0;
    
    int arr[12][3];
    
    for (int i = 0; i < 12; i++) {
        printf("Input of month %d: ", (i + 1));
        for (int j = 0; j < 3; j++) {
            scanf("%d", &(arr[i][j]) );
        }
    }
    
    printf("\nResult: \n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("%d ", arr[i][j] );
            
            if (j == 0) {
                sum1 = sum1 + arr[i][j];
            }
            
            if (j == 1) {
                sum2 = sum2 + arr[i][j];
            }
            
            if (j == 2) {
                sum3 = sum3 + arr[i][j];
            }
        }
        // printf("\n");
    }
    
    printf("\nSum of branch 1: %d", sum1);
    printf("\nSum of branch 2: %d", sum2);
    printf("\nSum of branch 3: %d", sum3);
    
    sumAll = sum1 + sum2 + sum3;
    
    printf("\n\nSum All : %d", sumAll);
    
    return 0;
}
