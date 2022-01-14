#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int frame[4][4] = {{0, 0, 0, 0},
				      {0, 1, 1, 0},
				      {1, 0, 0, 1},
				      {0, 1, 1,0}};
				      
    int count0 = 0;
    int count1 = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            
            if (frame[i][j] == 0) {
                count0++;
            } else if (frame[i][j] == 1) {
                count1++;
            }
            
        }
    }
    
    printf("Count Number 0 is %d\n", count0);
    printf("Count Number 1 is %d", count1);
    
    return 0;
}
