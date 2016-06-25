#include<stdio.h>
int main()
{  
	int a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	t=a[0];
	for(i=0;i<10;i++)
		{
		  if(a[i]>t)
		      t=a[i];
		}
	printf("\nThe greatest number is %d",a[i]);
	return 0;
}
