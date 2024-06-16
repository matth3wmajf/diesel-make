#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

#include <diesel-make/endl.h>

char *g_makefile_path = "Makefile";
FILE *g_makefile_file = NULL;

int main(int argc, const char *argv[])
{
	int i = 1;
	while(i < argc)
	{
		if(strcmp(argv[i], "-f") == 0)
		{
			if(!(i + 1 < argc))
			{
				fprintf(stderr, "error: The `-f` flag requires a value!" ENDL);
				exit(EXIT_FAILURE);
			}

			g_makefile_path = argv[i + 1];

			i += 2;
		}
		else if(strcmp(argv[i], "-h") == 0)
		{
			fprintf(stderr, "error: Not implemented!" ENDL);
			exit(EXIT_FAILURE);
		}
	}

	g_makefile_file = fopen(g_makefile_path, "r");
	if(g_makefile_file == NULL)
	{
		fprintf(stderr, "error: Failed to open `%s` for reading!" ENDL, g_makefile_path);
		exit(EXIT_FAILURE);
	}

	int l_character;
	while((l_character = fgetc(g_makefile_file)) != EOF)
	{
		/* TODO: Parse the file's contents. */
	}
	
	fclose(g_makefile_file);

	return 0;
}