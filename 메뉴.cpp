#include <iostream>
#include <windows.h>
#include"테두리.h"
#include"조작.h"
#include"메뉴.h"
#include"가격.h"
#include"관리자_모드.h"
#include"결제.h"

using namespace std;

// 키보드 조작
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // 선택


void HamburgerSystem::run() { //run 함수 작성
    while (1) { //무한반복 함수
        menucode = ShowMain(); // 메인화면 출력
        if (menucode == 0 || menucode == 1) {
            MenuOrder();
        }
        else if (menucode == 2) {
            manager();
        }
        else if (menucode == 3) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::MenuOrder() {
    while (1) { //무한반복 함수
        menucode = ShowMenu(); // 햄버거, 사이드 메뉴, 음료 출력 화면
        if (menucode == 0) {
            HamOrder(); // 햄버거 선택
        }
        else if (menucode == 1) {
            SideOrder(); // 사이드 메뉴 선택
        }
        else if (menucode == 2) {
            DrinkOrder(); // 음료 선택
        }
        else if (menucode == 3) {
            run();
            return;
        }
    }
}

void HamburgerSystem::HamOrder() {
    while (1) { //무한반복 함수
        menucode = HamburgerMenu(); // 햄버거 메뉴 출력 화면
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            SetOrSingle(); // 세트, 단품 선택지 
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::SetOrSingle() {
    while (1) { //무한반복 함수
        menucode = ChoiceSet(); // 세트 선택 출력 화면
        if (menucode == 0) {
            ChangeDrinkMenu(); // 음료로 넘어가기
        }
        else if (menucode == 5) {
            exit(0); // 장바구니
            return;
        }
    }
}

void HamburgerSystem::ChangeDrinkMenu() {
    while (1) {
        menucode = ChangeDrink(); // 음료 변경 출력 화면
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            ChangeSideMenu(); // 사이드로 넘어가기
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::ChangeSideMenu() {
    while (1) {
        menucode = ChangeSide(); // 사이드 변경 출력 화면
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3) {
            // sb.printSelectedMenu(); // 장바구니로 넘어가기
        }
        else if (menucode == 4) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::SideOrder() {
    while (1) { //무한반복 함수
        menucode = SideMenu(); // 사이드 메뉴 출력 화면
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3) {
            SetOrSingle(); // 장바구니로 가게 하기
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}
void HamburgerSystem::DrinkOrder() {
    while (1) { //무한반복 함수
        menucode = DrinkMenu(); // 음료 출력 화면
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            SetOrSingle(); // 장바구니로 가게 하기
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

int HamburgerSystem::ShowMain() {  //ShowMenu() 함수 선언
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[메인화면]" << endl; //문자 출력
    gotoxy(15, 10);
    cout << "==============================" << endl; //문자 출력
    gotoxy(15, 11);
    cout << "1.포장" << endl;
    gotoxy(15, 12);
    cout << "2.매장식사" << endl;
    gotoxy(15, 13);
    cout << "999. 관리자 모드" << endl;
    gotoxy(15, 14);
    cout << "0. 종료" << endl;
    gotoxy(15, 15);
    cout << "==============================" << endl; //문자 출력
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 14) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 11;
        }
        }
    }
}

int HamburgerSystem::ShowMenu() {
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[메뉴선택]" << endl; // 문자 출력
    gotoxy(15, 10);
    cout << "==================================\n"; // 문자 출력
    gotoxy(15, 11);
    cout << "1. 햄버거" << endl;
    gotoxy(15, 12);
    cout << "2. 사이드 메뉴" << endl;
    gotoxy(15, 13);
    cout << "3. 음료" << endl;
    gotoxy(15, 14);
    cout << "0. 처음으로" << endl; // 처음으로 돌아가기
    gotoxy(15, 15);
    cout << "==================================\n"; // 문자 출력
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 14) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 11;
        }
        }
    }
}

int hamburgerChoice;
int HamburgerSystem::HamburgerMenu() {
    int x = 14;
    int y = 11;

    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[메뉴선택]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n"; // 문자 출력
    gotoxy(15, 11);
    cout << "1) 불고기버거(3500)" << endl;
    gotoxy(15, 12);
    cout << "2) 새우버거(3000)" << endl;
    gotoxy(15, 13);
    cout << "3) 치킨버거(4000)" << endl;
    gotoxy(15, 14);
    cout << "4) 치즈버거(3700)" << endl;
    gotoxy(15, 15);
    cout << "5) 에그버거(3200)" << endl;
    gotoxy(15, 16);
    cout << "6) 돌아가기" << endl;
    gotoxy(15, 17);
    cout << "==================================\n";
    // cin >> hamburgerChoice;
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 16) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            if (y - 10 <= 5) {
                hamburgerChoice = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
                ChoiceSet();
            }
            else if (y - 10 == 6)
                MenuOrder();
        }
        }
    }
}


