#include<stdio.h>
int main()
{
int x;
scanf("%d",x);

switch(x)
{
case1:
{ printf("Food item:- Pizza"); printf("\nPrice:- Rs239"); break;}
case2:
{ printf("Food item:- Pasta"); printf("\nPrice:- Rs179"); break;}
case3:
{ printf("Food item:- Sandwich"); printf("\nPrice:- Rs149"); break;}
case4:
{ printf("Food item:- Burger"); printf("\nPrice:- Rs129"); break;}
case5:
{ printf("Food item:- French Fries"); printf("\nPrice:- Rs99"); break;}
default: printf("choose between 1 to 5");
}
return 0

