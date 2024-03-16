#include <stdio.h>
long gcd(int n,int m) {
  
  if(m!=0){
  return gcd(m,n%m);
}
else{
return n;
}}
int main() {
    int n,m;
    printf("Enter two number: ");
    scanf("%d%d", &n,&m);
    int res=gcd(n,m);
    printf("result is %d",res);
    return 0;
}
