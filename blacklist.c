#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "blacklist.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	int i = 0;

	fp = fopen("README.md", "w+");
	if (!fp)
		return 1;

	fprintf(fp, "# Gift blacklist\n\n");

	while (blacklist[i][0]) {
		fprintf(fp, " - %s\n", blacklist[i]);
		i++;
	}

	fclose(fp);

	return 0;
}
