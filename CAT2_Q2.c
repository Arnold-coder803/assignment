//C 2D Arrays 
/* 
Name:Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
#include <stdio.h>
int main(int argc, char** argv)
{
	// declare and initialize a 2x2 matrix of 2x2 arrays (scores)
	int scores[2][2][2]={
	{{79,82},{84,77}},
	{{36,66},{44,88}}
	};
	// print the elements of the scores array using nested loops
	printf("the elements of the scores array are:\n");
	
	for(int w=0;w<2;w++){
		for(int x=0;x<2;x++){
			printf("[%d%d]",scores[w][x][0],scores[w][x][1]);
		}
		printf("\n");//newline in each row
	}
	return 0;
}