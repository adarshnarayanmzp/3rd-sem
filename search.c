#include<stdio.h>
int main()
{
printf("Enter Array Size");
int b,c;
scanf("%d",&b);
int a[b];
printf("Enter an element to search in array");
scanf("%d",&c);
printf("Enter array Elements");
for(int i=0;i<b;i++){
scanf("%d",&a[i]);
}
for( int i=0;i<b;i++)
{
if(a[i]==c){
printf("yes we found this element in our Array %d and its position is %d",c,i+1);
}
}
return 0;
}


