/*
This is a Tempurature program,
It will only display the sentence "Hello World"

ICT159
Date: 2024/03/18
*/

#include <stdio.h>

int main() {
	
	const float low_temp_threshold = 27;
	const float high_temp_threshold = 15;

	float temperature; // Make a float variable for tempurature
	
	// 1. Ask the user to enter the current room temperature
	printf("Enter the room tempurature: ");
	scanf("%f", &temperature ); // Scans the input float tempurature
	
	/* 2. Check if the tempurature is higher than 27 (tempurature > 27) 
	a. Display the text to turn on the heater
	*/
	if (temperature > high_temp_threshold) {
		printf("It is too hot, turn on the cooler.\n");
		printf("Thank you\n");
	} else {
	/* 3. Check if the tempurature is lower than 15 (tempurature < 15)
	a. Display the text to turn on the cooler
	*/
	if (temperature < low_temp_threshold) {
		printf("It is too cold, turn on the heater.\n");
		printf("Thank you\n");
	
	} else {
		// Print this output if neither is present
		printf("All good - keep it as it is\n"); 
	}
}
}

