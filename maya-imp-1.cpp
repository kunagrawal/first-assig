#include<stdio.h>
int main()
{
int c,j;
printf("enter ur no.");
scanf("%d",&c);
	for(j=c;j>=1;j--)
	{
		printf("\n");
		for(int i=c;i>=j;i--)
		{
		   printf("%d",j);
		}
		
	}
	printf("\nEND");
	return 0;
}
