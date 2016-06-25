#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	  {
	    if(n%i==0)
   	      flag=flag+1;
	  }
	if(flag==0)
	   printf("\nPrime number"0;
	else
	   printf("\nNot a Prime Number");
	return 0;
}
