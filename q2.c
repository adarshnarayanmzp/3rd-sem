#include <stdio.h>
void printEvenElements(int *arr, int rows, int cols) {
    int i, j;
    printf("Even elements in the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (*(arr + i * cols + j) % 2 == 0) { 
                printf("%d ", *(arr + i * cols + j));
            }
        }
    }
    printf("\n");
}
int main() {
    int arr[3][3];
    int i, j;  
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printEvenElements((int *)arr, 3, 3);
    return 0;
}

