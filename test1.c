#include<stdio.h>
float ratio(int a, int b,int c);
float  diff(int x,int y);
int main()
{
int a,b,c;
printf("Enter the values ");
scanf("%d%d%d",&a,&b,&c);
float r=ratio(a,b,c);
printf("Result =%f",r);
return 0;
}
float ratio( int a,int b,int c){
if(diff(b,c)!=0){
float z=a/diff(b,c);
return z;
}
else{
return 0;
}
}
float diff( int x,int y){
float d=x-y;
return d;
}
