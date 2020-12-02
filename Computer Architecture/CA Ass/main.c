#include<stdio.h>

int main()
{
  int number, Square,i;
  time_t t; //time_t is non primetivw dat type
  time(&t);
  FILE * fp;

  //open file
  fp = fopen("Square.txt","w"); // w- write mode

  printf("\t \t \t Square Root\n \n");

  fprintf(fp,"\t \t \t Square Root\n \n");

  for(i=0;i<10;i++)
 {

  printf("(%d)  Please Enter any integer Value  :  ",i+1);
  scanf("%d", &number);

  Square = number * number;

  printf("\n Square of a given number %d is  =  %d \t\t Time is : %s", number, Square,ctime(&t));


  fprintf(fp,"\n Square of a given number %d is  =  %d \t Time is : %s", number, Square,ctime(&t));

  }

  fclose(fp);

  return 0;
}
