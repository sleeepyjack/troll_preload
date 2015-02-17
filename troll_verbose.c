#include <stdlib.h>
#include <stdio.h>

static void init()  __attribute__((constructor));

void init() {
	printf("trololololo\n");
	exit(0);
}