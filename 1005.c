#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	float A, B, MEDIA;
	scanf ("%f", &A);
	scanf ("%f", &B);
	A = A*3.5;
	B = B*7.5;
	MEDIA = ((A+B)/11);
	printf("MEDIA = %.5f\n", MEDIA);
	return 0;
}
