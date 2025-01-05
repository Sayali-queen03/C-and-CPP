#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double Number,squareRoot;
Number=49;
clrscr();
squareRoot=sqrt(Number);
printf("The square root of %.2lf=%.2lf",Number,squareRoot);
getch();
return 0;
}