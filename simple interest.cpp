#include<stdio.h>

int main()
{	
	float principle,time,rate;
	//prompt the user to enter princilpe
	printf("enter principle:");
	scanf("%f",&principle);
	//prompt the user to enter time
	printf("enter time:");
	scanf("%f",&time);
	//prompt the user to enter rate
	printf("enter rate:");
	scanf("%f",&rate);
	//calculate simple interest
	float interest=principle*rate/100*time;
	printf("the  interest is:%f", interest);
	return 0;
}