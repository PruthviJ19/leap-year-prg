#include<stdio.h>
#include<conio.h>
main()
{
	int y;
	
	printf("enter a year:");/*give a year to be verified*/
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0)/*condition to check whether year is leap or not*/
	printf("its a leap year");/*if condition is true*/
	else
	printf("its not a leap year");/*if condition is wrong*/
	getch();
	
}
