#include<stdio.h>
void add(void);
int main()
{
int result;
add();
return 0;
}
void add(void)
{
int a,b,e;
printf("Enter Two Values");
scanf("%d%d",&a,&b);
e=a+b;
printf("Result is= %d",e);

}
