/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>//standard input output header

int main() {
  
  float amount,distance;//declaration variable

  printf("Enter the ditance van has travalled : ");//prompt enter distance
  scanf("%f", &distance);//read distance

  if(distance < 30)
  {
    amount = distance * 50;//calculate amount
  } 
  else
  {
    amount = distance * 50 + (50 - 30) * 40;//calculate amount
  }
  printf("Full amount of travel : %.2f", amount);//print full amount

  
  return 0;//End of main function
}
