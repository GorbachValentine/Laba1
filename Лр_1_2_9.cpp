//������� 2

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;

	printf("������� ������ a -> ");
	scanf_s("%lf", &a);

	printf("������� b -> ");
	scanf_s("%lf", &b);

	printf("������� c -> ");
	scanf_s("%lf", &c);

	if (a <= 0 || b <= 0 || c <= 0)
		printf("\n������������ ���� �������, ���������� �����...\n");
	else
	{
		if (b >= c && a < b / 2 || b < c && a < c / 2)
			printf("\n��� �������� %.2lf ������� ����� �������������, ��������� %.2lf %.2lf\n", a, b, c);
		else
			printf("\n��� �������� %.2lf �� ������� ����� �������������, ��������� %.2lf %.2lf\n", a, b, c);
	}



	return 0;
}