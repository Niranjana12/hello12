#include<stdio.h>
int main()
{
  int y;
  printf("Enter a year");
  scanf("%d",&y);
  if(y%4==0)
  {
     if(y%100==0)
      {
        if(y%400==0)
           printf("\nLeap year");
        else
           printf("\nNot a Leap Year");
      }
      else
         printf("\nLeap Year");
   }
  else
     printf("\nNot a Leap Year");
  return 0;
}
