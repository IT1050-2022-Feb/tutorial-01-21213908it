/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//standard input output header
int main() {
  
  int n, i, sum = 0, value;//declaring variable

  printf("Enter  No of Number : ");//prompt enter no of numbers
  scanf("%d", &n);//read no

  for(i = 1; i <= n; i++ )//for loop
  {
    sum += i;

  }
  printf("Sum of Number :  %d", sum);//print sum of number



  return 0;//end of main function
}

