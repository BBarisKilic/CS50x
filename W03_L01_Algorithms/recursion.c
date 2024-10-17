//
// Created by Bülent Barış Kılıç on 17.10.24.
//

#include "cs50.h"
#include <stdio.h>

void draw(int n);

int main(void)
{
	int height = get_int("Height: ");
	draw(height);
	return 0;
}

void draw(int n) // NOLINT
{
	if (n <= 0) {
		return;
	}

	draw(n - 1);

	for (int i = 0; i < n + 1; i++) {
		printf("#");
	}
	printf("\n");
}