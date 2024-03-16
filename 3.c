#include<stdio.h>
int main()
{
int a,i;
printf("Enter size of array");
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<a;i+=2){
int temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
for(i=0;i<a;i++){
printf("%d\t",arr[i]);
}
return 0;
}