int HamburgerSystem::SideMenu() { // 변경
    int x = 14;
    int y = 11;
    int sideMenu; // int sideMenu;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[메뉴선택]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n"; // 문자 출력
    gotoxy(15, 11);
    cout << "1) 감자튀김(1200)" << endl;
    gotoxy(15, 12);
    cout << "2) 치킨너겟(1500)" << endl;
    gotoxy(15, 13);
    cout << "3) 치즈스틱(1000)" << endl;
    gotoxy(15, 14);
    cout << "4) 치즈감자(2000)" << endl;
    gotoxy(15, 15);
    cout << "5) 돌아가기" << endl;
    gotoxy(15, 16);
    cout << "==================================\n";
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 15) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            if (y - 10 <= 4) {
                sideMenu = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
                side_price(sideMenu); // 변수를 반환
            }
            else if (y - 10 == 5)
                MenuOrder();
        }
        }
    }
}

int HamburgerSystem::DrinkMenu() { // 변경
    int x = 14;
    int y = 11;
    int drinkMenu;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[메뉴선택]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1) 콜라(1500)" << endl;
    gotoxy(15, 12);
    cout << "2) 제로콜라(1500)" << endl;
    gotoxy(15, 13);
    cout << "3) 사이다(1500)" << endl;
    gotoxy(15, 14);
    cout << "4) 오렌지주스(1200)" << endl;
    gotoxy(15, 15);
    cout << "5) 물(1000)" << endl;
    gotoxy(15, 16);
    cout << "6) 돌아가기" << endl;
    gotoxy(15, 17);
    cout << "==================================\n";
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 16) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            if (y - 10 <= 5) {
                drinkMenu = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
                drink_price(drinkMenu); // 변수를 반환
            }
            else if (y - 10 == 6)
                MenuOrder();
        }
        }
    }
}

int HamburgerSystem::ChoiceSet() { // 세트, 단품 선택
    int x = 14;
    int y = 11;
    int setchoice;

    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[세트/단품 선택]\n";
    gotoxy(15, 10);
    cout << "===============================\n";
    gotoxy(15, 11);
    cout << "    1.세트 (2000원 추가)\n";
    gotoxy(15, 12);
    cout << "    2.단품\n";
    gotoxy(15, 13);
    cout << "===============================\n";
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 12) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            setchoice = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
            if (setchoice == 1) {
                hamset_price(hamburgerChoice);
                ChangeDrink(); // 음료 변경
            }
            else
            {
                hamburger_price(hamburgerChoice);
            }
        }
        }
    }
}
int HamburgerSystem::ChangeDrink() {
    int x = 14;
    int y = 11;
    int setdrink;

    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[음료변경]\n";
    gotoxy(15, 10);
    cout << "=====================\n";
    gotoxy(15, 11);
    cout << "1.콜라(+0)\n";
    gotoxy(15, 12);
    cout << "2.제로 콜라(+0)\n";
    gotoxy(15, 13);
    cout << "2.사이다(+0)\n";
    gotoxy(15, 14);
    cout << "3.오렌지주스(+500)\n";
    gotoxy(15, 15);
    cout << "4.물(+0)\n";
    gotoxy(15, 16);
    cout << "=====================\n";
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 15) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            setdrink = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
            set_drink(setdrink); // 변수를 반환
            ChangeSide();
        }
        }
    }
}

int HamburgerSystem::ChangeSide() {
    int x = 14;
    int y = 11;
    int setside;

    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[사이드변경]\n";
    gotoxy(15, 10);
    cout << "=======================\n";
    gotoxy(15, 11);
    cout << "1.감자튀김(+0)\n";
    gotoxy(15, 12);
    cout << "2.치킨너겟(+500) \n";
    gotoxy(15, 13);
    cout << "3.치즈스틱(+500)\n";
    gotoxy(15, 14);
    cout << "4.치즈감자(+700)\n";
    gotoxy(15, 15);
    cout << "=======================\n";
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 11) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 14) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            setside = y - 10; // '>'가 가리키는 메뉴의 번호를 변수에 저장
            set_side(setside); // 변수를 반환
        }
        }
    }
}

void HamburgerSystem::HBM() {
    HamOrder();
}

void HamburgerSystem::SM() {
    SideMenu();
}

void HamburgerSystem::DM() {
    DrinkMenu();
}

void HamburgerSystem::CS() {
    ChangeSide();
}

void HamburgerSystem::CD() {
    ChangeDrink();
}

HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언