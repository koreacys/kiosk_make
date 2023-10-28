#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 남은 버거의 수 초기화
int bulgogi = 10, shrimp = 10, chicken = 10, cheese = 10, egg = 10;
int potato = 10, nuggets = 10, cstick = 10, cpotatoes = 10;
int cola = 10, zero_cola = 10, soda = 10, orange = 10, water = 10;

//각 매출의 합산을 받는 변수 초기화
int sum1 = 0, sum2 = 0, sum3 = 0;

void hamburger_price(int n); // 햄버거 가격을 계산하는 함수
void side_price(int n); // 사이드 메뉴 가격을 계산하는 함수
void drink_price(int n);// 음료 메뉴 가격을 계산하는 함수
void manager();//관리자 모드 함수


class HamburgerSystem { //클래스 HamburgerSystem
public: //공개
    int choice, MenuChoice; //menu 변수
    void run() { //run 함수 작성
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
            case 999: // 999가 눌리면
                manager(); //manager() 함수 실행
                break; //스위치 문 나가기
            case 0: //0이 눌리면
                cout << "종료합니다." << endl; // 문자 출력
                return;
            default: //그 무엇도 아니라면
                cout << "잘못된 선택입니다. 다시 선택하세요." << endl; //문자 출력
            }

        }
    }
    void MenuOrder() {
        cout << "============[메뉴선택]============" << endl; // 문자 출력
        cout << "1. 햄버거" << endl;
        cout << "2. 사이드 메뉴" << endl;
        cout << "3. 음료" << endl; // 0번을 만들어서 되돌리기 키 활성화 시키기 ★
        cout << "0. 처음으로" << endl; // 처음으로 돌아가기
        cout << "==================================\n"; // 문자 출력

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

private:

    void ShowMain() {  //ShowMenu() 함수 선언
        cout << "============[메인화면]============" << endl; //문자 출력
        cout << "1.포장" << endl;
        cout << "2.매장식사" << endl;
        cout << "999. 관리자 모드" << endl;
        cout << "0. 종료" << endl;
        cout << "==============================" << endl; //문자 출력
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

HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언

//--------------------[결제 클래스]-----------------------

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
                hb.run(); //첫 시작 화면 부르기
                break;
            }
        }
    }
};

price pr; //price 클래스를 pr로 선언


class Shopping_basket {
public:
    int c;
    // 선택된 메뉴와 총 가격을 저장할 변수 추가
    vector<string> selectedMenu; // 선택된 메뉴 목록을 저장하는 벡터
    int totalPrice = 0; // 총 가격

    void printSelectedMenu(int p) { // 선택된 메뉴 출력 함수
        cout << "============[선택한 메뉴]============" << endl;
        totalPrice += p;
        for (const string& menu : selectedMenu) {
            cout << menu << endl;
        }
        cout << "총 가격: " << totalPrice << "원" << endl;
        cout << "=====================================" << endl;
        cout << "1. 결제    2. 추가하기   : ";
        cin >> c;

        switch (c) {
        case 1:
            pr.price_menu(totalPrice);
        case 2:
            hb.MenuOrder();
            break;
        }
    }
};
Shopping_basket sb; //클래스 Shopping_basket를 sb로 선언

