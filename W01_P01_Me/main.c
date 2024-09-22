#include <stdio.h>
#include "cs50.h"

int main(void)
{
	// Prompts the user to enter their name.
	string name = get_string("What's your name? ");
	// Prints a greeting message that includes the user's name.
	printf("hello, %s\n", name);
	return 0;
}
