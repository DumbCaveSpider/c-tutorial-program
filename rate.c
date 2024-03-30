#include <stdio.h>
float convertCurrency( float amount, float rate, float fees ){
	// Input
	float amount2;
	// Algorithm
	amount2 =  (amount - amount * fees) * rate;
	// Output
	return amount2;
}
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