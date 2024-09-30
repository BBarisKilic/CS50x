//
// Created by Bülent Barış Kılıç on 30.09.24.
//

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
	string name = get_string("Name: ");
	unsigned int length = strlen(name);
	printf("%i\n", length);
	return 0;
}
