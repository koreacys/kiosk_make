#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���⿡ �ҽ��ڵ带 �ۼ��ϰ� �ؼ��ϰ� �����ϰ� �߰��ϰ�... ��ư �Ұ���!

void sandwich_price(int n);
void coffee_price(int n);
int main(void)
{
	int menu, cof, sand;

	printf("============[�޴�]============\n");
	printf(" 1. Ŀ��\n");
	printf(" 2. ������ġ\n");
	printf(" 0. ����\n");
	printf("==============================\n\n");

	printf("�޴��� �����ϼ���: ");
	scanf("%d", &menu);

	while (1)
	{
		if (menu == 1)
		{
			printf("------------[Ŀ��]------------\n");
			printf(" 1) �Ƹ޸�ī�� (400)\n");
			printf(" 2) ī��� (700)\n");
			printf(" 3) ī��� (800)\n");
			printf(" 0. ����\n");
			printf("------------------------------\n\n");
			printf("ǰ���� �����ϼ���: ");
			scanf("%d", &cof);

			coffee_price(cof);
			break;
		}
		else if (menu == 2)
		{
			printf("------------[������ġ]------------\n");
			printf(" 1) ������ġ (700)\n");
			printf(" 2) �׸�������ġ (800)\n");
			printf(" 3) ����� ������ġ (800)\n");
			printf(" 0. ����\n");
			printf("---------------------------------\n\n");
			printf("ǰ���� �����ϼ���: ");
			scanf("%d", &sand);

			sandwich_price(sand);
			break;
		}
		else if (menu == 0)
		{
			printf("�����մϴ�.");
			break;
		}
	}
	return 0;
}

void coffee_price(int n)
{
	int m, g;
	int ame = 400, latte = 700, moca = 800;

	if (n == 0)
	{
		printf("����\n");
	}

	while (n != 0)
	{
		printf("�ݾ��� �����ϼ���");
		scanf("%d", &m);

		switch (n)
		{
		case 1:
			g = m - ame;
			break;
		case 2:
			g = m - latte;
			break;
		case 3:
			g = m - moca;
			break;
		default:
			printf("�ٽ� �Է��ϼ���");
		}

		if (g >= 0)
		{
			printf("\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n");
			
			printf("��õ�� %d��\n", g / 5000);
			g %= 5000;
			printf("õ�� %d��\n", g / 1000);
			g %= 1000;
			printf("����� %d��\n", g / 500);
			g %= 500;
			printf("��� %d��\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d���� �����մϴ�.\n", g);
			continue;
		}
	}
}

void sandwich_price(int n)
{
	int m, g;
	int sand = 700, gril = 800, ras = 800;

	if (n == 0)
	{
		printf("����\n");
	}

	while (n != 0)
	{
		printf("�ݾ��� �����ϼ���");
		scanf("%d", &m);

		switch (n)
		{
		case 1:
			g = m - sand;
			break;
		case 2:
			g = m - gril;
			break;
		case 3:
			g = m - ras;
			break;
		default:
			printf("�ٽ� �Է��ϼ���");
		}

		if (g >= 0)
		{
			printf("\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n");

			printf("��õ�� %d��\n", g / 5000);
			g %= 5000;
			printf("õ�� %d��\n", g / 1000);
			g %= 1000;
			printf("����� %d��\n", g / 500);
			g %= 500;
			printf("��� %d��\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d���� �����մϴ�.\n", g);
			continue;
		}
	}
}