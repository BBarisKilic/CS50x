//
// Created by Bülent Barış Kılıç on 19.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	string username = get_string("What's your name? ");
	printf("Hello %s\n", username);
	return 0;
}
