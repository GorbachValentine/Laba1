#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int choose;

	puts("������:");
	puts("1. ��������");
	puts("2. ������");
	puts("3. ������");
	puts("4. ���������");
	puts("5. ������");
	puts("6. �������");
	puts("\n�������� �����:");
	scanf_s(" %d", &choose);
	printf("\n������: ");

	switch (choose)
	{
	case 1: puts("��������, �������: �����");
		break;
	case 2: puts("������, �������: ������");
		break;
	case 3: puts("������, �������: ������");
		break;
	case 4: puts("���������, �������: ������");
		break;
	case 5: puts("������, �������: �����");
		break;
	case 6: puts("�������, �������: ����");
		break;
	default: puts("������������ ��� ������ �� ������� ..."); 
	}

	return 0;
}


