/*
Name :Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
//program to print electricity bill
#include <stdio.h>
int main()
{
	float chargeperunit,totalbill,surcharge=0.0;
	char customer_name[15];
	int customer_id;
	int unit_consumed;
	
	//prompt the user to enter customer id
	printf("enter customer_id:");
	scanf("%d",&customer_id);
	
	//prompt the user to enter customer name
	printf("enter customer_name:");
	scanf("%s",&customer_name);
	
	//prompt the user to enter unit consumed
	printf("enter unit_consumed:");
	scanf("%d",&unit_consumed);
	
	//calculate the bill based on usage
	
	if(unit_consumed<=199) (chargeperunit=1.20);
	else if(unit_consumed >=200 &&unit_consumed<400) (chargeperunit =1.50);
	else if(unit_consumed >=400 &&unit_consumed<600) (chargeperunit =1.80);
	else(chargeperunit =2.00);
	
	//formula of calculating totalbill
     totalbill= unit_consumed*chargeperunit;
     if(totalbill >400) (surcharge=totalbill*0.15);
     if(totalbill<100) (totalbill=100);
     else(totalbill+=surcharge);
     //display the calculated bill
     printf("the customer_id is:%d\n",customer_id);
     printf("the customer_name is:%s\n",customer_name);
     printf("the unit_consumed is:%d\n",unit_consumed);
     printf("the chargeperunit is:%.2f ksh\n",chargeperunit);
     printf("totalbill:%.2f ksh\n",totalbill);
 
	return 0;
}
