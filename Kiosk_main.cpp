#include <iostream>
using namespace std;

void hamburger_price(int n); // 햄버거 가격을 계산하는 함수
void side_price(int n); // 사이드 메뉴 가격을 계산하는 함수
void drink_price(int n);// 음료 메뉴 가격을 계산하는 함수


class CafeOrderSystem { //클래스 CafeOrderSystem
public: //공개
    void run() { //run 함수 작성
        int choice, MenuChoice; //menu 변수

        while (1) { //무한반복 함수
            ShowMain(); //ShowMain()함수 부르기
            cout << "식사를 선택하세요: "; //문자 출력
            cin >> choice; //menu에 입력한 문자 넣기

            switch (choice) { //스위치 문에 choice 넣기
            case 1: // 1이 눌리면
                MenuOrder(); //MenuOrder() 함수 실행
                break; //스위치 문 나가기
            case 2: // 2가 눌리면
                MenuOrder(); //MenuOrder() 함수 실행
                break; //스위치 문 나가기
            case 0: //0이 눌리면
                cout << "종료합니다." << endl; // 문자 출력
                return;
            default: //그 무엇도 아니라면
                cout << "잘못된 선택입니다. 다시 선택하세요." << endl; //문자 출력
            }


            while (1) { //무한반복 함수

                cout << "메뉴를 선택해주세요: "; //문자 출력
                cin >> MenuChoice; //MenuChoice에 입력한 문자 넣기

                switch (MenuChoice) { //스위치 문에 choice 넣기
                case 1: // 1이 눌리면
                    hamburgerMenu(); //hamburgerMenu() 함수 실행
                    break; //스위치 문 나가기
                case 2: // 2가 눌리면
                    sideMenu(); //sideMenu() 함수 실행
                    break; //스위치 문 나가기
                case 3: // 3이 눌리면
                    drinkMenu(); //drinkMenu() 함수 실행
                    break; // 스위치 문 나가기 + 0 입력을 받아 
                case 0: // 0이 눌리면
                    ShowMain();
                    break;
                default: //그 무엇도 아니라면
                    cout << "잘못된 선택입니다. 다시 선택하세요." << endl; //문자 출력
                }
            }
        }
    }

private:
    void ShowMain() {  //ShowMenu() 함수 선언
        cout << "============[메인화면]============" << endl; //문자 출력
        cout << "1.포장" << endl;
        cout << "2.매장식사" << endl;
        cout << "0. 종료" << endl;
        cout << "==============================" << endl; //문자 출력
    }

    void MenuOrder() {
        cout << "============[메뉴선택]============" << endl; // 문자 출력
        cout << "1. 햄버거" << endl;
        cout << "2. 사이드 메뉴" << endl;
        cout << "3. 음료" << endl; // 0번을 만들어서 되돌리기 키 활성화 시키기 ★
        cout << "0. 처음으로" << endl; // 처음으로 돌아가기
        cout << "==================================\n"; // 문자 출력
    }

    void hamburgerMenu() {
        int hamburgerChoice;
        cout << "============[메뉴선택]============" << endl;
        cout << "1) 불고기버거(3500)" << endl;
        cout << "2) 새우버거(3000)" << endl;
        cout << "3) 치킨버거(4000)" << endl;
        cout << "4) 치즈버거(3700)" << endl;
        cout << "5) 에그버거(3200)" << endl;
        cout << "==================================\n";
        cin >> hamburgerChoice;
        hamburger_price(hamburgerChoice);
    }

    void sideMenu() {
        int sideMenu;
        cout << "============[메뉴선택]============" << endl;
        cout << "1) 감자튀김(1200)" << endl;
        cout << "2) 치킨너겟(1500)" << endl;
        cout << "3) 치즈스틱(1000)" << endl;
        cout << "4) 치즈감자(2000)" << endl;
        cout << "==================================\n";
        cin >> sideMenu;
        side_price(sideMenu);
    }

