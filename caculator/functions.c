#include "functions.h"

float func_plus(float x, float y)
{
	return x + y;
}

float func_substract(float x, float y)
{
	return x - y;
}

float func_multiply(float x, float y)
{
	return x * y;
}

float func_devide(float x, float y)
{
	if (y == 0)
	{
		return -1;
	}
	return x / y;
}

float func_power(float x)
{
	return pow(x, 2);
}

float func_my_sqrt(float x)
{
	return sqrt(x);
}

