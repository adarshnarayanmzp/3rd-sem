#include<stdio.h>
int add(int *a,int *b);
int main()
{
int result,a,b;
printf("Enter Two Value");
scanf("%d%d",&a,&b);
result=add(&a,&b);
return 0;
}
int add(int *a,int *b)
{
int e=0,f=0,g=1;
e=*a+*b;
f=*a-*b;
g=*a**b;
return *e;
return *f;
return *g;
}



