//C Stuctures
/*
Name:Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
#include <stdio.h>
#include <string.h>
//define the structure named'Employee'
struct Employee{
	char email[50];
	char name[25];
	char department[20];
	int id;
	float salary;
}employee1;
int main()
{
	strcpy(employee1.name,"John Doe");
	employee1.id=12345;
	strcpy(employee1.department,"Human Resource");
	employee1.salary=55000.50;
	strcpy(employee1.email,"john.doe@company.com");
	//print the values of the fields 
	printf("name:%s\n",employee1.name);
	printf("email:%s\n",employee1.email);
	printf("salary:%.2f\n",employee1.salary);
	printf("department:%s\n",employee1.department);
	return 0;
}