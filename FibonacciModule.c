#include <stdio.h>
#include "Fibonacci.h"

int Fibonacci(int n){
	
  int t1 = 0; // first term of the fibonacci
  int t2 = 1; // first term of the fibonacci
  int next = 0; // set the next number to be zero
  int i;
	for (i=0; i<=n; i++){ // loop the fibonacci until it reaches to the amount of iteration
	printf("Fibonacci for N=%d, is: %d \n", i, next);
	t1 = t2; // change t1 to equal to t2
	t2 = next; // now make t2 is now the next number of the fibonacci
	next = t1 + t2; // adding the first two terms and sum it as the next number
	}
	return 0;
}