#include <stdio.h>
#include "OddHeader.h"

/*
oddFuction
> Input
- N (User input)
- i
> Algorithm
- Loop starts a i=1 and loops ends if i is greater or equal to N and add by 1
- Check if i % 2 is NOT equal to 0 then it's an odd
> Output
- Print all the odd numbers
*/
int oddFuction(int N){
	
	int i = 0;
	
	for(i=1; i<=N; i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
}

/*
oddSum
> Input
- N (User input)
- i
> Algorithm
- Loop starts a i=1 and loops ends if i is greater or equal to N and add by 1
- Check if i % 2 is NOT equal to 0 then add the sum.
> Output
- Print the sum of the odd number
- sum
*/
int oddSum(int N){
	
	int i = 0;
	int sum = 0;
	
	for(i=1; i<=N; i++){
		if(i%2 != 0){
			sum = sum + i;
		}
	}
	printf("Sum of odd number is: %d", sum);
	return 0;
}