//------------------[가격]------------------------
void hamburger_price(int n) //hamburger_price함수 작성
{
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //정수형 변수 bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200로 선언

    if (n == 0) //if문 n = 0 일때
    {
        cout << "종료" << endl; //종료 출력
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            sb.selectedMenu.push_back("불고기버거(3500)");
            sb.printSelectedMenu(bulgogi); //불고기버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            sb.selectedMenu.push_back("새우버거(3000)");
            sb.printSelectedMenu(shrimp); //새우버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            sb.selectedMenu.push_back("치킨버거(4000)");
            sb.printSelectedMenu(chicken); //치킨버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            sb.selectedMenu.push_back("치즈버거(3700)");
            sb.printSelectedMenu(cheese); //치즈버거의 값을 price_menu에 저장
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            sb.selectedMenu.push_back("에그버거(3200)");
            sb.printSelectedMenu(egg); //에그버거의 값을 price_menu에 저장
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
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //주문 종류n이 0이 아니면
    {
        switch (n)
        {
        case 1:
            sb.selectedMenu.push_back("감자튀김(1200)");
            sb.printSelectedMenu(potato); //감자튀김 값을 price_menu에 저장
            break;
        case 2:
            sb.selectedMenu.push_back("치킨너겟(1500)");
            sb.printSelectedMenu(nuggets); //치킨너겟의 값을 price_menu에 저장
            break;
        case 3:
            sb.selectedMenu.push_back("치즈스틱(1000)");
            sb.printSelectedMenu(cstick); //치즈스틱의 값을 price_menu에 저장
            break;
        case 4:
            sb.selectedMenu.push_back("치즈감자(2000)");
            sb.printSelectedMenu(cpotatoes); //치즈감자의 값을 price_menu에 저장
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
        hb.run(); //첫 시작 화면 부르기
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            sb.selectedMenu.push_back("콜라(1500)");
            sb.printSelectedMenu(cola); //콜라의 값을 price_menu에 저장
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            sb.selectedMenu.push_back("제로콜라(1500)");
            sb.printSelectedMenu(zero_cola); //제로콜라의 값을 price_menu에 저장
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            sb.selectedMenu.push_back("사이다(1500)");
            sb.printSelectedMenu(soda); //사이다의 값을 price_menu에 저장
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            sb.selectedMenu.push_back("오렌지주스(1200)");
            sb.printSelectedMenu(orange); //오렌지 주스의 값을 price_menu에 저장
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            sb.selectedMenu.push_back("물(1000)");
            sb.printSelectedMenu(water); //물의 값을 price_menu에 저장
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}

//----------------------[관리자 모드]----------------------
void ShowMode() { // 관리자 모드 화면
    cout << "============[관리자 모드]============" << endl;
    cout << "관리자모드" << endl;
    cout << "1. 재고 관리" << endl;
    cout << "2. 매출 관리" << endl;
    cout << "0. 돌아가기" << endl;
    cout << "==================================\n";
}

void ShowRemain() { // 재고 관리
    int choice; // 사용자가 선택한 메뉴 번호
    int amount; // 재고를 추가하거나 줄일 수량

    cout << "============[재고 관리]============" << endl; // 문자 출력
    cout << "각 메뉴의 남은 수량은 다음과 같습니다." << endl; // 문자 출력
    cout << "1) 불고기버거: " << bulgogi << endl; // 불고기버거의 남은 수량 출력
    cout << "2) 새우버거: " << shrimp << endl; // 새우버거의 남은 수량 출력
    cout << "3) 치킨버거: " << chicken << endl; // 치킨버거의 남은 수량 출력
    cout << "4) 치즈버거: " << cheese << endl; // 치즈버거의 남은 수량 출력
    cout << "5) 에그버거: " << egg << endl; // 에그버거의 남은 수량 출력
    cout << "6) 감자튀김: " << potato << endl; // 감자튀김의 남은 수량 출력
    cout << "7) 치킨너겟: " << nuggets << endl; // 치킨너겟의 남은 수량 출력
    cout << "8) 치즈스틱: " << cstick << endl; // 치즈스틱의 남은 수량 출력
    cout << "9) 치즈감자: " << cpotatoes << endl; // 치즈감자의 남은 수량 출력
    cout << "10) 콜라: " << cola << endl; // 콜라의 남은 수량 출력
    cout << "11) 제로콜라: " << zero_cola << endl; // 제로콜라의 남은 수량 출력
    cout << "12) 사이다: " << soda << endl; // 사이다의 남은 수량 출력
    cout << "13) 오렌지주스: " << orange << endl; // 오렌지주스의 남은 수량 출력
    cout << "14) 물: " << water << endl; // 물의 남은 수량 출력
    cout << "==================================" << endl; // 문자 출력

    while (1) { // 무한반복
        cout << "재고를 추가하거나 줄일 메뉴 번호를 입력하세요. (0은 종료)" << endl; // 문자 출력
        cin >> choice; // choice에 입력한 문자 넣기
        if (choice == 0) { // choice가 0이면
            cout << "관리자 모드를 종료합니다." << endl; // 문자 출력
            hb.run(); //첫 시작 화면 부르기
            break; // while문 나가기
        }
        else if (choice < 1 || choice > 14) { // choice가 1보다 작거나 14보다 크면
            cout << "잘못된 번호입니다. 다시 입력하세요." << endl; // 문자 출력
            continue; // while문의 처음으로 돌아가기
        }
        else { // choice가 1부터 14 사이면
            cout << "재고를 추가하려면 양수, 줄이려면 음수를 입력하세요." << endl; // 문자 출력
            cin >> amount; // amount에 입력한 문자 넣기
            switch (choice) { // switch문에 choice 넣기
            case 1: // choice가 1이면
                bulgogi += amount; // 불고기버거의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 2: // choice가 2이면
                shrimp += amount; // 새우버거의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 3: // choice가 3이면
                chicken += amount; // 치킨버거의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 4: // choice가 4이면
                cheese += amount; // 치즈버거의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 5: // choice가 5이면
                egg += amount; // 에그버거의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 6: // choice가 6이면
                potato += amount; // 감자튀김의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 7: // choice가 7이면
                nuggets += amount; // 치킨너겟의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 8: // choice가 8이면
                cstick += amount; // 치즈스틱의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 9: // choice가 9이면
                cpotatoes += amount; // 치즈감자의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 10: // choice가 10이면
                cola += amount; // 콜라의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 11: // choice가 11이면
                zero_cola += amount; // 제로콜라의 남은 수량에 amount 더하기
                break; // switch문 나가기
            case 12: // choice가 12이면
                soda += amount; // 사이다의 남은 수량에 amount 더하기
            }
        }
    }
}

void ShowManageMode() { // 매출 관리 화면
    cout << "============[매출 관리]============" << endl;
    cout << "1. 버거 매출" << endl;
    cout << "2. 사이드 메뉴 매출" << endl;
    cout << "3. 음료 매출" << endl;
    cout << "4. 매출 총합" << endl;
    cout << "0. 돌아가기" << endl;
    cout << "==================================\n";
}
void ShowBurgerManage() { // 버거 매출 화면 
    cout << "============[버거 매출]============" << endl;
    cout << "햄버거 매출: " << sum1 << endl; // sum1
    cout << "0. 돌아가기" << endl;
    cout << "==================================\n";
}

void ShowSideManage() { // 사이드 매출 화면
    cout << "============[사이드 매출]============" << endl;
    cout << "사이드 매출: " << sum2 << endl; // sum2
    cout << "0. 돌아가기" << endl;
    cout << "==================================\n";
}

void ShowDrinkManage() { // 음료 매출 화면
    cout << "============[음료 매출]============" << endl;
    cout << "음료 매출: " << sum3 << endl; // sum3
    cout << "0. 돌아가기" << endl;
    cout << "==================================\n";
}

void ShowSumSale() { // 전 메뉴 총합 매출 화면
    int sum4 = sum1 + sum2 + sum3;
    cout << "============[매출 총합]============" << endl;
    cout << "매출 총합은: " << sum4 << "원 입니다."; // allsum
    cout << "==================================\n";
}

void manager() { //관리자 모드 함수
    int ManageMode, SaleMode;
    ShowMode(); //관리자 모드
    while (1) { //무한반복 함수
        cout << "관리자 모드입니다. 선택해주세요: ";
        cin >> ManageMode;

        switch (ManageMode) {
        case 1: // 1이 눌리면
            ShowRemain(); //재고관리 화면
            break;
        case 2: // 2가 눌리면
            ShowManageMode(); //매출관리 화면
            break;
        case 0: // 0이 눌리면
            break;
        default: //그 무엇도 아니라면
            cout << "잘못된 선택입니다. 다시 선택하세요." << endl;
        }

        if (ManageMode == 0) { //0 입력시 메뉴 선택으로 돌아가기
            hb.run();
            break; // 탈출
        }

        while (1) { //무한반복 함수

            cout << "어떤 매출을 보시겠습니까?: ";
            cin >> SaleMode;

            switch (SaleMode) {
            case 1: // 1이 눌리면
                ShowBurgerManage(); //햄버거 매출 화면
                break;
            case 2: // 2가 눌리면
                ShowSideManage(); //사이드 매출 화면
                break;
            case 3: // 3이 눌리면
                ShowDrinkManage(); //음료 매출 화면
                break;
            case 4: // 4가 눌리면
                ShowSumSale(); //총합 매출 화면
                break;
            case 0:
                break;
            default: //그 무엇도 아니라면
                cout << "잘못된 선택입니다. 다시 선택하세요." << endl;
            }

            if (SaleMode == 0) {
                hb.run();
                break; // 탈출 
            }
        }
    }
}

int main(void)//main함수 시작
{
    hb.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름
    return 0;
}