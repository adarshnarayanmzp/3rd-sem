#include <stdio.h>
int findLargestElement(int *arr, int size) {
    int max = *arr;
    int i;
    for (i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}
int main() {
    int arr[100];
    int size, i, largest;
    printf("Enter the size of the array (up to %d): ", 100);
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }
    largest = findLargestElement(arr, size);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

