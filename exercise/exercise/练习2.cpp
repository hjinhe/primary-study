#define _CRE_SECURE_NO_WARNINGS1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void menu()
{

	printf("######################################\n");
	printf("#########1 ������      0 �˳�#########\n");
	printf("######################################\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	printf("��²�һ�� 1 �� 100 ������\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}