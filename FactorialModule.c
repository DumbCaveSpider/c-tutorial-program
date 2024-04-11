#include "Factorial.h"

int factorial(int F){
	
	int i = 0;
	int fact = 0;
	
	for (i=0; i<=F; i++){
		fact = fact * i;
	}
	return fact;
}