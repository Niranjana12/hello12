#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\nEnter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
       printf("\n%d is greatest",a);
    else if(b>a&&b>c)
       printf("\n%d is greatest",b);
    else
       printf("\n%d is greatest",c);
}
