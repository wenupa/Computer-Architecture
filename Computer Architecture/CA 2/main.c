#include<stdio.h>

int main()
{
  int number, Square,i;
  time_t t; //time_t is non primetivw dat type
  time(&t);

  for(i=0;i<10;i++)

 {

  printf("(%d)  Please Enter any integer Value  : ",i+1);
  scanf("%d", &number);

  Square = number * number;

  printf("\n Square of a given number %d is  =  %d \t\t Time is : %s \n", number, Square,ctime(&t));

 }


  return 0;
}