    void drinkMenu() {
        int drinkMenu;
        cout << "============[메뉴선택]============" << endl;
        cout << "1) 콜라(1500)" << endl;
        cout << "2) 제로콜라(1500)" << endl;
        cout << "3) 사이다(1500)" << endl;
        cout << "4) 오렌지주스(1200)" << endl;
        cout << "5) 물(1000)" << endl;
        cout << "==================================\n";
        cin >> drinkMenu;
        drink_price(drinkMenu);
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

class price2 { //계산 클래스
public:
    int mony, g;  //정수방 mony와 g 생성
    void my_mony(int m) { //my_mony 함수 생성
        mony = m; //mony에 m 저장
    }

    void price_menu2(int p) { //price_menu 함수 생성
        g = mony - p;  //계산 결과를 g에 저장
        ch.Calculator_change(g); //change 클래스의 Calculator_change 함수 호출
    }
};

price2 p2; //클래스 price2를 p2이름으로 정의

class price { //계산 클래스
public:
    void price_menu(int p) { //price_menu 함수 생성
        int payway, cash; // 결제 방법을 선택하여 저장할 정수방 payway와 현금 결제시 금액을 저장할 cash 생성

        cout << "============[결제선택]============" << endl;
        cout << "1. 현금" << endl;
        cout << "2. 카드" << endl;
        cout << "3. 삼성페이/애플페이" << endl;
        cout << "0. 결제 취소" << endl;
        cout << "==================================\n";
        cout << "결제방법을 선택해주세요: ";
        cin >> payway; //결제 방법을 payway에 저장

        while (1) //반복문
        {
            if (payway == 1) //현금 결제시
            {
                cout << "현금 결제를 선택하셨습니다.\n";
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                cout << "금액을 투입해주세요.";
                cin >> cash; //금액을 cash에 삽입
                p2.my_mony(cash); //p2클래스의 my_mony함수에 cash를 삽입
                p2.price_menu2(p); ////p2클래스의 price_menu2함수에 음식의 금액을 삽입
                break;
            }
            else if (payway == 2) //카드 결제시
            {
                cout << "카드 결제를 선택하셨습니다.\n";
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                cout << "카드를 투입해주세요.\n";
                cout << "결제가 완료 되었습니다. \n";
                break;
            }
            else if (payway == 3) //페이 결제시
            {
                cout << "삼성페이/애플페이를 선택하셨습니다.\n";
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                cout << "핸드폰을 리더기에 대주세요.\n";
                cout << "결제가 완료 되었습니다. \n";
                break;
            }
            else if (payway == 0) //종료 결제시
            {
                cout << "결제를 취소하셨습니다.\n";
                break;
            }
        }
    }
};

price pr; //price 클래스를 pr로 선언

void hamburger_price(int n) //hamburger_price함수 작성
{
    int Bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //정수형 변수 bur1 = 3500, bur2 = 3000, bur3 = 4000, bur4 = 3700, bur5 = 3200 로 선언

    if (n == 0) //if문 n = 0 일때
    {
        cout << "종료" << endl; //종료 출력
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            pr.price_menu(Bulgogi); //불고기버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            pr.price_menu(shrimp); //새우버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            pr.price_menu(chicken); //치킨버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            pr.price_menu(cheese); //치즈버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            pr.price_menu(egg); //에그버거의 값을 price_menu에 저장
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}

void side_price(int n) //side_price함수 작성
{
    int potato = 1500, nuggets = 1500, cstick = 1500, cpotatoes = 1200; // 정수현 변수 potato = 1500, nuggets = 1500, cstick = 1500, cpotatoes = 1200로 선언

    if (n == 0) //주문 종류n이 0이면 종료
    {
        cout << "종료" << endl; //종료 출력
    }

    while (n != 0) //주문 종류n이 0이 아니면
    {
        switch (n)
        {
        case 1:
            pr.price_menu(potato); //감자튀김 값을 price_menu에 저장
            break;
        case 2:
            pr.price_menu(nuggets); //치킨너겟의 값을 price_menu에 저장
            break;
        case 3:
            pr.price_menu(cstick); //치즈스틱의 값을 price_menu에 저장
            break;
        case 4:
            pr.price_menu(cpotatoes); //치즈감자의 값을 price_menu에 저장
            break;
        default:
            cout << "다시 입력하세요"; // 유효하지 않은 주문일 경우 다시 입력 요청
        }

        break; //while문 나가기
    }
}

void drink_price(int n) //drin_price함수 작성
{
    int cola = 1200, zero_cola = 1500, soda = 1000, orange = 1000, water = 2000; //정수형 변수 cola = 1200, zero_cola = 1500, soda = 1000, orange = 1000, water = 2000로 선언

    if (n == 0) //if문 n = 0 일때
    {
        cout << "종료" << endl; //종료 출력
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            pr.price_menu(cola); //콜라의 값을 price_menu에 저장
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            pr.price_menu(zero_cola); //제로콜라의 값을 price_menu에 저장
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            pr.price_menu(soda); //사이다의 값을 price_menu에 저장
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            pr.price_menu(orange); //오렌지 주스의 값을 price_menu에 저장
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            pr.price_menu(water); //물의 값을 price_menu에 저장
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
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