#include<stdio.h>
int main()
{
int a,i,n;
printf("print size of arry");
scanf("%d",&a);
printf("enter number to search in array");
scanf("%d",&n);
int arr[a];
for(i=0;i<a;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<a;i++){
if(arr[i]==n){
printf("yes %d is present in array and its position is %d",n,i+1);
}}
return 0;
}
 
