//
// Created by Bülent Barış Kılıç on 21.09.24.
//

#include <stdio.h>
#include "cs50.h"

int add(int a, int b);
float divide(int a, int b);

int main(void)
{
	int x = get_int("x: ");
	int y = get_int("y: ");

	printf("Sum: %i\n", add(x, y));
	printf("Division: %.3f\n", divide(x, y));

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

float divide(int a, int b)
{
	return (float)a / (float)b;
}