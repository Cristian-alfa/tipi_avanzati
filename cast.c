#include <stdio.h>

int main() {
	double nd;
	int ni;

	printf("Please insert a floating point number: ");
	scanf("%lf", &nd);

	ni = (int)nd;

	printf("Your floating point number is: %f\n", nd);
	printf("After casting to int: %d\n", ni);

	return 0;
}
