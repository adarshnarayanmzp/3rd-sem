#include<stdio.h>
int digit(int a)
{
int n,m,s=0;
while(a!=0)
{
n=a%10;
a=a/10;
s+=n;
}
return s;
}
int main()
{
int b,res;
scanf("%d",&b);
res=digit(b);
printf("%d",res);
return 0;
}
