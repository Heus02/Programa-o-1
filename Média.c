#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A, B, Media;
    scanf ("%lf%lf", &A, &B);
    Media = (A * 3.5 + B * 7.5) / 11;
    printf ("MEDIA = %.5lf", Media);
	return 0;
}