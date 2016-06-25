#include<stdio.h>
int main()
{
	int n,i=0,a=0,b=1;
	printf("\nEnter a number");
	scanf("%d",&n);
	i=a+b;
	while(i<n)
	{
		printf("%d",i);
		a=b;
		b=i;
		i=a+b;
	}	
	return 0;
}
