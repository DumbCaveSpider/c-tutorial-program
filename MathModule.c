// secondary
#include "MathModule.h"

//The maximum of the three
int computeMax(int a, int b, int c){
/*
function computeMax
> Input
	- Value1
	- Value2
	- Value3
> Algorithm
	- if (a > b && a > c){
		MaxNum = a;
	- if (a > c){
			MaxNum = c;
	- if (b > c){
				MaxNum = b;
	- MaxNum = c;
> Output
	- int MaxNum
*/
	
	int MaxNum;
	
	if (a > b){
		MaxNum = a;
	} else {
		if (a > c){
			MaxNum = c;
		} else {
			if (b > c){
				MaxNum = b;
			} else {
				MaxNum = c;
			}
		}
	}
		
	
	return MaxNum;
	
}
//The minimum of the three
int computeMin(int a, int b, int c){
/*
function computeMin
> Input
	- Value1
	- Value2
	- Value3
> Algorithm
	- if (a <= b && a <= c){
		MinNum = a;
	- if (b >= c && b <= a){
			MinNum = b;
	- MinNum = c;
> Output
	- int MaxNum
*/
	int MinNum;
	
	if (a <= b && a <= c){
		MinNum = a;
	} else {
		if (b <= c && b <= a){
			MinNum = b;
			} else {
				MinNum = c;
			}
		}
		
	
	return MinNum;
	
}
//The average of the three
int computeAvg(int a, int b, int c){
/*
function DiffMaxMin
> Input
	- Max value
	- Min value
> Algorithm
	- MaxMin = Max - Min
> Output
	- int MaxMin
*/
	
	int AvgNum;
	
	AvgNum = (a + b + c) / 3;

	return AvgNum;
	
}

//The difference between the maximum number and the minimum number
int computeDiffMaxMin(int Max, int Min){
	
	int MaxMin;
	
	MaxMin = Max - Min;
	return MaxMin;
	
}

//The difference between the maximum number and the average number
int computeDiffMaxAvg(int Max, int Avg){
/*
function DiffMaxAvg
> Input
	- Max value
	- Avg Value
> Algorithm
	- MaxAvg = Max - Avg
> Output
	- int MaxAvg
*/
	
	int MaxAvg;
	
	MaxAvg = Max - Avg;
	return MaxAvg;
	
}
//The absolute value of the minimum number.
int computeAbsolute(int Min){
/*
function absoulteValue
> Input
	- Min Value
> Algorithm
	- if (Min >= 0)
		return;
	otherwise absMin = -(Min)
> Output
	- int absMin
*/
	
	int Absolute;
	
	if (Min >= 0){
		Absolute = Min;
	} else {
		if (Min < 0){
			Absolute = -Min;
		} else {
			Absolute = Min;
		}
	}
	
	return Absolute;
	
}

