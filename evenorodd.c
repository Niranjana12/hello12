#include<stdio.h>
#include<conio.h>
int main()
{
  int no;
  printf("Enter a number");
  scanf("%d",&no);
  if(no%2==0)
    printf("\nEven Number");
  else
    printf("\nOdd Number");
  return 0;
}
