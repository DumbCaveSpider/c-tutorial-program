/*
This program caluclate two numbers and output the sum

ICT159
Date: 2024/03/11
*/

/* This is where printf is located. This is important when creating a program */\
#include <stdio.h> 

// float a, b, c are float interger and stores them as variables
	float a; // First float number
	float b; // Second float number
	float c; // Result float number (when sum a + b)


// Create a module for computeSum that calculate two numbers from the module
int computeSum( float a2, float b2 ) {
	
	float c2; // Store the c2 as a result for the computeSum
	
	c2 = a2 + b2; // Compute c2 to a2 plus b2
	
	return c2; // Return the output of c2 into the computeSum
	
}


int main() {
	
	// 1. Read the first number from the user
	printf("Enter the first number: "); //printf the string saying for the user to enter the first number
	scanf("%f", &a); //scanf is opposite of printf and stores the user input to the float variables
	//%f is a placeholder for any value outside the string which is &a which is the value that will be replaced
	
	
	// 2. Read the second number from the user
	printf("Enter the second number: "); //printf the string saying for the user to enter the second number
	scanf("%f", &b); //scanf is opposite of printf and stores the user input to the float variables
	
	// 3. Sum the two variables from the user
	// c <- a + b
	c = computeSum(a, b); //computeSum two variables from the user input (uses the computeSum module created at the top
	
	// 4. Print out the output of the sum to the user
	printf("The result is %f\n", c); // Output the c variable which is the sum of both a and b
	printf("The sum for %f + %f is %f\n", a, b, c); // f% is the placeholder and replaces the %f with whatever the first variable in the line which is a then b then c
	
	// Exit program
	return 0;
	
	
}