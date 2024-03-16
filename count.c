#include <stdio.h>
int countDigits(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = countDigits(n);
    printf("The number of digits in %d is %d\n", n, result);
    return 0;
}
int countDigits(int n) {
    static int count = 0;
    if (n == 0) {
        return count;
    } else {
        count++;
        return countDigits(n / 10);
    }
}

