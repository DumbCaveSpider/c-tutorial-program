/* 
High level algorithm 

1. aud_amount Get the amount in AUD that we want to exhange to EUR
2. float rate1 = 0.65;
rate1 <- read from the 1st rate

3. float rate2  0.63;
rate2 <- read from the 2nd rate

4. float fees1 = 0.02;
fees1 <- read from the 1st rate

5. float fees2 = 0.023;
fees2 <- read from the 2nd rate

6. float eu_amount1 = convertAU2EUR(au_amount, rate1, fees1);
7. float eu_amount2 = convertAU2EUR(au_amount, rate2, fees2);
8. if (eu_amount1 > eu_amount2){
	display("Bank 1 is better");
} else {
	display("Bank 2 is better");

**************
Module convertAU2EUR
> Input
- float ammount; // the amount to exchange
- float rate; // exchange rate
- float fees; // commission

> Output
- float eu_amount;

> Algorithm
1. float eu_amount
2. eu_amount =  (amount - amount * fees) * rate;
3. return eu_amount;
*/

#include <stdio.h>
#include "rate.c"

/*
// Module convertCurrency
float convertCurrency( float amount, float rate, float fees ){
	// Input
	float amount2;
	// Algorithm
	amount2 =  (amount - amount * fees) * rate;
	// Output
	return amount2;
	
}
*/

/*
// selectBank function
void selectBank( float amount1, float amount2 ){
	// Check if Bank 1 is better otherwise print that Bank 2 is better
	if (amount1 > amount2){
		printf("Bank 1 is better (%f)", amount1);
	} else {
		printf("Bank 2 is better (%f)", amount2);
	}
	return;
}
*/

/*
void selectBankV2( float amount1, float amount2 ){
	// Check if Bank 1 is better otherwise print that Bank 2 is better
	if (amount1 > amount2){
		return 1;
	} else {
		return 2;
	}
	return;
}
*/

int main() {
	
// aud_amount Get the amount in AUD that we want to exhange to EUR
	float au_amount;
	// Get the rate of the convertion
	float rate1 = 0.65;
	float rate2 = 0.63;
	// Get the fees comission of the convertion
	float fees1 = 0.02;
	float fees2 = 0.023;
	
	// Enter the input of the user's amount
	printf("Enter the amount to convert: ");
	scanf("%f", &au_amount);
	
	// Calculate between two eu to au convertion to two banks
	float eu_amount1 = convertCurrency(au_amount, rate1, fees1);
	float eu_amount2 = convertCurrency(au_amount, rate2, fees2);
	
	// return to print selectBank void
	selectBank(eu_amount1, eu_amount2);
}

