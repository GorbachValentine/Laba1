//Задание 2

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;

	printf("Введите радиус a -> ");
	scanf_s("%lf", &a);

	printf("Введите b -> ");
	scanf_s("%lf", &b);

	printf("Введите c -> ");
	scanf_s("%lf", &c);

	if (a <= 0 || b <= 0 || c <= 0)
		printf("\nНекорректный ввод величин, попробуйте снова...\n");
	else
	{
		if (b >= c && a < b / 2 || b < c && a < c / 2)
			printf("\nМяч радиусом %.2lf пройдет через прямоугольник, размерами %.2lf %.2lf\n", a, b, c);
		else
			printf("\nМяч радиусом %.2lf не пройдет через прямоугольник, размерами %.2lf %.2lf\n", a, b, c);
	}



	return 0;
}