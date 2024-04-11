/*
High Level Algorithm
1. User enter a positive number of the user
2. Check if the number is a positive interger number N>0
	- If the number is a negative then display an error message and exit
3. Then display every number that is odd on a loop which starts from 0 and end the loop if the number is greater or equal to N

function oddLoop(){
	
	> Intput
	- i // (i is for the digit used for the loop)
	- N // (N is the amount of times it will loop)
	> Algorithm
	for(i=1; i<=N; i++){
	i starts a 1 and stops if the i is greater or equal to N and increase by 1
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
}

*/
#include <stdio.h>
#include "OddHeader.h"

int main(){
	
	int N;
	
	printf("Enter a interger number: ");
	scanf("%d", &N);
	
	oddFuction(N);
	oddSum(N);
	
}