#include "functions.h"

void Menu()
{
	printf("============================================\n");
	printf("简易计算器1.0    请选择你的操作(输入-1退出)：\n");
	printf("1、加法    2、减法\n");
	printf("3、乘法    4、除法\n");
	printf("5、乘方    6、开根\n");
	printf("-1、退出\n");
	printf("=============================================\n");
}

void MenuList()
{
	int input = 0;
	float num1 = -1, num2 = -1, result = 01;
	while (input != -1)
	{
		// 打印菜单
		Menu();
		// 输入选择
		printf("=> ");
		scanf_s("%d", &input);
		// 检测输入，调用对应接口
		switch (input)
		{
		case 1:
			printf("请输入两个实数，用空格隔开\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_plus(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 2:
			printf("请输入两个实数，用空格隔开\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_substract(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 3:
			printf("请输入两个实数，用空格隔开\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_multiply(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 4:
			printf("请输入两个实数，用空格隔开\n");
			printf("=> ");
			scanf_s("%f %f", &num1, &num2);
			result = func_devide(num1, num2);
			printf("=> %.2f\n", result);
			break;
		case 5:
			printf("请输入一个实数\n");
			printf("=> ");
			scanf_s("%f", &num1);
			result = func_power(num1);
			printf("=> %.2f\n", result);
			break;
		case 6:
			printf("请输入一个实数\n");
			printf("=> ");
			scanf_s("%f", &num1);
			result = func_my_sqrt(num1);
			printf("=> %.2f\n", result);
			break;
		case -1:
			break;
		default:
			printf("你输入的选择有误，请重新输入！\n");
			break;
		}

	}
}

int main()
{
	MenuList();
	return 0;
}