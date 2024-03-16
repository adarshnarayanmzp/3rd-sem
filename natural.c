#include <stdio.h>
long sum(int n) {
  int res=0;
  if(n!=0){
  return (n+sum(n-1));
}
else{
return n;
}}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("sum of %d is %ld", n, sum(n));
    return 0;
}
