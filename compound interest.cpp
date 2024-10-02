#include <stdio.h>
#include <math.h>
int main()
{
	float principle,rate,time,amount,compoundinterest;
	//prompt the user to enter principle
	printf("enter principle:");
	scanf("%f",&principle);
	//prompt the user to enter rate 
	printf("enter rate:");
	scanf("%f",&rate);
	//prompt the user to enter time
	printf("enter time:");
	scanf("%f",&time);
	
	//calculate amount
	amount=principle*pow((1+rate/100),time);
	compoundinterest=amount-principle;
	printf("total amount after %.2f years:%2.f\n", time,amount);
	printf("compound interest:%.2f\n", compoundinterest);
	
	
	return 0;
}