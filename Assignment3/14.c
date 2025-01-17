 //Write a program to add the elements of each row and each column of a matrix. 
#include <stdio.h> 
int main() {
    int r, c, i, j; 
    printf("Enter the number of rows and columns: "); 
    scanf("%d %d", &r, &c); 
 
    int mat[r][c]; 
    printf("Enter the elements of the matrix:\n"); 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            scanf("%d", &mat[i][j]); 
        } 
    } 
    for (i = 0; i < r; i++) { 
        int rowSum = 0; 
        for (j = 0; j < c; j++) { 
            rowSum += mat[i][j]; 
        } 
        printf("Sum of row %d: %d\n", i + 1, rowSum); 
    } 
    for (j = 0; j < c; j++) { 
        int colSum = 0; 
        for (i = 0; i < r; i++) { 
            colSum += mat[i][j]; 
        } 
        printf("Sum of column %d: %d\n", j + 1, colSum); 
    } 
    return 0; 
}
