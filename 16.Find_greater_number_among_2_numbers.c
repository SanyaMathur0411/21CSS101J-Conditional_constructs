#include <stdio.h>
main() 
{
printf("RA2211042010042\n");
  int number1, number2;
  printf("Please enter the value of  number1 and number2: ");
  scanf("%d%d",& number1, & number2);
  if (number1 > number2) 
  {
    printf("%d is greater.", number1);
  }
  if (number2 > number1) 
  {
    printf("%d is greater.", number2 );
  }
  if (number1 == number2) 
  {
    printf("%d and %d are equal.", number1, number2);
  }
} 

