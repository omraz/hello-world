#include "stdio.h"

int main(int argc, char *argv[])  {
	printf("Hello, World!\n  from GitHub\n");
	printf("arguments: %d\n", argc);
	for (int i = 0; i < argc; i++) {
		printf("%3d\t%s\n", i, argv[i]);
	}
	return 0;
}
