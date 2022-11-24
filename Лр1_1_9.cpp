#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int n, i;
	double a, d, sum;

	puts("Введите n: ");
	scanf_s("%d", &n);

	puts("Введите a: ");
	scanf_s("%lf", &a);

	puts("Введите d: ");
	scanf_s("%lf", &d);

	for (sum = 0, i = 1; i <= n; i++)
		sum += a + (i - 1) * d;

	printf("\nsum = %.5lf\n", sum);

	return 0;
}
