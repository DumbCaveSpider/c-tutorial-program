/*
High level Algorithm
1. While the n is greater than 0, ask the user to input the iteration
2. Store the iteration
3. Start the loop at 1 and loops until it reaches the amount of itteration and add the interger by 1 on each loop.
	3a. Inside the loop, print the first fibonacci iteration
	3b. Add the first and second term together to the next term interger
	3c. Change the first term from the second term
	3d. Change the second term to the next term (which was added from the previous first and second term)
	3e. Loop back to 3a until it reaches to amount of iteration set by the user.
4. Return the function
*/

#include <stdio.h>
#include "Fibonacci.h"

int main() {
	
  int fib, n;
  
  printf("Enter a Iteration number: ");
  scanf("%d", &n);
  
  if (n < 0){
	  printf("Invaild Number");
  } else {
  Fibonacci(n);
  }
}


  
