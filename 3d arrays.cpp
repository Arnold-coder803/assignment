/*
Name:Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
#include <stdio.h>
int main()
{
	int t,y,u;
	int marks[2][3][2]={
	{
	{40,55},
	{90,44},
	{39,30}
	},
	{
	{78,88},
	{67,70},
	{34,60}
	}		
	};
	for(t=0;t<2;t++){
		for(y=0;y<3;y++){
			for(u=0;u<2;u++){
				printf("marks[%d][%d][%d]=%d\n",t,y,u,marks[t][y][u]);
			}
		}
	}
	return 0;
}
