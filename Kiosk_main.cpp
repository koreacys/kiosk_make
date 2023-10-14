#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 전역변수로 선언하고 초기화
int bulgogi = 10, shrimp = 10, chicken = 10, cheese = 10, egg = 10;
int potato = 10, nuggets = 10, cstick = 10, cpotatoes = 10;
int cola = 10, zero_cola = 10, soda = 10, orange = 10, water = 10;

void hamburger_price(int n); // 햄버거 가격을 계산하는 함수
void side_price(int n); // 사이드 메뉴 가격을 계산하는 함수
void drink_price(int n);// 음료 메뉴 가격을 계산하는 함수
void setmenu_price(int n);//햄버거 세트메뉴를 계산하는 함수

class SumAll { // 매출 관리 클래스 
public:

    int b1 = 3500, b2 = 3000, b3 = 4000, b4 = 3700, b5 = 3200; // 햄버거 가격
    int s1 = 1200, s2 = 1500, s3 = 1000, s4 = 2000; // 사이드 가격
    int d1 = 1500, d2 = 1500, d3 = 1500, d4 = 1200, d5 = 1000; // 음료 가격
    int n = 0; // 햄버거, 사이드, 음료의 개수를 받는 변수 초기화
    int sum1 = 0, sum2 = 0, sum3 = 0; // 각 매출 합산을 받는 변수 초기화
    int sum4 = sum1 + sum2 + sum3; // 모든 매출의 합산을 받는 변수

    void ham_sale(int n) {
        sum1 = (b1 * n) + (b2 * n) + (b3 * n) + (b4 * n) + (b5 * n);
        cout << "햄버거 매출은 " << sum1 << " 원 입니다.";
    }

    void side_sale(int n) {
        sum2 = (s1 * n) + (s2 * n) + (s3 * n) + (s4 * n);
        cout << "사이드 매출은 " << sum2 << " 원 입니다.";
    }

    void drink_sale(int n) {
        sum3 = (d1 * n) + (d2 * n) + (d3 * n) + (d4 * n) + (d5 * n);
        cout << "음료 매출은 " << sum3 << " 원 입니다.";
    }

    void all_sale(int n) {
        cout << "총 매출은 " << sum4 << " 원 입니다.";
    }

};

SumAll SA; // 매출 관리 객체

