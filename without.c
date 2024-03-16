#include<stdio.h>
void add(int a,int b);
int main()
{
int a,b;
printf("Enter Two Values");
scanf("%d%d",&a,&b);
add(a,b);
return 0;
}
void add(int a,int b)
{
int e;
e=a+b;
printf("Result is = %d",e);
}
