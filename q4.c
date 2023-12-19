//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1

#include<stdio.h>

void main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=4;s>=i;s--){
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
