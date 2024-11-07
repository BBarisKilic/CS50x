//
// Created by Bülent Barış Kılıç on 07.11.24.
//

#include "cs50.h"
#include <stdio.h>

int main(void)
{
	FILE *file = fopen("phonebook.csv", "a");
	if (file == NULL) {
		return 1;
	}

	char *name = get_string("Name: ");
	char *phone = get_string("Phone: ");

	fprintf(file, "%s,%s\n", name, phone);
	fclose(file);

	return 0;
}