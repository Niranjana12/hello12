#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("\nBefore sawap: %d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swap: %d%d",a,b);
	return 0;
}
