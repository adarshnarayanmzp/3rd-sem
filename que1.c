#include <stdio.h>//do using typedef
struct stud
{
char name[50];
int roll,marks;
};
int main()
{
int i,n,max=0;
struct stud s[n];
printf("Enter no. of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter student %d name, roll no., and marks: ",i+1);
scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);
if(max<s[i].marks)
max=s[i].marks;
}
printf("Max=%d",max);
return 0;
}
