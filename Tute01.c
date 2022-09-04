/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
   double average=0.0;
   
   printf("Input Mark 1:");
   scanf("%d",&mark1);
   
   printf("Input Mark 2:");
   scanf("%d",&mark2);
   
   average = (mark1 + mark2)/2.0;
   
   printf("Aerage : %.2lf", average);
  return 0;
}

