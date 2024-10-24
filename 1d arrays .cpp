//c arrays - 6
#include <stdio.h>
int main(int argc, char** argv)
{
	int z;
	int marks[5]={90,70,59,37,23};
	for(z=0;z<5;z++){
		printf("marks[%d]=%d\n",z,marks[z]);
	}
	return 0;
}