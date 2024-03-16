#include<stdio.h>
int main()
{
int n,i;
printf("enter the array size");
scanf("%d",&n);
int ar1[n],ar2[n];
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&ar1[i]);
}
printf("enter the array element in 2nd array");
for(i=0;i<n;i++){
scanf("%d",&ar2[i]);
}
for(i=0;i<n;i++)
{
ar1[i]=ar1[i]+ar2[i];
ar2[i]=ar1[i]-ar2[i];
ar1[i]=ar1[i]-ar2[i];
}
for(i=0;i<n;i++)
{
printf("array 1 is %d \t ",ar1[i]);
printf("array 2 is %d \t",ar2[i]);
}
return 0;
}
