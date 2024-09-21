//
// Created by Bülent Barış Kılıç on 20.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	char response = get_char("Do you agree? ");

	if (response == 'y' || response == 'Y') {
		printf("Agreed.\n");
	} else if (response == 'n' || response == 'N') {
		printf("Not agreed.\n");
	} else {
		printf("Invalid response.\n");
	}

	return 0;
}
