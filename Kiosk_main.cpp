#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

void sandwich_price(int n);//샌드위치 가격을 계산하는 함수
void coffee_price(int n);//커피 가격을 계산하는 함수

int main(void)//main함수 시작
{
	int menu, cof, sand; //정수 변수 선언

	//메뉴 목록 출력
	cout << "============[메뉴]============" << endl;
	cout << " 1. 커피" << endl;
	cout << " 2. 샌드위치" << endl;
	cout << " 0. 종료" << endl;
	cout << "==============================" << endl;

	//사용자로부터 메뉴 선택 받기
	cout << "메뉴를 선택하세요: ";
	cin >> menu;


	while (1) // 무한 반복 코드 사용
	{
		if (menu == 1) // 조건식이 1로 참이면 실행
		{
			cout << "------------[커피]------------\n";
			cout << " 1) 아메리카노(400)\n";
			cout << " 2) 카페라떼 (700)\n";
			cout << " 3) 카페라떼 (800)\n";
			cout << " 0. 종료\n";
			cout << "------------------------------\n\n"; // 입력으로 1을 받을 경우 나오는 선택지
			cout << "품목을 선택하세요: "; // 입력을 받은 후 다음 
			cin >> cof; // 커피 값 입력

			coffee_price(cof); // 커피 값 저장
			break; // break를 만나 첫 번째 조건문을 빠져나간다
		}
		else if (menu == 2) // 조건식이 2로 참이면 실행
		{
			cout << "------------[샌드위치]------------\n";
			cout << " 1) 샌드위치 (700)\n";
			cout << " 2) 그릴샌드위치 (800)\n";
			cout << " 3) 라즈베리 샌드위치 (800)\n";
			cout << " 0. 종료\n";
			cout << "---------------------------------\n\n";
			cout << "품목을 선택하세요: ";
			cin >> sand; // 샌드위치 값 입력

			sandwich_price(sand); // 샌드위치 값 저장
			break; // break를 만나 두 번째 조건문을 빠져나감
		}
		else if (menu == 0) // 조건식이 0으로 참이면 실행
		{
			cout << "종료합니다." << endl;
			break; // break를 만나 else if문을 빠져나감
		}
	}
	return 0;
}

void coffee_price(int n) //coffee_price함수 작성
{
	int m, g; //정수형 변수 m, g 선언
	int ame = 400, latte = 700, moca = 800; //정수형 변수 ame = 400, latte = 700, moca = 800로 선언

	if (n == 0) //if문 n = 0 일때
	{
		cout << "종료" << endl; //종료 출력
	}

	while (n != 0) //n = 0 이 아닐 때
	{
		cout<< "금액을 투자하세요"; //금액을 투자하세요 출력
		cin >> m;
		switch (n) //switch문
		{
		case 1: //1이 눌렸을 때
			g = m - ame; //m - ame의 값을 g에 저장
			break; //switch문 나가기
		case 2: //2가 눌렸을 때
			g = m - latte; //m - latte의 값을 g에 저장
			break; //switch문 나가기
		case 3: //3이 눌렸을 때
			g = m - moca; //m - moca의 값을 g에 저장
			break; //switch문 나가기
		default: //위의 숫자를 입력한게 아니라면
			cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
		}

		if (g >= 0) //만약 g >= 일 때
		{
			cout<<"\n\n감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다.\n"; //감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다. 출력
			
			cout<<"오천원 "<<g<<"장"<<endl; //오천원 개수 출력
			g %= 5000;
			cout<<"천원 "<<g<<"장"<<endl; //천원 개수 출력
			g %= 1000;
			cout << "오백원 " << g << "개" << endl; //오백원 개수 출력
			g %= 500;
			cout << "백원 " << g << "개" << endl; //백원 개수 출력
			cout<<"\n"; //줄 바꿈
			break; //if문 나가기
		}
		else //만약 g >= 이 아니라면
		{
			g = -g; //g에 -g를 넣어 음수였던 g를 양수로 바꿈
			cout<<g<<"원이 부족합니다.\n"; //(부족한 잔액의 액수)원이 부족합니다. 출력
			continue; //다시 금액을 입력하기
		}
	}
}
//---------------이다영
void sandwich_price(int n)//샌드위치의 종류와 지불한 금액을 입력받아 계한하는 함수
{
	int m, g; //금액m과 거스름돈g를 저장하는 변수
	int sand = 700, gril = 800, ras = 800; //샌드위치의 가격

	if (n == 0) //주문 종류n이 0이면 종료
	{
		cout << "종료" << endl;
	}

	while (n != 0) //주문 종류n이 0이 아니면
	{
		cout << "금액을 투자하세요";
		cin >> m; //입금받을 금액을 받음

		switch (n)
		{
		case 1:
			g = m - sand; // 샌드위치 가격을 차감하여 거스름돈 계산
			break;
		case 2:
			g = m - gril; // 그릴 샌드위치 가격을 차감하여 거스름돈 계산
			break;
		case 3:
			g = m - ras; // 라즈베리 샌드위치 가격을 차감하여 거스름돈 계산
			break;
		default:
			cout<<"다시 입력하세요"; // 유효하지 않은 주문일 경우 다시 입력 요청
		}

		if (g >= 0)
		{
			// 거스름돈을 분할하여 출력
			cout << "\n\n감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다.\n";

			cout << "오천원 " << g << "장" << endl;
			g %= 5000;
			cout << "천원 " << g << "장" << endl;
			g %= 1000;
			cout << "오백원 " << g << "개" << endl;
			g %= 500;
			cout << "백원 " << g << "개" << endl;
			cout << "\n";
			break; // 거스름돈 계산 후 루프 종료
		}
		else
		{
			g = -g; // 부족한 금액을 양수로 변환하여 표시
			cout << g << "원이 부족합니다.\n"; // 부족한 금액을 알림
			continue; // 고객에게 다시 금액을 입력받도록 계속 진행
		}
	}
}