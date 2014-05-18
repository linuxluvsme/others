//8 queen problem
#include <stdio.h>

int main()
{
	int queen[8][8]={0};
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
			printf("%d ",queen[i][j]);
		printf("\n");
	}
			
	
}
