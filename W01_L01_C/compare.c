//
// Created by Bülent Barış Kılıç on 20.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	int x = get_int("x: ");
	int y = get_int("y: ");

	if (x < y) {
		printf("x is less than y\n");
	} else if (x > y) {
		printf("x is greater than y\n");
	} else {
		printf("x is equal to y\n");
	}

	return 0;
}