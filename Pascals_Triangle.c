#include<stdio.h>


int main(int argc, char const *argv[])
{
	int z,c;

	printf("Enter the number of rows: \n");
	scanf("%d",&z);


	for (int i = 1; i <= z; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i == 0 || j == 0)
				c = 1;
			else 
				c = c*(i-j+1)/j;

			printf("%d ",c );
		}
		printf("\n");
	}
	
	return 0;
}
