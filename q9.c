//A
//B 1 
//C 2 D
//E 3 F 4
//G 5 H 6 I
#include<stdio.h>

void main()
{
	int i,j,k=1;
	char ch='a';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d ",k);
				k++;
			}
			else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
