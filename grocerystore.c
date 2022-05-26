#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 int dayOfWeek = 1;
 const char appleLocation = 'F';

  appleQuantity = 23;
  appleReview = (823 + 52) / (9 + 1);
  appleReviewDisplay = appleReview;
  dayOfWeek += 4;

 if(appleQuantity < 10 || dayOfWeek == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 // Printing all the required values
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}