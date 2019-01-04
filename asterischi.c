#include <stdio.h>
#include <time.h>

int main() {
	struct timespec tempo;
	tempo.tv_sec = 0;
	tempo.tv_nsec = 500 * 1000 * 1000;

	puts("*");
	nanosleep(&tempo, NULL);
	puts("*");
        nanosleep(&tempo, NULL);
	puts("*");
        nanosleep(&tempo, NULL);
	
	return 0;
}

