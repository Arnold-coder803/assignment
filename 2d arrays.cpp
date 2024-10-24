/*
Name: Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
#include <stdio.h>
int main()
{
	int i,x;
	int marks [2][3]={
	{57,90,38},
	{28,34,67}
	};
	for (i=0;i<2;i++){
		for(x=0;x<3;x++){
			printf("marks[%d][%d]=%d\n",i,x,marks[i][x]);
		}
	}
	return 0;
}