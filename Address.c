#include <stdio.h>

int main() {
	float x;

	float *i_x = &x;

	printf("Indirizzo variabile: %p\n", i_x);

	return 0;
}
