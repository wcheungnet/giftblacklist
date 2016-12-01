#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "blacklist.h"

int main(int argc, char *argv[])
{
	int i = 0;

	printf("Gift blacklist:\n");

	while (blacklist[i][0]) {
		printf(" - %s\n", blacklist[i]);
		i++;
	}

	return 0;
}
