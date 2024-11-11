/*
Author:Arnold
Reg No:CT101/G/23808/24
*/
#include <stdio.h>
int main()
{
	int book_id;
	int due_date;
	int return_date;
	int fine_rate;
	int fine_amount;
	int over_due_date;
	//prompt the user to enter book id
	printf("enter book_id:");
	scanf("%d",&book_id);
	//prompt the user to enter due date
	printf("enter due_date:");
	scanf("%d",&due_date);
	//prompt the user to enter return date
	printf("enter return_date:");
	scanf("%d",&return_date);
	//calculate the over due date
	over_due_date=return_date-due_date;
	if(over_due_date<=7){
		fine_rate=20;
		fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount);
	}
	else if(over_due_date<=15){
		fine_rate=50;
		fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount);
	}
	else{
		fine_rate=100;
		fine_amount=fine_rate*over_due_date;
		printf("the fine_amount is:%.2d",fine_amount);
	}
	printf("the book_id is:%d%\n",book_id);
	printf("the due_date is:%d\n",due_date);
	printf("the return_date is:%d\n",return_date);
	printf("the fine_rate is:%d\n",fine_rate);
	printf("the fine_amount is:%d\n",fine_amount);
	printf("the over_due_date is:%d\n",over_due_date);
	return 0;
