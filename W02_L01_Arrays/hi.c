//
// Created by Bülent Barış Kılıç on 30.09.24.
//

#include <stdio.h>
#include "cs50.h"

int main(void)
{
	string words[2];

	words[0] = "HI!";
	words[1] = "BYE!";

	printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
	printf("%s\n", words[1]);

	return 0;
}