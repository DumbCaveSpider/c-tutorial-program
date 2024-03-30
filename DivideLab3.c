/*
This program divides two float numbers and print the result

ICT159
Date: 2024/03/12
*/

// This is where printf is located. This is important when creating a program
#include <stdio.h> 

// Create a float variable
	float num1;
	float num2;
	float div;
	
// computeDivide function
	int computeDivide( float d1, float d2 ){
		
		float d3;
		d3 = d1 / d2;
		return d3;
		
	}
	
// Main function
	int main(){
		
		// 1. Read the users first number input
		printf("Enter First Number: ");
		scanf("%f", &num1);

		// 2. Read the users second number input
		printf("Enter Second Number: ");
		scanf("%f", &num2);
		
		// 3. computeDivide the two variables
		div = computeDivide(num1, num2); // computeDivide the two variables stored by the user
		
		// 4. Output the results
		printf("%f / %f = %f\n", num1, num2, div);
		printf("The result is: %f", div);
		return 0;
		
	}