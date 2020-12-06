#include <stdio.h>
#include "myBank.c"


int main (){
  int quit=0;
  char input;
  do{
    printf("Please choose a transaction tybe ");
    printf("O - Open Account ");
    printf("B - Balance Inquiry");
    printf("D - Deposit ");
    printf("W - Withrawal"); 
    printf(" C - Close Account.\n I - Interest.\n P - Print \n E - Exit.\n");
    scanf(" %c",&input);
    float amount = 0;
    int num_account = 0;
      switch (input) {
        case 'O':
          printf("‫‪Please enter amount for deposit‬‬:‬‬");
          scanf("%f", &amount);
          O(amount);  
          break;
        case 'B':
          printf("Please enter account number :");
          scanf("%d", &num_account);
          B(num_account);
          break;
        case 'D':
          printf("Please enter account number :");
          scanf("%d", &num_account);
            printf("Please enter amount for deposit :");
          scanf("%f", &amount);
          D(num_account, amount);
          break;
        case 'W':
          printf("Please enter account number :");
          scanf("%d", &num_account);
          printf("Please enter amount for withdraw :");
          scanf("%f", &amount);
          W(num_account, amount);
          break;
        case 'C':
          printf("Please enter account number :");
          scanf("%d", &num_account);
          C(num_account);
          break;
        case 'I':
          printf("Interest rate?:");
          float interest_rate = 1;
          scanf("%f", &interest_rate);
          I(interest_rate);
          break;
        case 'P':
          P();
          break;
        case 'E':
          E();
          quit=1;
          printf("Bye Bye...\n");
          break;
        default:
          printf("Invalid input\n");
      }
}
while(!quit);
return 0;
}
