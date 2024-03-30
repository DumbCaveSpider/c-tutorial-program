/*
main
secondary
header

High Level Algorithm
1. Input the first value by the user
2. value1 = max
3. Input second value
4. value2 = min
5. Input third value
6. value3 = average
7. Output the value of the following
	- Max out of the three value
	- Min out of the three value
	- Avg out of the three value
	- Diff max & min
	- Diff max & avg
	- absolute value of min

*/
#include <stdio.h>
#include "MathModule.h"

int main(){
	
	//1. Input the first value by the user
	int a, b, c, Max, Min, Avg, MaxMin, MaxAvg, AbsV;
	
	//2. Store the value by the user
	printf("Enter no.1 value: ");
	scanf("%i", &a);
	printf("Enter no.2 value: ");
	scanf("%i", &b);
	printf("Enter no.3 value: ");
	scanf("%i", &c);
	
	//3. compute max number
	Max = computeMax(a, b, c);
	printf("Max: %i\n", Max);
	
	//4. compute min number
	Min = computeMin(a, b, c);
	printf("Min: %i\n", Min);
	
	//5. compute avg number
	Avg = computeAvg(a, b, c);
	printf("Avg: %i\n", Avg);
	
	//6. compute diff max & min number
	MaxMin = computeDiffMaxMin(Max, Min);
	printf("MaxMin: %i\n", MaxMin);
	
	//7. compute diff max & avg number
	MaxAvg = computeDiffMaxAvg(Max, Avg);
	printf("MaxAvg: %i\n", MaxAvg);
	
	//8. compute diff max & avg number
	AbsV = computeAbsolute(Min);
	printf("Abs: %i\n", AbsV);
	
}



