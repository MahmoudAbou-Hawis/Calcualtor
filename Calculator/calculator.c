#include "calculator.h"

float div(int num1 , int num2)
{
	float result = 0;
	if(num2 != 0){
		result = (float)num1 / num2;
	}
    return result;
}

int main () {
	int x = 10, y = 5;
	printf("%f\n",div(x,y));
	return 0;
}