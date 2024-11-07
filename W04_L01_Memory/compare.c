//
// Created by Bülent Barış Kılıç on 21.10.24.
//

#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	string s = get_string("s: ");
	string t = get_string("t: ");

	printf("%p\n", s);
	printf("%p\n", t);

	if (s == t) {
		printf("Addresses are equal.\n");
	} else {
		printf("Addresses are different.\n");
	}

	if (strcmp(s, t) == 0) {
		printf("Values are equal.\n");
	} else {
		printf("Values are different.\n");
	}

	return 0;
}