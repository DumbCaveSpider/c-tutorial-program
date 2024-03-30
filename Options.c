/*
This is a Tempurature program,
It will only display the sentence "Hello World"

ICT159
Date: 2024/03/18
*/

#include <stdio.h>

// 1. Make an options if user press the selected character
int displayOptions() {
	
	printf("Enter the following options: \n");
	printf("A - Tempurature\n");
	printf("B - Rainfall\n");
	printf("C - Humidity\n");
	
}
int main() {
	
	// Display the options
	displayOptions();
	
	// Scan the user inpit
	char user_input;
	scanf("%c", &user_input);
	
// 2. Process the selected options from the user using switch

	switch(user_input) {
		case 'A':
		case 'a':
			printf("The user selected Tempurature\n");
			break;
		case 'B':
		case 'b':
			printf("The user selected Rainfall\n");
			break;
		case 'C':
		case 'c':
			printf("The user selected Humidity\n");
			break;
		default:
			printf("Invaild User Input");
		
	}
/* 

This is if else statement, same as the top function

	// a. If the user selected Tempurature if user press A
		if( (user_input == 'a') || (user_input == 'A') ){
			printf("The user selected Tempurature\n");
		} else {
	// b. If the user selected Rainfallif user press B
		if( (user_input == 'b') || (user_input == 'B') ){
			printf("The user selected Rainfall\n");
		} else {
	// c. If the user selected Humidity if user press C
		if( (user_input == 'c') || (user_input == 'C') ){
			printf("The user selected Humidity\n");
		} else {
			printf("Invaild User Input");
		}
	}
}
*/
	
	return 0;
}

