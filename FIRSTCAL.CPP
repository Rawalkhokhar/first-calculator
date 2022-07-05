#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
char ch;
clrscr();
printf("enter first value :  ");
scanf("%f",&a);
printf("enter sign to do things : ");
scanf(" %c",&ch);
printf("enter second value : ");
scanf("%f",&b);
switch(ch)
{
case'+':c=a+b;
printf("SUM=%f",c);
break;
case'-':c=a-b;
printf("SUB=%f",c);
break;
case'*':c=a*b;
printf("MUL=%f",c);
break;
case'/':c=a/b;
printf("DIV=%f",c);
break;
defalut:
printf("invalid input");
break;
}
 getch();
 }
