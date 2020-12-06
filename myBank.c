#include <stdio.h>
#include "myBank.h"
#define accountnumbe 50
#define range 901
float accounts [2][accountnumbe] ={0};

void O(float mony)
{
    int flag = 0;
    if (mony < 0)
    {
        printf("Invalid Amount");
        flag = 1;
        return;
    }
    for (int i = 0; i < accountnumbe; i++)
    {
        if (flag == 0 && accounts[0][i] == 0)
        {
            int x=i+range;        
            printf("New account number is: %d ",x);
            accounts[1][i] = mony;
            accounts[0][i] = 1;
            flag = 1;
            return;
        }
    }
    if (flag == 0)
        printf("Failed to read tht amount ");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void B(int account_number)
{
    int flag = 0;
    if (account_number-range<0 || account_number>accountnumbe-1-range)
    {
        flag = 1;
        printf("Failed to read the account number");
        return;
    }
    if (accounts[0][account_number] == 0 && flag==0) {
        printf("This account is closed ");
        flag = 1;
        return;
    }
    if (flag == 0)
    {
        float mony = accounts[1][account_number - range];
        printf("The balance of account number %d is: %f ", account_number, mony);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void D(int account_number, float mony)
{

    int flag = 0;
    if (mony < 0)
    {
        printf("Cannot deposit a negative amount");
        return;
    }
    if (account_number - range<0 || account_number>accountnumbe - 1 - range)
    {
        printf("Invalid account number \n");
        return;
    }
    if (accounts[0][account_number] == 0)
    {
        flag = 1;
        printf("this account is Closed \n");
        return;
    }
    if (mony < 0)
    {
        printf("Invalid Amount \n");
        return;
    }
    if (flag == 0)
    {
        accounts[1][account_number - range] =  accounts[1][account_number - range]+mony;
        float mony = accounts[1][account_number - range];
        printf("the new balance is: %lf ", mony);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  W(int account_number, float mony)
{
    int flag = 0;
    if (mony < 0)
    {
        printf("Cannot withdrawl a negative amount");
        return;
    }
    if (account_number - range<0 || account_number>accountnumbe - 1 - range)
    {
        printf("Invalid account number \n");
        return;
    }
    if (accounts[0][account_number] == 0)
    {
        flag = 1;
        printf("this account is Closed \n");
        return;
    }
    if (accounts[1][account_number - range] - mony < 0)
    {
        printf(" Cannot withdraw more than the balance");
        return;
    }
    if (flag == 0)
    {
        accounts[1][account_number - range] = accounts[1][account_number - range] - mony;
        float mony = accounts[1][account_number - range];
        printf("the new balance is: %lf \n", mony);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void C(int account_number){
    int flag=0;
    if (account_number - range<0 || account_number>accountnumbe - 1 - range)
    {
        printf("Invalid account number \n");
        return;
    }
    if (accounts[0][account_number] == 0)
    {
        flag = 1;
        printf("this account is Closed \n");
        return;
    }
    if (flag==0){
      accounts[1][account_number-range] = 0;
      accounts[0][account_number-range] = 0;
      return;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void I(float x)
{
    int i;
    for (i = 0; i < accountnumbe; i++)
    {
        if (accounts[0][i] == 1)
        {
            float x = accounts[1][i]+(accounts[1][i] * x);
            accounts[1][i]=x;
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void P(){
  int i;
  int flag = 0;
  for (i = 0;i<accountnumbe;i++)
  {
    if (accounts[0][i]==1){
      flag =1;
      int mm=i + range;
      printf("the balance of account number: %d  is : %lf ", mm, accounts[1][i]);
    }
  }
  if(flag==0){
      printf("The bank is empty");
  }
  return;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void E(){
  int i;
  for (i = 0;i<accountnumbe;i++){
    if (accounts[0][i]==1){
      accounts[0][i]=0;
      accounts[1][i]=0;
    }
  }
}