void manager() { //관리자 모드 함수
    // 파라메터 n과 지역변수들 삭제
    int choice; // 사용자가 선택한 메뉴 번호
    int amount; // 재고를 추가하거나 줄일 수량

    cout << "============[관리자 모드]============" << endl; // 문자 출력
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

class HamburgerSystem { //클래스 HamburgerSystem
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
            case 9: // 9가 눌리면
                manager(); //manager() 함수 실행
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
    // 선택된 메뉴와 총 가격을 저장할 변수 추가
    vector<string> selectedMenu; // 선택된 메뉴 목록을 저장하는 벡터
    int totalPrice = 0; // 총 가격

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

    void printSelectedMenu() { // 선택된 메뉴 출력 함수
        cout << "============[선택한 메뉴]============" << endl;
        for (const string& menu : selectedMenu) {
            cout << menu << endl;
        }
        cout << "총 가격: " << totalPrice << "원" << endl;
        cout << "=====================================" << endl;
    }
    void setMenu() {
        int hambergerset;
        cout << "=============[메뉴선택]===============" << endl;
        cout << "1. 불고기버거세트(5500)" << endl;
        cout << "2. 새우버거세트(5000)" << endl;
        cout << "3. 치킨버거세트(6000) " << endl;
        cout << "4. 치즈버거세트(5700)" << endl;
        cout << "5. 에그버거세트(5200)" << endl;
        cout << "===========================================" << endl;
        cin >> hambergerset;
        setmenu_price(hambergerset);
    }

    void hamburgerMenu() {
        int hamburgerChoice;
        int MenuType;
        cout << "============[메뉴선택]============" << endl;
        cout << "1) 불고기버거(3500)" << endl;
        cout << "2) 새우버거(3000)" << endl;
        cout << "3) 치킨버거(4000)" << endl;
        cout << "4) 치즈버거(3700)" << endl;
        cout << "5) 에그버거(3200)" << endl;
        cout << "==================================\n";
        cin >> hamburgerChoice;
        if (hamburgerChoice != 0) {
            switch (hamburgerChoice) {
            case 1:
                selectedMenu.push_back("불고기버거(3500)");
                totalPrice += 3500;
                break;
            case 2:
                selectedMenu.push_back("새우버거(3000)");
                totalPrice += 3000;
                break;
            case 3:
                selectedMenu.push_back("치킨버거(4000)");
                totalPrice += 4000;
                break;
            case 4:
                selectedMenu.push_back("치즈버거(3700)");
                totalPrice += 3700;
                break;
            case 5:
                selectedMenu.push_back("에그버거(3200)");
                totalPrice += 3200;
                break;
            default:
                cout << "다시 입력하세요" << endl;
            }
        }
        cout << "=========[단품/세트 선택]============" << endl;
        cout << "1. 단품   2. 세트" << endl;
        cout << "===============================" << endl;
        cin >> MenuType;
        switch (MenuType) {
        case 1:
            hamburger_price(hamburgerChoice);
            break;
        case 2:
            setMenu();
        default:
            cout << "=========================================" << endl;
            cout << " 다시 선택해주세요" << endl;
            cout << "=========================================" << endl;
        }
        printSelectedMenu();
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
        if (sideMenu != 0) {
            switch (sideMenu) {
            case 1:
                selectedMenu.push_back("감자튀김(1200)");
                totalPrice += 1200;
                break;
            case 2:
                selectedMenu.push_back("치킨너겟(1500)");
                totalPrice += 1500;
                break;
            case 3:
                selectedMenu.push_back("치즈스틱(1000)");
                totalPrice += 1000;
                break;
            case 4:
                selectedMenu.push_back("치즈감자(2000)");
                totalPrice += 2000;
                break;
            default:
                cout << "다시 입력하세요" << endl;
            }
        }
        printSelectedMenu();
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
        if (drinkMenu != 0) {
            switch (drinkMenu) {
            case 1:
                selectedMenu.push_back("콜라(1500)");
                totalPrice += 1500;
                break;
            case 2:
                selectedMenu.push_back("제로콜라(1500)");
                totalPrice += 1500;
                break;
            case 3:
                selectedMenu.push_back("사이다(1500)");
                totalPrice += 1500;
                break;
            case 4:
                selectedMenu.push_back("오렌지주스(1200)");
                totalPrice += 1200;
                break;
            case 5:
                selectedMenu.push_back("물(1000)");
                totalPrice += 1000;
                break;
            default:
                cout << "다시 입력하세요" << endl;
            }
        }
        printSelectedMenu();
    }
};

HamburgerSystem hb; //클래스 CafeOrderSystem를 cafe로 선언

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
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //정수형 변수 bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200로 선언

    if (n == 0) //if문 n = 0 일때
    {
        cout << "종료" << endl; //종료 출력
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            pr.price_menu(bulgogi); //불고기버거의 값을 price_menu에 저장
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

void setmenu_price(int n) //setmenu_price함수 작성
{
    int Bulgogiset = 5500, shrimpset = 5000, chickenset = 6000, cheeseset = 5700, eggset = 5200; //정수형 변수 int Bulgogiset = 5500, shrimpset = 5000, chickenset = 6000, cheeseset = 5700, eggset = 52000 로 선언

    if (n == 0) //if문 n = 0 일때
    {
        cout << "종료" << endl; //종료 출력
    }

    while (n != 0) //n = 0 이 아닐 때
    {
        switch (n) //switch문
        {
        case 1: //1이 눌렸을 때
            pr.price_menu(Bulgogiset); //불고기버거세트의 값을 price_menu에 저장
            break; //switch문 나가기
        case 2: //2가 눌렸을 때
            pr.price_menu(shrimpset); //새우버거새트의 값을 price_menu에 저장
            break; //switch문 나가기
        case 3: //3이 눌렸을 때
            pr.price_menu(chickenset); //치킨버거세트의 값을 price_menu에 저장
            break; //switch문 나가기
        case 4: //3이 눌렸을 때
            pr.price_menu(cheeseset); //치즈버거세트의 값을 price_menu에 저장
            break; //switch문 나가기
        case 5: //3이 눌렸을 때
            pr.price_menu(eggset); //에그버거세트의 값을 price_menu에 저장
            break; //switch문 나가기
        default: //위의 숫자를 입력한게 아니라면
            cout << "다시 입력하세요" << endl; // 다시 입력하세요 출력
        }

        break; //while문 나가기
    }
}


int main(void)//main함수 시작
{
    hb.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름
    return 0;
}