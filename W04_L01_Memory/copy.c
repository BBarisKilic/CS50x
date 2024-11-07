//
// Created by Bülent Barış Kılıç on 21.10.24.
//

#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char *s = get_string("s: ");
	if (s == NULL) {
		return 1;
	}

	char *t = malloc(strlen(s) + 1);
	if (t == NULL) {
		return 1;
	}

	strcpy(t, s);

	t[0] = toupper(t[0]);

	printf("%s\n", s);
	printf("%s\n", t);

	free(t);
	return 0;
}