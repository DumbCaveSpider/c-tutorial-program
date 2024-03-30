#include <stdio.h>

// Divides one by other using integer division
int computeDivide( int div1, int div2 ){
		
	int divresult; // Store the result for computeSum
		divresult = div1 / div2;
	return divresult; // Return the sumresult to the main
		
	}

// Divdes one by other using integer modulus operator
int computeMod( int mod1, int mod2 ){
		
	int modresult; // Store the result for computeSum
		modresult = mod1 % mod2;
	return modresult; // Return the sumresult to the main
		
	}

int main() {
	
	// Read Two Integer numbers
	int a;
	int b;
	int result; // Store the integer division in a variable
	int mod; // Store the modular division in a variable
	
	// Scan the user input
	printf("Enter First Number: ");
	scanf("%i", &a);

	printf("Enter Second Number: ");
	scanf("%i", &b);
	
// Check if the second number is not zero (perform 0 by 0)
	if (b != 0) {
	// Calculate the numbers
		result = computeDivide(a, b); // Calculate the division and store the results
		mod = computeMod(a, b); // Calculate the division and store the remainder of the division
	// Print the output
		printf("%i / %i = %i\n", a, b, result);
	} else {
		if (mod != 0) {
	// Calculate the numbers
		result = computeDivide(a, b); // Calculate the division and store the results
		mod = computeMod(a, b); // Calculate the division and store the remainder of the division
	// Print the output
		printf("%i / %i = %i\n", a, b, result);
		printf("The remainder is %i", mod);
	} else {
		printf("Division by 0 is not mathematically possible");
}
	}
	}