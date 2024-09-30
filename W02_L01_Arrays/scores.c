//
// Created by Bülent Barış Kılıç on 29.09.24.
//

#include <stdio.h>
#include "cs50.h"

float average(int length, int array[]);

int main(void)
{
	const int N = 3;
	int scores[N];
	for (int i = 0; i < N; i++) {
		scores[i] = get_int("Score: ");
	}

	printf("Average: %f\n", average(N, scores));

	return 0;
}

float average(int length, int array[])
{
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}
	return (float)sum / (float)length;
}
