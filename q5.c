#include <stdio.h>
void printevennumbers( int arr[3][3]) {
    printf("Even numbers in the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //if (arr[i][j] % 2 == 0) {
                printf("%d ", arr[i][j]);
            //}
        }
    }
}
int main() {
int n,m;
//printf("enter row and column");
//scanf("%d%d",&n,&m);
    int arr[100][100];
    printf("Enter elements");
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
     scanf("%d",&arr[i][j]);
     }}
    printevennumbers(arr);
    return 0;
}
