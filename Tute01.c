/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//standard input output header

int main() {
  
  int s1,s2;//declaration of variable
  float avg = 0;//declaration variable

  printf("Enter Mark Of Subject 1: ");//prompt enter sub 1
  scanf("%d", &s1);//read number

  printf("Enter Mark of Subject 2 : ");//prompt enter sub 2
  scanf("%d", &s2);//read number

  avg = (s1 + s2)/2.0;//calculate the average

  printf("Average of 2 subject %.2f", avg);//Display average

  return 0;
  //End of main function
}

