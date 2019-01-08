#include <stdio.h>

int main() {
	int v[3];
	int s = 0;
	double m;

	printf("Inserisci tre valori interi: \n");
	scanf("%d", &v[0]);
	scanf("%d", &v[1]);
	scanf("%d", &v[2]);

	printf("Dati iniziali: \n");
	printf("numbers[0] = %d\n", v[0]);
	printf("numbers[1] = %d\n", v[1]);
	printf("numbers[2] = %d\n", v[2]);
	
	s = v[0] +v[1] +v[2];
	m = s /3.0;

	printf("Somma: %d\n", s);
	printf("Media: %.1f\n", m);

	return 0;
}
