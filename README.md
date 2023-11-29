# Investments-and-Loans
## Problem
For this problem you will be figuring out if it is more beneficial to pay off your loans first before investing or if you should only make the minimum payments and invest the rest.

## Specifications
Interest rates are given as annual rates (which is how they are normally given) but we will be compounding interest at the beginning of each month (which is also how it is normally done). You will want to use the monthly rates in your calculations
Interest is applied to both your loans and your investments at the start of the month. It should be the very first thing you do each month
If after retirement, the user still has loans they will pay them all of from their savings.
This could lead to them having negative savings in retirement which is fine for this problem and would show that the strategy attempted is a bad one
Assumptions
## Input will NOT always be valid

If invalid input is entered you should continually ask the user for input until valid input is entered.
While input may not always be valid it will always be of the correct type.
Ex. If the user should enter an integer they will enter an integer only and won't enter a string or float
Valid Input
Loans: A real number greater than or equal to 0
Loan Annual Interest Rate: A real number greater than or equal to 0
5% would be entered as 0.05
Loan Minimum Payment: A real number greater than or equal to 0
Monthly Money: A real number greater than or equal to the minimum loan payment
This is the money you have each month to split between loans and investing
Current Age: An integer greater than or equal to 0
Retirement Age: An integer greater than or equal to your current age
Investment Annual Returns: A real number greater than or equal to 0
5% would be entered as 0.05
## Requirements
You must use have at least 4 functions in your program
## Restrictions
No global variables may be used
Loans and Investments Walk through

# Examples

## Example 1
Enter how much you owe in loans: 40000

Enter the annual interest rate of the loans: 0.03

Enter your minimum monthly loan payment: 405.32

Enter how much money you will be putting towards loans/retirement each month: 500

Enter your current age: 22

Enter the age you plan to retire at: 65

Enter your predicted annual rate of return: 0.05

You should only make the minimum payments on your loan and apply the rest towards retirement.

If you do you will have $592888.96 when you retire as opposed to $587281.54 if you paid off your loan before investing.

## Example 2
Enter how much you owe in loans: 50000

Enter the annual interest rate of the loans: 0.06

Enter your minimum monthly loan payment: 350

Enter how much money you will be putting towards loans/retirement each month: 1053

Enter your current age: 25

Enter the age you plan to retire at: 70

Enter your predicted annual rate of return: 0.05

You should apply all $1053.00 towards your loan before making any investments.

If you do you will have $1651149.44 when you retire as opposed to $1619732.68 if you only made minimum payments.

## Example 3
In this example, the user will still have $7961.19 in loans when they retire when using the minimum payment strategy.

Enter how much you owe in loans: 10000

Enter the annual interest rate of the loans: 0.02

Enter your minimum monthly loan payment: 100

Enter how much money you will be putting towards loans/retirement each month: 500

Enter your current age: 18

Enter the age you plan to retire at: 20

Enter your predicted annual rate of return: 0.07

You should only make the minimum payments on your loan and apply the rest towards retirement.

If you do you will have $2311.22 when you retire as opposed to $1835.38 if you paid off your loan before investing.

## Example 4
Enter how much you owe in loans: -5

Enter how much you owe in loans: 1000

Enter the annual interest rate of the loans: -3

Enter the annual interest rate of the loans: 0.02

Enter your minimum monthly loan payment: -89

Enter your minimum monthly loan payment: 50

Enter how much money you will be putting towards loans/retirement each month: 5

Enter how much money you will be putting towards loans/retirement each month: 3

Enter how much money you will be putting towards loans/retirement each month: 100

Enter your current age: -8

Enter your current age: 50

Enter the age you plan to retire at: 35

Enter the age you plan to retire at: -8

Enter the age you plan to retire at: 60

Enter your predicted annual rate of return: -14

Enter your predicted annual rate of return: 0.07

You should only make the minimum payments on your loan and apply the rest towards retirement.

If you do you will have $15384.97 when you retire as opposed to $15344.34 if you paid off your loan before investing.
