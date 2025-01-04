#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
int a,b,s;
clrscr();
printf("Enter two integers:");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("Sum=%d",s);
getch();
return 0;
}
int sum(int x,int y)
{
return(x+y);
}