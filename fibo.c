#include <stdio.h>
int main()
{
	 int i, n, t1 = 0, t2 = 1,a=0;
	 printf("Enter the number of terms: ");
         scanf("%d",&n);
         printf("Fibonacci Series: %d, %d, ", t1, t2);
         for (i=3;i<=n;++i)
              {
                a=t1+t2;
                t1=t2;
                t2=a;
                printf("%d",a);
             }
         return 0;
}
