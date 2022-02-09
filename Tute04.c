/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>//standard input output header file

//function prototype
int minimum(int n1, int n2);
int maximum(int n1, int n2);
int multiply(int n1, int n2);

int main() 
{
  //variable declaration
  int no1, no2;
  
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);

  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);

  printf("%d\n", minimum(no1, no2)); //function calling and display the answer
  printf("%d\n", maximum(no1, no2));
  printf("%d\n", multiply(no1, no2));
  
  return 0;
}

//function implementation
int minimum(int n1, int n2)
{
  if(n1 < n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }

  
}

//function implementation
int maximum(int n1, int n2)
{
  if(n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }
}

//function implementation
int multiply(int n1, int n2)
{
  return n1 * n2;
}


