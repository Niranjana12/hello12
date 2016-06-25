#include<stdio.h>
int main()
{
	int n;
	int flag=0;
	printf("\nEnter a number");
	scanf("%d",&n);
	if(n==1)
 	printf("Neither prime nor composite"); 
	for(i=2;i<=n-1;i++)
	  {
	    if(n%i==0)
   	      flag=flag+1;
	  }
	if(flag==0)
	   printf("\nPrime number");
	else
	   printf("\nNot a Prime Number");
	return 0;
}
