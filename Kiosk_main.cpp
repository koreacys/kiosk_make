#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//여기에 소스코드를 작성하고 해석하고 수정하고 추가하고... 암튼 할거임!

void sandwich_price(int n);
void coffee_price(int n);
int main(void)
{
	int menu, cof, sand;

	printf("============[메뉴]============\n");
	printf(" 1. 커피\n");
	printf(" 2. 샌드위치\n");
	printf(" 0. 종료\n");
	printf("==============================\n\n");

	printf("메뉴를 선택하세요: ");
	scanf("%d", &menu);

	while (1)
	{
		if (menu == 1)
		{
			printf("------------[커피]------------\n");
			printf(" 1) 아메리카노 (400)\n");
			printf(" 2) 카페라떼 (700)\n");
			printf(" 3) 카페라떼 (800)\n");
			printf(" 0. 종료\n");
			printf("------------------------------\n\n");
			printf("품목을 선택하세요: ");
			scanf("%d", &cof);

			coffee_price(cof);
			break;
		}
		else if (menu == 2)
		{
			printf("------------[샌드위치]------------\n");
			printf(" 1) 샌드위치 (700)\n");
			printf(" 2) 그릴샌드위치 (800)\n");
			printf(" 3) 라즈베리 샌드위치 (800)\n");
			printf(" 0. 종료\n");
			printf("---------------------------------\n\n");
			printf("품목을 선택하세요: ");
			scanf("%d", &sand);

			sandwich_price(sand);
			break;
		}
		else if (menu == 0)
		{
			printf("종료합니다.");
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
		printf("종료\n");
	}

	while (n != 0)
	{
		printf("금액을 투자하세요");
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
			printf("다시 입력하세요");
		}

		if (g >= 0)
		{
			printf("\n\n감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다.\n");
			
			printf("오천원 %d장\n", g / 5000);
			g %= 5000;
			printf("천원 %d장\n", g / 1000);
			g %= 1000;
			printf("오백원 %d개\n", g / 500);
			g %= 500;
			printf("백원 %d개\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d원이 부족합니다.\n", g);
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
		printf("종료\n");
	}

	while (n != 0)
	{
		printf("금액을 투자하세요");
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
			printf("다시 입력하세요");
		}

		if (g >= 0)
		{
			printf("\n\n감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다.\n");

			printf("오천원 %d장\n", g / 5000);
			g %= 5000;
			printf("천원 %d장\n", g / 1000);
			g %= 1000;
			printf("오백원 %d개\n", g / 500);
			g %= 500;
			printf("백원 %d개\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d원이 부족합니다.\n", g);
			continue;
		}
	}
}