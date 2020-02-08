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
	double interest2;
	double balence2;
	int i;


	printf("Enter initial starting balance:\n");
	scanf("%lf", &initialBalence);

	printf("Enter monthly contribution amount\n");
	scanf("%lf", &monthlyCont);

	printf("Enter annual rate of return\n");
	scanf("%lf", &rateOfReturn);

	printf("Enter annual rate of inflation\n");
	scanf("%lf", &rateOfInfaltion);

	printf("Enter number of years until retirement\n");
	scanf("%d", &yearToRetirement);

	monthToRetirement= yearToRetirement*12 ;

	interestRate=((1+rateOfReturn)/(1+rateOfInfaltion))-1 ;

	monthlyInterestRate=interestRate/12 ;

	interest=initialBalence;
	balence=monthlyCont+initialBalence;
	interest2 = interest;
	balence2 = balence;

	if(monthlyCont>=18500){
		printf("Illegal: monthly contributions exceed $18,500 annual limit.");
		return 0;
	}
		if(initialBalence<0){
			printf("Illegal: illegal input");
			return 0;
		}
	printf("Month    Interest     Balance\n");
	for(i=1; i<=monthToRetirement; i++ ) {
		interest2 = interest2;
		interest2=interest2*monthlyInterestRate;

		roundedInterest= round(interest2*100)/100;

		balence2 = interest2 + balence2;
		roundedBalence= round(balence2*100)/100;

		totalInterest = totalInterest + interest2;
		roundedTotalInterest= round(totalInterest*100)/100;

		printf("%d %.2f %.2f\n", i, roundedInterest, roundedBalence);
	}
	printf("Total Interest Earned: $ %.2f \n", totalInterest);
	printf("Total Nest Eggs: $ %.2f ", balence2);

	return 0;
}
