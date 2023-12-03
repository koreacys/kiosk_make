#include <iostream>
#include <windows.h>
#include"관리자_모드.h"
#include"테두리.h"
#include"조작.h"
#include"메뉴.h"
using namespace std;

// 키보드 조작
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // 선택

extern int Nbulgogi, Nshrimp, Nchicken, Ncheese, Negg;
extern int Npotato, Nnuggets, Ncstick, Ncpotatoes;
extern int Ncola, Nzero_cola, Nsoda, Norange, Nwater;
extern int sum1, sum2, sum3;

int menucode;

//----------------------[관리자 모드]----------------------
void manager() { //관리자 모드 함수
    while (1) { //무한반복 함수
        menucode = ShowMode(); // 관리자 모드 화면 출력
        if (menucode == 0) {
            ShowRemain(); // 재고 관리 화면 출력
        }
        else if (menucode == 1) {
            ShowManage(); // 매출 관리 화면 출력
        }
        else if (menucode == 2) {
            hb.run(); // 메인 화면으로 돌아가기
            return;
        }
    }
}

int ShowMode() { // 관리자 모드 화면
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[관리자 모드]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1. 재고 관리" << endl;
    gotoxy(15, 12);
    cout << "2. 매출 관리" << endl;
    gotoxy(15, 13);
    cout << "0. 돌아가기" << endl;
    gotoxy(15, 14);
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
            if (y < 13) {
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

void ShowRemain() { // 재고 관리
    int choice; // 사용자가 선택한 메뉴 번호
    int amount; // 재고를 추가하거나 줄일 수량
    system("cls");
    outline();

    gotoxy(23, 1);
    cout << "[재고 관리]" << endl; // 문자 출력
    gotoxy(15, 11);
    cout << "각 메뉴의 남은 수량은 다음과 같습니다." << endl; // 문자 출력
    gotoxy(15, 12);
    cout << "01) 불고기버거: " << Nbulgogi << endl; // 불고기버거의 남은 수량 출력
    gotoxy(15, 13);
    cout << "02) 새우버거: " << Nshrimp << endl; // 새우버거의 남은 수량 출력
    gotoxy(15, 14);
    cout << "03) 치킨버거: " << Nchicken << endl; // 치킨버거의 남은 수량 출력
    gotoxy(15, 15);
    cout << "04) 치즈버거: " << Ncheese << endl; // 치즈버거의 남은 수량 출력
    gotoxy(15, 16);
    cout << "05) 에그버거: " << Negg << endl; // 에그버거의 남은 수량 출력
    gotoxy(15, 17);
    cout << "06) 감자튀김: " << Npotato << endl; // 감자튀김의 남은 수량 출력
    gotoxy(15, 18);
    cout << "07) 치킨너겟: " << Nnuggets << endl; // 치킨너겟의 남은 수량 출력
    gotoxy(15, 19);
    cout << "08) 치즈스틱: " << Ncstick << endl; // 치즈스틱의 남은 수량 출력
    gotoxy(15, 20);
    cout << "09) 치즈감자: " << Ncpotatoes << endl; // 치즈감자의 남은 수량 출력
    gotoxy(15, 21);
    cout << "10) 콜라: " << Ncola << endl; // 콜라의 남은 수량 출력
    gotoxy(15, 22);
    cout << "11) 제로콜라: " << Nzero_cola << endl; // 제로콜라의 남은 수량 출력
    gotoxy(15, 23);
    cout << "12) 사이다: " << Nsoda << endl; // 사이다의 남은 수량 출력
    gotoxy(15, 24);
    cout << "13) 오렌지주스: " << Norange << endl; // 오렌지주스의 남은 수량 출력
    gotoxy(15, 25);
    cout << "14) 물: " << Nwater << endl; // 물의 남은 수량 출력
    gotoxy(15, 26);
    cout << "00) 종료" << endl;
    gotoxy(15, 27);
    cout << "==================================" << endl; // 문자 출력

    while (1) { // 무한반복
        gotoxy(15, 28);
        cout << "재고를 추가하거나 줄일" << endl; // 문자 출력
        gotoxy(15, 29);
        cout << "메뉴의 번호를 입력하세요." << endl;
        gotoxy(15, 30);
        cout << "===================================" << endl;
        gotoxy(15, 31);
        cout << "번호 입력 : ";
        cin >> choice; // choice에 입력한 문자 넣기
        if (choice == 0) { // choice가 0이면
            gotoxy(15, 11);
            cout << "===================================" << endl;
            gotoxy(15, 12);
            cout << "관리자 모드를 종료합니다." << endl; // 문자 출력
            gotoxy(15, 13);
            cout << "===================================" << endl;
            manager();
            break; // while문 나가기
        }
        else if (choice < 1 || choice > 14) { // choice가 1보다 작거나 14보다 크면
            /*gotoxy(15, 31);
            cout << "===================================" << endl;*/
            gotoxy(15, 30);
            cout << "잘못된 번호입니다. 다시 입력하세요." << endl; // 문자 출력
            gotoxy(15, 31);
            cout << "===================================" << endl;
            continue; // while문의 처음으로 돌아가기
        }
        else { // choice가 1부터 14 사이면
            gotoxy(15, 31);
            cout << "재고를 추가하려면 양수," << endl; // 문자 출력
            gotoxy(15, 32);
            cout << "줄이려면 음수를 입력하세요." << endl;
            gotoxy(15, 33);
            cout << "(0을 누르면 종료 됩니다.)" << endl;
            gotoxy(15, 34);
            cout << "===================================" << endl;
            gotoxy(15, 35);
            cout << "재고 입력 : ";
            cin >> amount; // amount에 입력한 문자 넣기
            switch (choice) { // switch문에 choice 넣기
            case 1: // choice가 1이면
                Nbulgogi += amount; // 불고기버거의 남은 수량에 amount 더하기
                if (Nbulgogi < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nbulgogi -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 2: // choice가 2이면
                Nshrimp += amount; // 새우버거의 남은 수량에 amount 더하기
                if (Nshrimp < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nshrimp -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 3: // choice가 3이면
                Nchicken += amount; // 치킨버거의 남은 수량에 amount 더하기
                if (Nchicken < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nchicken -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 4: // choice가 4이면
                Ncheese += amount; // 치즈버거의 남은 수량에 amount 더하기
                if (Ncheese < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Ncheese -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 5: // choice가 5이면
                Negg += amount; // 에그버거의 남은 수량에 amount 더하기
                if (Negg < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Negg -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 6: // choice가 6이면
                Npotato += amount; // 감자튀김의 남은 수량에 amount 더하기
                if (Npotato < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Npotato -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 7: // choice가 7이면
                Nnuggets += amount; // 치킨너겟의 남은 수량에 amount 더하기
                if (Nnuggets < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nnuggets -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 8: // choice가 8이면
                Ncstick += amount; // 치즈스틱의 남은 수량에 amount 더하기
                if (Ncstick < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Ncstick -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 9: // choice가 9이면
                Ncpotatoes += amount; // 치즈감자의 남은 수량에 amount 더하기
                if (Ncpotatoes < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Ncpotatoes -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 10: // choice가 10이면
                Ncola += amount; // 콜라의 남은 수량에 amount 더하기
                if (Ncola < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Ncola -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 11: // choice가 11이면
                Nzero_cola += amount; // 제로콜라의 남은 수량에 amount 더하기
                if (Nzero_cola < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nzero_cola -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 12: // choice가 12이면
                Nsoda += amount; // 사이다의 남은 수량에 amount 더하기
                if (Nsoda < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nsoda -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break;
            case 13: // choice가 13이면
                Norange += amount; // 오렌지 주스의 남은 수량에 amount 더하기
                if (Norange < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Norange -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 14: // choice가 14이면
                Nwater += amount; // 물의 남은 수량에 amount 더하기
                if (Nwater < 0) {
                    gotoxy(15, 35);
                    cout << "남은 개수가 음수 입니다." << endl;
                    Nwater -= amount; // 남은 수량에 amount 빼기 (원래대로 되돌리기)
                    for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                    {
                        gotoxy(15, 36);
                        cout << i << "초 뒤 이전 화면으로 돌아갑니다."; //남은 시간 출력
                        Sleep(1000); //1초 딜레이
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch문 나가기
            case 0://choice가 0이면
                ShowMode();
            }
        }
    }
}

void ShowManage() {
    while (1) { //무한반복 함수
        menucode = ShowManageMode(); // 매출 관리 화면 출력
        if (menucode == 0) {
            ShowBurger(); // 버거 매출 화면 출력
        }
        else if (menucode == 1) {
            ShowSide(); // 사이드 메뉴 매출 화면 출력
        }
        else if (menucode == 2) {
            ShowDrink(); // 음료 매출 화면 출력
        }
        else if (menucode == 3) {
            ShowSum(); // 매출 총합 화면 출력
        }
        else if (menucode == 4) {
            hb.run(); // 메인 화면으로 돌아가기
            return;
        }
    }
}

void ShowBurger() {
    while (1) {
        menucode = ShowBurgerManage();
        if (menucode == 0) {
            ShowManage();
        }
    }
}

void ShowSide() {
    while (1) {
        menucode = ShowSideManage();
        if (menucode == 0) {
            ShowManage();
        }
    }
}

void ShowDrink() {
    while (1) {
        menucode = ShowDrinkManage();
        if (menucode == 0) {
            ShowManage();
        }
    }
}

void ShowSum() {
    while (1) {
        menucode = ShowSumSale();
        if (menucode == 0) {
            ShowManage();
        }
    }
}

int ShowManageMode() { // 매출 관리 화면
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[매출 관리]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1. 버거 매출" << endl;
    gotoxy(15, 12);
    cout << "2. 사이드 메뉴 매출" << endl;
    gotoxy(15, 13);
    cout << "3. 음료 매출" << endl;
    gotoxy(15, 14);
    cout << "4. 매출 총합" << endl;
    gotoxy(15, 15);
    cout << "0. 돌아가기" << endl;
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
            return y - 11;
        }
        }
    }
}

int ShowBurgerManage() { // 버거 매출 화면 
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[버거 매출]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "햄버거 매출: " << sum1 << endl; // sum1
    gotoxy(15, 12);
    cout << "0. 돌아가기" << endl;
    gotoxy(15, 13);
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
            if (y < 12) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 12;
        }
        }
    }

}

int ShowSideManage() { // 사이드 매출 화면
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[사이드 매출]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "사이드 매출: " << sum2 << endl; // sum2
    gotoxy(15, 12);
    cout << "0. 돌아가기" << endl;
    gotoxy(15, 13);
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
            if (y < 12) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 12;
        }
        }
    }
}

int ShowDrinkManage() { // 음료 매출 화면
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[음료 매출]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "음료 매출: " << sum3 << endl; // sum3
    gotoxy(15, 12);
    cout << "0. 돌아가기" << endl;
    gotoxy(15, 13);
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
            if (y < 12) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 12;
        }
        }
    }
}

int ShowSumSale() { // 전 메뉴 총합 매출 화면
    int x = 14;
    int y = 11;
    int sum4 = sum1 + sum2 + sum3;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[매출 총합]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "매출 총합은: " << sum4 << "원 입니다."; // allsum
    gotoxy(15, 12);
    cout << "0. 돌아가기" << endl;
    gotoxy(15, 13);
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
            if (y < 12) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            return y - 12;
        }
        }
    }
}