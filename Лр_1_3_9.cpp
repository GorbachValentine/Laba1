#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;

	puts("������� ������� ������������");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	if (a + b > c || b + c > a || a + c > b)
		printf("����������� ����������");
	else
		printf("����������� �� ����������");

	return 0;
}