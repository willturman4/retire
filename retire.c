/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615, 
  Date: 1/28/2020
  Description of the program: Calculating a 401k
*/
#include<stdio.h>
#include<math.h>

int main(void) {
	
	double intitalBalence;
	double montlyCont;
	double rateOfReturn;
	double rateOfInfaltion;
	double yearToRetirement;
	float monthToRetirement;
	float interest;
	float inflation;
	
	printf("Enter intial starting balance:\n"); 
	scanf("%lf", &intialBalence);
	
	printf('Enter monthly contribution amount\n);
	scanf("%lf", &monthlyCont);
	
	printf("Enter annual rate of return\n");
	scanf("%lf", &rateOfReturn);

	printf("Enter annual rate of inflation\n");
	scanf("%lf", &rateOfInfaltion);
	
	printf("Enter number of years until retirement\n");
	scanf("%lf", &yearToRetirement);
	
	monthToRetirement= yearToRetirement/12 ;
	interest= intialBalence*rateOfReturn ;
	inflation=((1+rateOfReturn)/(1+rateOfInfaltion))-1 ;
	
	
	
	
	