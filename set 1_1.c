#include<stdio.h>
#include<conio.h>
void main()
{
int s;
printf("enter the value of s");
scanf("%d",&s);
if(s>1)
{
printf("positive");
}
elseif(s==0)
{
printf("zero");
}
else(s<1)
{
printf("negative");
}
getch();
}
