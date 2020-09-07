#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;
	double c = 0.2, eps = 0.001, sigma = 0.01;
	double a, b, z, x, x0, y;
	x = x0 = 3.3;
	do {
		y = x + c * (3 * cos(2 * x) - x + 0.25);
		z = x;
		printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\n", n++, x, y, fabs(y - x),
				fabs(3 * cos(2 * y) - y + 0.25));
		x = y;
		a = fabs(z - x);
		b = fabs(3 * cos(2 * y) - y + 0.25);
	} while (a > eps && b > sigma);
	printf("res:\t%.4f\n", x);
	return (0);
}
