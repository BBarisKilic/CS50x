//
// Created by Bülent Barış Kılıç on 30.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[])
{
	for (int i = 0; i < argc; i++) {
		if (i == 1) {
			printf("hello, %s\n", argv[i]);
		} else {
			printf("%s\n", argv[i]);
		}
	}
	return 0;
}