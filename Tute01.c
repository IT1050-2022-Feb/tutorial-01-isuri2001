/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//standard input output header file

int main() {

  //variable declaration
  float mark1, mark2, avg;

  //Getting user inputs
  printf("Enter mark1 : ");
  scanf("%f", &mark1);

  printf("Enter mark2 : ");
  scanf("%f", &mark2);

  //calculating the average
  avg = (mark1 + mark2) / 2.0;

  //display the average
  printf("Average is %.2f", avg);

  
  return 0;
}

