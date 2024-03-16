#include<stdio.h>
int main()
{
int i,low=0,high,k=7,mid,n;
printf("Enter the array size");
scanf("%d",&n);
int a[n];
printf("Enter the array Element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
if(a[mid]>k){
high=mid-1;
}
else if(a[mid]==k){
printf("Element found");
break;
}
else{
low=mid+1;
}
if(low>high)
{
printf("Element not present");
}
}
return 0;
}

