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
	printf("1 - Monday\n");
	printf("2 - Tuesday\n");
	printf("3 - Wednesday\n");
	printf("4 - Thursday\n");
	printf("5 - Friday\n");
	printf("6 - Saturday\n");
	printf("7 - Sunday\n");
	
}
int main() {
	
	// Display the options
	displayOptions();
	
	// Scan the user inpit
	int user_input;
	scanf("%i", &user_input);
	
// 2. Process the selected options from the user using switch

	switch(user_input) {
		case 1:
			printf("Today is Monday\n");
			break;
		case 2:
			printf("Today is Tuesday\n");
			break;
		case 3:
			printf("Today is Wednesday\n");
			break;
		case 4:
			printf("Today is Thursday\n");
			break;
		case 5:
			printf("Today is Friday\n");
			break;
		case 6:
			printf("Today is Saturday\n");
			break;
		case 7:
			printf("Today is Sunday\n");
			break;
		default:
			printf("Invaild User Input");
		
	}


/*
// This is if else statement, same as the top function

	// Monday
		if(user_input == 1){
			printf("Today is Monday\n");
		} else {
	// Tuesday
		if(user_input == 2){
			printf("Today is Tuesday\n");
		} else {
	// Wednesday
		if(user_input == 3){
			printf("Today is Wednesday\n");
		} else {
	// Thursday
		if(user_input == 4){
			printf("Today is Thursday\n");
		} else {
	// Friday
		if(user_input == 5){
			printf("Today is Friday\n");
		} else {
	// Saturday
		if(user_input == 6){
			printf("Today is Saturday\n");
		} else {
	// Sunday
		if(user_input == 7){
			printf("Today is Sunday\n");
		} else {
			printf("Invaild User Input");
		}
	}
}
		}
	}
}
*/
	return 0;
}
