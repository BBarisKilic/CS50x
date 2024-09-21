//
// Created by Bülent Barış Kılıç on 21.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	// Prompts user for size of bricks.
	int size;
	do {
		size = get_int("Size: ");
	} while (size < 1);

	// Prints out the bricks.
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("#");
		}
		printf("\n");
	}
}