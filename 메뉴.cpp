#include <iostream>
#include <windows.h>
#include"테두리.h"
#include"조작.h"
#include"메뉴.h"
#include"가격.h"
#include"매니저.h"
using namespace std;

// 키보드 조작
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // 선택


    void HamburgerSystem::run() { //run 함수 작성
        while (1) { //무한반복 함수
            menucode = ShowMain();
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
        int x = 14;
        int y = 11;
        while (1) { //무한반복 함수
            menucode = ShowMenu();
            if (menucode == 0) {
                HamburgerMenu();
            }
            else if (menucode == 1) {
                sideMenu();
            }
            else if (menucode == 2) {
                drinkMenu();
            }
            else if (menucode == 3) {
                exit(0);
                return;
            }
        }
    }

    void HamburgerSystem::HamOrder() {
        int x = 14;
        int y = 11;
        while (1) { //무한반복 함수
            menucode = HamburgerMenu();
            if (menucode == 0) {
                hamburgerMenu();
            }
            else if (menucode == 1) {
                sideMenu();
            }
            else if (menucode == 2) {
                drinkMenu();
            }
            else if (menucode == 3) {
                exit(0);
                return;
            }
        }
    }

    void HamburgerSystem::HBM() {
        hamburgerMenu();
    }

    void HamburgerSystem::SM() {
        sideMenu();
    }

    void HamburgerSystem::DM() {
        drinkMenu();
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
        cout << "3. 음료" << endl; // 0번을 만들어서 되돌리기 키 활성화 시키기 ★
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
    void HamburgerSystem::hamburgerMenu() {
        int setchoice;
        int setdrink;
        int setside;
        int hamburgerChoice;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[세트/단품 선택]\n"; // 출력 부분 함수로 나누기
        gotoxy(15, 10);
        cout << "===============================\n";
        gotoxy(15, 11);
        cout << "    1.세트       2.단품\n";
        gotoxy(15, 12);
        cout << "===============================\n";
    }

    void HamburgerSystem::sideMenu() {
        int sideMenu;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[메뉴선택]" << endl;
        gotoxy(15, 11);
        cout << "1) 감자튀김(1200)" << endl;
        gotoxy(15, 12);
        cout << "2) 치킨너겟(1500)" << endl;
        gotoxy(15, 13);
        cout << "3) 치즈스틱(1000)" << endl;
        gotoxy(15, 14);
        cout << "4) 치즈감자(2000)" << endl;
        gotoxy(15, 15);
        cout << "==================================\n";
        gotoxy(15, 16);
        cout << "메뉴 선택 : ";
        cin >> sideMenu;
        side_price(sideMenu);
    }

    void HamburgerSystem::drinkMenu() {
        int drinkMenu;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[메뉴선택]" << endl;
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
        cout << "==================================\n";
        gotoxy(15, 16);
        cout << "메뉴 선택 : ";
        cin >> drinkMenu;
        drink_price(drinkMenu);
    }

    HamburgerSystem hb; //클래스 HamburgerSystem를 hb로 선언