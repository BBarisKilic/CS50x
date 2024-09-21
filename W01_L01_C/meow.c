//
// Created by Bülent Barış Kılıç on 21.09.24.
//

#include <stdio.h>

void meow(int n);

int main(void)
{
	meow(30000);
	return 0;
}

void meow(int n)
{
	for (int i = 0; i < n; i++) {
		printf("meow\n");
	}
}