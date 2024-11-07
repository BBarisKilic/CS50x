//
// Created by Bülent Barış Kılıç on 07.11.24.
//

#include <stdio.h>

typedef u_int8_t byte;

int main(int argc, char *argv[])
{
	if (argc != 3) {
		printf("./cp source_file destination_file");
		return 1;
	}

	FILE *src = fopen(argv[1], "rb");
	FILE *dst = fopen(argv[2], "wb");
	if (src == NULL || dst == NULL) {
		return 1;
	}

	byte b;
	while (fread(&b, sizeof(b), 1, src)) {
		fwrite(&b, sizeof(b), 1, dst);
	}

	fclose(dst);
	fclose(src);

	return 1;
}
