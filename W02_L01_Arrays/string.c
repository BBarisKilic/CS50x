//
// Created by Bülent Barış Kılıç on 30.09.24.
//

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
	string s = get_string("Input: ");
	printf("Output: ");
	for (int i = 0, n = strlen(s); i < n; i++) {
		printf("%c", s[i]);
	}
	printf("\n");
}