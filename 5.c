#include<stdio.h>
int checkpalindrome(int num)
{
  int temp, rem, rev=0;
  temp = num;
  while( num!=0 )
  {
     rem = num % 10;
     rev = rev*10 + rem;
     num /= 10;
  }
  if ( rev == temp ){
   printf(" it is a pallindrom");
}
  else  {
  printf("not a pallindrom");
  }
}
int main()
{
int n,res;
scanf("%d",&n);
res=checkpalindrome(n);
printf("%d",res);
return 0;
}

