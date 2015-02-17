#include <stdlib.h>

static void init()  __attribute__((constructor));

void init() {
	exit(0);
}