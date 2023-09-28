#include<iostream>
using namespace std;

void sandwich_price(int n);//샌드위치 가격을 계산하는 함수
void coffee_price(int n);//커피 가격을 계산하는 함수

class CafeOrderSystem { //클래스 CafeOrderSystem
public: //공개
	void run() { //run 함수 작성
		int menu; //menu 변수

		while (1) { //무한반복 함수
			ShowMenu(); //ShowMenu()함수 부르기
			cout << "메뉴를 선택하세요: "; //문자 출력
			cin >> menu; //menu에 입력한 문자 넣기

			switch (menu) { //스위치 문에 menu 넣기
			case 1: // 1이 눌리면
				CoffeeOrder(); //CoffeeOrder() 함수 실행
				break; //스위치 문 나가기
			case 2: // 2가 눌리면
				SandwichOrder(); //SandwichOrder() 함수 실행
				break; //스위치 문 나가기
			case 0: //0이 눌리면
				cout << "종료합니다." << endl; // 문자 출력
				return;
			default: //그 무엇도 아니라면
				cout << "잘못된 선택입니다. 다시 선택하세요." << endl; //문자 출력
			}
		}
	}

private: //은닉
	void ShowMenu() { //ShowMenu() 함수 선언
		cout << "============[메뉴]============" << endl; //문자 출력
		cout << " 1. 커피" << endl; //문자 출력
		cout << " 2. 샌드위치" << endl; //문자 출력
		cout << " 0. 종료" << endl; //문자 출력
		cout << "==============================" << endl; //문자 출력
	}

	void CoffeeOrder() { //CoffeeOrder()함수 선언
		int coffeeChoice; //coffeeChoice 변수 선언
		cout << "------------[커피]------------\n"; //문자 출력
		cout << " 1) 아메리카노(400)\n"; //문자 출력
		cout << " 2) 카페라떼 (700)\n"; //문자 출력
		cout << " 3) 카페모카 (800)\n"; //문자 출력
		cout << " 0. 종료\n"; //문자 출력
		cout << "------------------------------\n\n"; //문자 출력
		cout << "커피 종류를 선택하세요: "; //문자 출력
		cin >> coffeeChoice; //입력한 문자를 coffeeChoice에 입력
		coffee_price(coffeeChoice); // coffee_price를 불러서 coffeeChoice 삽입
	}

	void SandwichOrder() { //SandwichOrder() 함수 선언
		int sandwichChoice; // sandwichChoice 변수 선언
		cout << "------------[샌드위치]------------\n"; ////문자 출력
		cout << " 1) 샌드위치 (700)\n"; //문자 출력
		cout << " 2) 그릴샌드위치 (800)\n"; //문자 출력
		cout << " 3) 라즈베리 샌드위치 (800)\n"; //문자 출력
		cout << " 0. 종료\n"; //문자 출력
		cout << "---------------------------------\n\n"; //문자 출력
		cout << "샌드위치 종류를 선택하세요: "; //문자 출력
		cin >> sandwichChoice; // 입력한 문자를 sandwichChoice에 삽입
		sandwich_price(sandwichChoice); //sandwich_price를 불러서 sandwichChoice 삽입
	}
};

class change { //change 클래스 정의
public: //접근 제어자 public
	void Calculator_change(int g) { //거스름돈을 계산하고 출력하는 멤버 함수 선언
		if (g >= 0) {
			cout << "\n\n감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다.\n"; //감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다. 출력

			cout << "오천원 " << g / 5000 << "장" << endl; //오천원 개수 출력
			g %= 5000;
			cout << "천원 " << g / 1000 << "장" << endl; //천원 개수 출력
			g %= 1000;
			cout << "오백원 " << g / 500 << "개" << endl; //오백원 개수 출력
			g %= 500;
			cout << "백원 " << g / 100 << "개" << endl; //백원 개수 출력
			cout << "\n"; //줄 바꿈

		}
		else {
			g = -g; //g에 -g를 넣어 음수였던 g를 양수로 바꿈
			cout << g << "원이 부족합니다.\n"; //(부족한 잔액의 액수)원이 부족합니다. 출력

		}
	}
};

change ch; //change 클래스를 ch로 선언

class price { //계산 클래스
public:
	int mony, g;  //정수방 mony와 g 생성
	void my_mony(int m) { //my_mony 함수 생성
		mony = m; //mony에 m 저장
	}

	void price_menu(int p) { //price_menu 함수 생성
		g = mony - p;  //계산 결과를 g에 저장
		ch.Calculator_change(g); //change 클래스의 Calculator_change 함수 호출
	}
};

price pr; //price 클래스를 pr로 선언

void coffee_price(int n) //coffee_price함수 작성
{
	int m; //내가 낼 돈을 저장할 m 변수 선언
	int ame = 400, latte = 700, moca = 800; //정수형 변수 ame = 400, latte = 700, moca = 800로 선언

	if (n == 0) //if문 n = 0 일때
	{
		cout << "종료" << endl; //종료 출력
	}

	while (n != 0) //n = 0 이 아닐 때
	{
		cout << "금액을 투자하세요"; //금액을 투자하세요 출력
		cin >> m;
		pr.my_mony(m); //price 클래스의 my_mony 함수 호출

		switch (n) //switch문
		{
		case 1: //1이 눌렸을 때
			pr.price_menu(ame); //아메리카노의 값을 price_menu에 저장
			break; //switch문 나가기
		case 2: //2가 눌렸을 때
			pr.price_menu(latte); //라떼의 값을 price_menu에 저장
			break; //switch문 나가기
		case 3: //3이 눌렸을 때
			pr.price_menu(moca); //모카의 값을 price_menu에 저장
			break; //switch문 나가기
		default: //위의 숫자를 입력한게 아니라면
			cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
		}

		break; //while문 나가기
	}
}

void sandwich_price(int n)//샌드위치의 종류와 지불한 금액을 입력받아 계한하는 함수
{
	int m; //내가 낼 돈을 저장할 m 변수 선언
	int sand = 700, gril = 800, ras = 800; //샌드위치의 가격

	if (n == 0) //주문 종류n이 0이면 종료
	{
		cout << "종료" << endl; //종료 출력
	}

	while (n != 0) //주문 종류n이 0이 아니면
	{
		cout << "금액을 투자하세요";
		cin >> m; //입금받을 금액을 받음
		pr.my_mony(m); //price 클래스의 my_mony 함수 호출
		switch (n)
		{
		case 1:
			pr.price_menu(sand); //샌드위치의 값을 price_menu에 저장
			break;
		case 2:
			pr.price_menu(gril); //그릴 샌드위치의 값을 price_menu에 저장
			break;
		case 3:
			pr.price_menu(ras); //라즈베리 샌드위치의 값을 price_menu에 저장
			break;
		default:
			cout << "다시 입력하세요"; // 유효하지 않은 주문일 경우 다시 입력 요청
		}

		break; //while문 나가기
	}
}

int main(void)//main함수 시작
{
	CafeOrderSystem cafe; //클래스 CafeOrderSystem를 cafe로 선언
	cafe.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름
	return 0;
}