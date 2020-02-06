/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615, 
  Date: 1/28/2020
  Description of the program: Calculating a 401k
*/
#include<stdio.h>
#include<math.h>

int main(void) {
	
	double initialBalence;
	double monthlyCont;
	double rateOfReturn;
	double rateOfInfaltion;
	int    yearToRetirement;
	int    monthToRetirement;
	double interest;
	double interestRate;
	double monthlyInterestRate;
	double totalInterest; 
	double balence;
	double roundedInterest;
	double roundedBalence;
	double roundedTotalInterest;
	int i=1;
	
	
	printf("Enter initial starting balance:\n"); 
	scanf("%lf", &initialBalence);
	
	printf("Enter monthly contribution amount\n");
	scanf("%lf", &monthlyCont);
	
	printf("Enter annual rate of return\n");
	scanf("%lf", &rateOfReturn);

	printf("Enter annual rate of inflation\n");
	scanf("%lf", &rateOfInfaltion);
	
	printf("Enter number of years until retirement\n");
	scanf("%lf", &yearToRetirement);
	
	monthToRetirement= yearToRetirement*12 ;
	
	interestRate=((1+rateOfReturn)/(1+rateOfInfaltion))-1 ;
	
	monthlyInterestRate=interestRate/12 ;
	
	printf("Month    Interest     Balance");
	for(i=1; i<=monthToRetirement; i++ ) {
		interest=monthlyInterestRate*initialBalence;
		roundedInterest= round(interest*100)/100;
		
		balence=interest+monthlyCont+initialBalence; 
		roundedBalence= round(balence*100)/100;
		
		totalInterest = totalInterest + interest;
		roundedTotalInterest= round(totalInterest*100)/100;
		
		printf("%d %lf %lf\n", monthToRetirement, interest, balence);
	}
	printf("Total Interest Earned: $ %lf \n", totalInterest);
	printf("Total Nest Eggs: $ %lf ", balence);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	