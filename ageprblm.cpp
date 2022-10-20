#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age:");
	scanf("%d, &a");
	
	if(a>18)
	{
		printf("You are Adult");	
	}
	else
	{
		printf("You are not an Adult");
	}
	
	return 0;

}
