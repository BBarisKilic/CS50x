//
// Created by Bülent Barış Kılıç on 06.11.24.
//
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
	int x = 1;
	int y = 2;
	printf("x is %i and y is %i\n", x, y);
	swap(&x, &y);
	printf("x is %i and y is %i\n", x, y);
	return 0;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}