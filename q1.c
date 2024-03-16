#include <stdio.h>
int main() {
    int arr[100];
    int n, i, sum = 0;
    float average;
    printf("Enter the number of elements (up to %d): ", 100);
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for (i = 0; i < n; i++) {
        sum += *(arr + i); 
    }  
    average = (float)sum / n;     
    printf("The average is: %.2f\n", average);
    return 0;
}

