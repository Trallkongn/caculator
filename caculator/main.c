#include "functions.h"

void Menu()
{
	printf("============================================\n");
	printf("���׼�����1.0    ��ѡ����Ĳ���(����-1�˳�)��\n");
	printf("1���ӷ�    2������\n");
	printf("3���˷�    4������\n");
	printf("5���˷�    6������\n");
	printf("-1���˳�\n");
	printf("=============================================\n");
}

void MenuList()
{
	int input = 0;
	float num1 = -1, num2 = -1, result = 01;
	while (input != -1)
	{
		// ��ӡ�˵�
		Menu();
		// ����ѡ��
		printf("=> ");
		scanf_s("%d", &input);
		// ������룬���ö�Ӧ�ӿ�
		switch (input)
		{
		case 1:
			printf("����������ʵ�����ÿո����\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_plus(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 2:
			printf("����������ʵ�����ÿո����\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_substract(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 3:
			printf("����������ʵ�����ÿո����\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_multiply(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 4:
			printf("����������ʵ�����ÿո����\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_devide(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 5:
			printf("������һ��ʵ��\n");
			printf("=> ");
			scanf_s("%f", &num1);
			result = func_power(num1);
			printf("=> %.2f\n", result);
			break;
		case 6:
			printf("������һ��ʵ��\n");
			printf("=> ");
			scanf_s("%f", &num1);
			result = func_my_sqrt(num1);
			printf("=> %.2f\n", result);
			break;
		case -1:
			break;
		default:
			printf("�������ѡ���������������룡\n");
			break;
		}

	}
}

int main()
{
	MenuList();
	return 0;
}