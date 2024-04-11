/*
High Level Algorithm
1. Check if the user input a number
2. Then call the Factorial Function
3. Prints the result of the factorial

*/

#include <stdio.h>
#include "Factorial.h"

int main(){
	
	int F;
	int fact;
	
	printf("Enter a number to be factorial: ");
	scanf("%f", &F);
	
	fact = factorial(F);
	printf("Factorial Results: %d", fact);
	
}