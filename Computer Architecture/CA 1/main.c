#include<stdio.h>

int main()
{
  int number, Square,i;
  time_t t; //time_t is non primetivw dat type
  time(&t);

  printf("Please Enter any integer Value  :  ");
  scanf("%d", &number);

  Square = number * number;

  printf("\n Square of a given number %d is  =  %d \t\t Time is : %s", number, Square,ctime(&t));


 return 0;
}
