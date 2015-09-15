#include<stdio.h>
int main()
{
int c,j;
printf("enter ur no.");
scanf("%d",&c);
	for(j=10;j>=0;j--)
	{
		printf("\n");
		for(int i=10;i>=j;i--)
		{
		   printf("%d",c);
		}
		c--;
	}
	printf("\nEND");
	return 0;
}
