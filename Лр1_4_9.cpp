#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int choose;

	puts("Страны:");
	puts("1. Беларусь");
	puts("2. Россия");
	puts("3. Англия");
	puts("4. Казахстан");
	puts("5. Япония");
	puts("6. Украина");
	puts("\nСделайте выбор:");
	scanf_s(" %d", &choose);
	printf("\nСтрана: ");

	switch (choose)
	{
	case 1: puts("Беларусь, столица: Минск");
		break;
	case 2: puts("Россия, столица: Москва");
		break;
	case 3: puts("Англия, столица: Лондон");
		break;
	case 4: puts("Казахстан, столица: Алматы");
		break;
	case 5: puts("Япония, столица: Токио");
		break;
	case 6: puts("Украина, столица: Киев");
		break;
	default: puts("Соответствия для страны не нашлось ..."); 
	}

	return 0;
}


