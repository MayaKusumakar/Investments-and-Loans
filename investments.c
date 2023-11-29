#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
// Program to tell the user wheather its better for him to pay the loan first or pay the minimum amounts of the loan while investing the money
bool isValidFormat(const int numArgsRead, const int numArgsNeed) {
      /*
    Checks if the input entered by the user is valid
    @numArgsRead : the number of arguments the computer has read
    @numArgs: the number of arguments the computer actuualy has to read
    @returns: True or false accordingly if the input is valid or not
    */
  bool formatIsGood = numArgsRead == numArgsNeed;
  char character;
  do{
    scanf("%c", &character); 
    		if(!isspace(character)){ 
			formatIsGood = false;
		}
	}while(character != '\n');
  return formatIsGood;
}

double getValidDouble(const char* prompt){
    /*
    checks if the value entered by the user is a double
    @prompt: Takes the prompt that has to be asked to the user as input
    */
  double num;
  const int numArgsNeeded = 1;
  int numArgsRead;
  do{
    printf("%s", prompt);
    numArgsRead = scanf(" %lf", &num);
  }
  while(!isValidFormat(numArgsRead, numArgsNeeded));

  return num;
}

int getValidInt(const char* prompt){
     /* checks if the value entered by the user is a integer 
    @prompt: Takes the prompt that has to be asked to the user as input
    */
  int num;
  const int numArgsNeeded = 1;
  int numArgsRead;
  do{
    printf("%s", prompt);
    numArgsRead = scanf(" %d", &num); // waffles 45\n
  }while(!isValidFormat(numArgsRead, numArgsNeeded));

  return num;
}
 
  double payLoanFirst(int numOfMonths, double loans, double monthInt,double monEachMonth, double monthReturn){
    /* 
    checks the value of the invested if the minimum payments are made while the money is being invested at the same time
      @numOfMonths :  the input of the number of months between the users current age and users retirement age 
    @loans :is the amount the user has to pay in loans
    @monthInt :is the interest the user has to pay for his loan monthly 
     @monEachMonth :is the amount of money the user has after every month to either pay his loan or invest
    @monthReturn :is the percent the investment increases by each month 
@returns the total amount of money invested if the minimum amounts of the loan are being paid at the same time the money is being invested 

    */
    double investMoney =0.0;
  
   for(int i = 1;i <= numOfMonths;i++){
       loans = loans + (loans*monthInt);
       investMoney = investMoney + (investMoney*monthReturn);
       if(loans>monEachMonth){
           loans = loans - monEachMonth;
       }else if(loans>0){
            investMoney = monEachMonth - loans;
           loans = 0.0;
        }
        else{
            investMoney = investMoney + monEachMonth;
        }
        
   }
   if(loans>0){
       investMoney -= loans;
   }
   return investMoney;
  }
  
  
 
 double minAmountPaid(int numOfMonths, double loans, double monthReturn, double monthInt, double moneyToInv,double monEachMonth,double minPayLoan){
    /*
     checks the amount of money invested if the loan is paid first
    @prompt: Takes the prompt that has to be asked to the user as input
     @numOfMonths is the input of the number of months between the users current age and users retirement age 
    @loans is the amount the user has to pay in loans
    @monthInt is the interest the user has to pay for his loan monthly 
    @monEachMonth is the amount of money the user has after every month to either pay his loan or invest
    @monthReturn is the percent the investment increases by each month 
   @moneyToInv is the amount of money the user has to invest each month
@minPayLoan the minimum amount the user has to pay monthly for loan
@returns the amount of money invested if the loan is paid first
    */
     double investMoney=0.0;
    
    
     for(int i = 1;i <= numOfMonths;i++){
       loans = loans + (loans*monthInt);
       investMoney =  investMoney + (investMoney*monthReturn);
      
       if(loans>minPayLoan){
           loans = loans - minPayLoan;
           investMoney = investMoney + (moneyToInv);
           
       }else if (loans > 0){
           investMoney += monEachMonth - loans;
           loans = 0;
       }
       else{
           investMoney += monEachMonth;
       }
     }
     if(loans>0){
         investMoney -= loans;
         
     }
   //  investMoney = investMoney - loans;
     
       return investMoney;
}




    int main() {
    // Write C code here
    /*
        gets the input from the user and checks the validity, then it compares the values of the money invested if the loan is paid first and the value of the invested money if the minimum payments of the loan are being made at the same time the money is being invested 

        */
    double loans=0.0;
    double annualInt=0.0;
    double minPayLoan=0.0;
    double monEachMonth=0.0;
    int age=0;
    int retAge=0;
    double annualReturn=0.0;
    int numOfMonths=0;
    double monthInt=0.0;
    double monthReturn=0.0;
     double moneyToInv=0.0;
     while(loans<=0){
   do{
   loans=getValidDouble("Enter how much you owe in loans: ");
   }
   while(loans < 0);
    
   do{
   annualInt=getValidDouble("Enter the annual interest rate of the loans: ");
   }
   while(annualInt < 0);
  
     
   do{
   minPayLoan=getValidDouble("Enter your minimum monthly loan payment: ");
   }
   while(minPayLoan < 0);
   
   do{
   monEachMonth=getValidDouble("Enter how much money you will be putting towards loans/retirement each month:");
   }
   while(monEachMonth<minPayLoan );
   double c=monEachMonth;
   
  
   do{
   age=getValidInt("Enter your current age:");
   }
   while(age < 0);
   
   
   do{
   retAge=getValidInt("Enter the age you plan to retire at:");
   }
   while(retAge < age);
   
 
   
   do{
   annualReturn=getValidDouble("Enter your predicted annual rate of return:");}
   while(annualReturn <0);
   
   
   numOfMonths = (retAge - age)*12;
   monthInt = annualInt/12;
   monthReturn = annualReturn/12;
   moneyToInv = monEachMonth - minPayLoan;
  
 //printf("%.2lf \n",payLoanFirst( numOfMonths,  loans, monthInt, monEachMonth, monthReturn));
//printf("%.2lf \n",minAmountPaid(numOfMonths,loans,monthReturn, monthInt, moneyToInv, monEachMonth, minPayLoan));
 double minFirst = minAmountPaid(numOfMonths,loans,monthReturn, monthInt, moneyToInv, monEachMonth, minPayLoan);
 
 int b = payLoanFirst( numOfMonths,  loans, monthInt, monEachMonth, monthReturn);
 //printf("%d \n", b);
// printf("%.2lf \n", minFirst);
int a = minFirst;
//printf("%d \n", a);
//printf("%.2lf", c);
if(a>b){
   printf("You should only make the minimum payments on your loan and apply the rest towards retirement.\n");
 printf("If you do you will have $%.2lf when you retire as opposed to $%.2lf if you paid off your loan before investing.",minFirst,payLoanFirst( numOfMonths,  loans, monthInt, monEachMonth, monthReturn));
}
else{
   printf("You should apply all $%.2lf towards your loan before making any investments.\n", c);
    
     printf("If you do you will have $%.2lf when you retire as opposed to $%.2lf if you only made minimum payments.",payLoanFirst( numOfMonths,  loans, monthInt, monEachMonth, monthReturn),minFirst);
}

   
  /* if(payLoanFirst(numOfMonths, monthInt, monthReturn,  monEachMonth, loans)>minAmountPaid(numOfMonths, loans, monthReturn, monthInt, moneyToInv, monEachMonth,minPayLoan)){
       printf("You should apply all $%.2lf towards your loan before making any investments.",monEachMonth);
     printf("If you do you will have $%.2lf when you retire as opposed to $%.2lf if you only made minimum payments.",payLoanFirst(numOfMonths, monthInt, monthReturn,  monEachMonth, loans),minAmountFirst);
}
 else{
      printf("You should only make the minimum payments on your loan and apply the rest towards retirement.\n");
 printf("If you do you will have $%.2lf when you retire as opposed to $%.2lf if you paid off your loan before investing.",minAmountFirst,payLoanFirst(numOfMonths, monthInt, monthReturn,  monEachMonth, loans));
 }
     
 
   double investMoney =0.0;
   double temp;
   int ctr = 0;
   for(int i = 1;i <= numOfMonths;i++){
       loans = loans + (loans*monthInt);
       ctr++;
       if(loans>monEachMonth){
           
           loans = loans - monEachMonth;
       }
           else{
               investMoney = monEachMonth - loans;
               loans = 0.0;
              break;
            }
}

for(int i = 1;i <= numOfMonths-ctr;i++){
   investMoney =  investMoney + (investMoney*monthReturn);
   investMoney = investMoney + monEachMonth;
}
*/ 





    return 0;
     }}
