/*
This program computes the sum of three numbers and reports the results

ICT159
Date: 2024/03/12
*/

// This is where printf is located. This is important when creating a program
#include <stdio.h> 

// Create a float variable
	float num1;
	float num2;
	float num3;
	float sum;

// computeSum Function
	int computeSum( float sum1, float sum2, float sum3 ){
		
		float sumresult; // Store the result for computeSum
		sumresult = sum1 + sum2 + sum3;
		return sumresult; // Return the sumresult to the main
		
	}

// Main function for the calculation
	int main(){
		
		// 1. Read the users first number input
		printf("Enter First Number: ");
		scanf("%f", &num1); // & symbol stores the input to the variable, just like a pointer

		// 2. Read the users second number input
		printf("Enter Second Number: ");
		scanf("%f", &num2);
		
		// 3. Read the users third number input
		printf("Enter Third Number: ");
		scanf("%f", &num3);
		
		// 4. computeSum the three variables
		sum = computeSum(num1, num2, num3); // computeSum the three variables stored by the user
		
		// 5. Print out the result
		printf("%f + %f + %f = %f\n", num1, num2, num3, sum); // Show the four variables into the printf
		printf("The result is %f", sum);
		
		// Exit Program
		return 0;
	}