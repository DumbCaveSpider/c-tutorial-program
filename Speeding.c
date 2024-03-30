/* Algorithm for Speeding
1. Check the current speed
2. Check if the speed is over 60km/hr
	a. If the speed is under 60km/hr or more than 0, then print not Speeding
	b. Else print speed is not acceptable
3. Print Speeding
4. Check if the speeding is 61-65 inclusive than print Warning
5. Else Check if the speeding is 66-70 inclusive than print Fine $80
6. Else check if the speeding is 71-80 inclusive than print Fine $150
7. Else check if the speeding is 81 or more than print Fine $500
8. The end
*/

#include <stdio.h>

int main() {
	
	int speed;
	const int limit = 60;

	
	// Tell the user how fast they are going
	printf("Enter your current Speed: ");
	scanf("%i", &speed);
	// Check if speed is not negative and the speed is under 60km/hr
	if (speed >= 0 && speed <= limit) {
		printf("Not Speeding.");
	} else {
	// If the speed is exceed over 60 km/hr
		if (speed > limit && speed <= limit + 5) {
			printf("Speeding!\n");
			printf("Warning");
		} else { 
		// Else Check if the speeding is 66-70 inclusive than print Fine $80
			if (speed >= limit + 5 && speed <= limit + 10) {
				printf("Speeding!\n");
				printf("Fine $80");
			} else {
				// Else check if the speeding is 71-80 inclusive than print Fine $150
				if (speed >= limit + 10 && speed <= limit + 20) {
					printf("Speeding!\n");
					printf("Fine $150");
				} else {
					// Else check if the speeding is 81 or more than print Fine $500
					if (speed >= limit + 20) {
						printf("Speeding!\n");
						printf("Fine $500");
						// 
					} else {
						printf("Speed is not acceptable");
					}
				}
			}
		}
	}
	return(0);
}
