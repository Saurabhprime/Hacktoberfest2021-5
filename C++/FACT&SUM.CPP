#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
printf("\n WELCOME TO DAV,MALIGHAT,MUZAFFARPUR ");
printf("\n =====================================");
printf("\n A PROJECT");
printf("\n\t IN");
printf("\n\t\t C-LANGUAGE");
printf("\n\t\t\t SUBMITTED");
printf("\n\t\t\t\t\t BY");
printf("\n\t\t\t\t\t\t SONU SHARMA");
printf("\n\t\t\t\t\t\t CLASS- X-F");
printf("\n\t\t\t\t\t\t SUBMITTED TO AMARJEET SIR");
printf("\n============================================================");
printf("\n\t\t PRESS ANY KEY TO CONTINUE->");
getch();

clrscr();

int num,fact=1;
clrscr();
printf("\nCALCULATION OF FACTORIAL");
printf("\n=========================");
printf("\nINPUT");
printf("\n-----");

printf("\nENTER A NUM TO FIND FACTORIAL=");
scanf("%d",&num);
while ( num>0)
{
fact=fact*num;
num--;
}
printf("\nOUTPUT");
printf("\n--------");
printf("\n THE FACTORIAL IS=%d",fact);
printf("\n===============================================================");
printf("\nPRESS ANY KEY TO CONTINUE->");
getch();
clrscr();
int num1, num2,sum;
printf("\n SUM OF TWO NUMBERS");
printf("\n==================");
printf("\n INPUT");
printf("\n-------");
printf("\n ENTER 1ST NUMBER=");
scanf("%d",&num1);
printf("\n ENTER 2ND NUMBER=");
scanf("%d",&num2);
sum= num1 + num2;
printf("\nOUTPUT");
printf("\n------");
printf("\n   THE SUM IS = %d", sum);
getch();
clrscr();
printf("\n================================================================");
printf("\n\t\t THANKS TO VISIT MY PROJECT");
printf("\n================================================================");
printf("\n\t\t\t\t MADE BY SONU SHARMA");
getch();
 }

