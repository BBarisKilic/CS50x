//
// Created by Bülent Barış Kılıç on 16.10.24.
//

#include "cs50.h"
#include <stdio.h>
#include <string.h>

static const int POPULATION = 3;

typedef struct {
	string name;
	string number;
} person;

int main(void)
{
	person persons[POPULATION];

	persons[0].name = "Carter";
	persons[0].number = "+1-123-456-7890";

	persons[1].name = "David";
	persons[1].number = "+1-234-123-456";

	persons[2].name = "Baris";
	persons[2].number = "+1-353-234-444";

	string name = get_string("Names: ");

	for (int i = 0; i < POPULATION; i++) {
		if (strcmp(persons[i].name, name) == 0) {
			printf("Found %s\n", persons[i].number);
			return 0;
		}
	}
	printf("Not found\n");
	return 1;
}