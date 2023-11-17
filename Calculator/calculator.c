#include "calculator.h"

signed float sub(float num1 , float num2)
{
    return (num1-num2);
}

int mod(int num ,int md)
{
    return ((num%md)+md)%md;
}

float div(int num1 , int num2)
{
	float result = 0;
	if(num2 != 0){
		result = (float)num1 / num2;
	}
    return result;
}
