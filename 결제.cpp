#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include"테두리.h"
#include"조작.h"
#include"메뉴.h"
#include"결제.h"
using namespace std;

//--------------------[결제 클래스]-----------------------

    void change::Calculator_change(int g) { //거스름돈을 계산하고 출력하는 멤버 함수 선언
        if (g >= 0) {
            system("cls");
            outline();
            gotoxy(15, 11);
            cout << "감사합니다! 맛있게 드세요.";
            gotoxy(15, 12);
            cout << "잔돈은 다음과 같습니다."; //감사합니다! 맛있게 드세요. 잔돈은 다음과 같습니다. 출력
            gotoxy(15, 13);
            cout << "오천원 " << g / 5000 << "장" << endl; //오천원 개수 출력
            g %= 5000;
            gotoxy(15, 14);
            cout << "천원 " << g / 1000 << "장" << endl; //천원 개수 출력
            g %= 1000;
            gotoxy(15, 15);
            cout << "오백원 " << g / 500 << "개" << endl; //오백원 개수 출력
            g %= 500;
            gotoxy(15, 16);
            cout << "백원 " << g / 100 << "개" << endl; //백원 개수 출력
            cout << "\n\n"; //줄 바꿈
            for (int i = 10; i > 0; i--) //10초 카운트다운 반복문
            {
                gotoxy(15, 17);
                cout << i << "초 뒤 처음 화면으로 돌아갑니다."; //남은 시간 출력
                Sleep(1000); //1초 딜레이
            }
            hb.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름

        }
        else {
            g = -g; //g에 -g를 넣어 음수였던 g를 양수로 바꿈
            gotoxy(15, 10);
            cout << g << "원이 부족합니다.\n"; //(부족한 잔액의 액수)원이 부족합니다. 출력
            for (int i = 5; i > 0; i--) //5초 카운트다운 반복문
            {
                gotoxy(15, 17);
                cout << i << "초 뒤 처음 화면으로 돌아갑니다."; //남은 시간 출력
                Sleep(1000); //1초 딜레이
            }
            hb.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름
        }
    }

    void price2::my_mony(int m) { //my_mony 함수 생성
        mony = m; //mony에 m 저장
    }

    void price2::price_menu2(int p) { //price_menu 함수 생성
        g = mony - p;  //계산 결과를 g에 저장
        Calculator_change(g); //change 클래스의 Calculator_change 함수 호출
    }
    price2 p2; //클래스 price2를 p2이름으로 정의

void ment() {
    gotoxy(15, 13);
    cout << "결제가 완료 되었습니다.          \n";
    gotoxy(15, 15);
    cout << "\n\n"; //줄 바꿈
    for (int i = 10; i > 0; i--) //10초 카운트다운 반복문
    {
        gotoxy(15, 16);
        cout << i << "초 뒤 처음 화면으로 돌아갑니다."; //남은 시간 출력
        Sleep(1000); //1초 딜레이
    }
    hb.run(); //클래스 CafeOrderSystem에 있는 run()함수 부름
}

    void Price::price_menu(int p) { //price_menu 함수 생성
        int payway, cash; // 결제 방법을 선택하여 저장할 정수방 pzayway와 현금 결제시 금액을 저장할 cash 생성

        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[결제선택]" << endl;
        gotoxy(15, 11);
        cout << "1. 현금" << endl;
        gotoxy(15, 12);
        cout << "2. 카드" << endl;
        gotoxy(15, 13);
        cout << "3. 삼성페이/애플페이" << endl;
        gotoxy(15, 14);
        cout << "0. 결제 취소" << endl;
        gotoxy(15, 15);
        cout << "==================================\n";
        gotoxy(15, 16);
        cout << "결제방법을 선택해주세요: ";
        cin >> payway; //결제 방법을 payway에 저장

        while (1) //반복문
        {
            if (payway == 1) //현금 결제시
            {
                system("cls");
                outline();
                gotoxy(15, 11);
                cout << "현금 결제를 선택하셨습니다.\n";
                gotoxy(15, 12);
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                gotoxy(15, 13);
                cout << "금액을 투입해주세요.";
                cin >> cash; //금액을 cash에 삽입
                p2.my_mony(cash); //p2클래스의 my_mony함수에 cash를 삽입
                p2.price_menu2(p); ////p2클래스의 price_menu2함수에 음식의 금액을 삽입
                break;
            }
            else if (payway == 2) //카드 결제시
            {
                system("cls");
                outline();
                gotoxy(15, 11);
                cout << "카드 결제를 선택하셨습니다.\n";
                gotoxy(15, 12);
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                gotoxy(15, 13);
                cout << "카드를 투입해주세요.\n";
                Sleep(5000); //5초 딜레이
                ment(); //ment출력
                break;
            }
            else if (payway == 3) //페이 결제시
            {
                system("cls");
                outline();
                gotoxy(15, 11);
                cout << "삼성페이/애플페이를 선택하셨습니다.\n";
                gotoxy(15, 12);
                cout << "금액은 " << p << " 원 입니다.\n"; //p에 주문한 음식의 금액을 삽입
                gotoxy(15, 13);
                cout << "핸드폰을 리더기에 대주세요.\n";
                Sleep(5000); //5초 딜레이
                ment(); //ment출력
                break;
            }
            else if (payway == 0) //종료 결제시
            {
                gotoxy(15, 10);
                cout << "결제를 취소하셨습니다.\n";
                Sleep(5000); //5초 딜레이
                hb.run(); //첫 시작 화면 부르기
                break;
            }
        }
    }
    Price pr; //price 클래스를 pr로 선언

    int c;
    // 선택된 메뉴와 총 가격을 저장할 변수 추가
    vector<string> selectedMenu = {}; // 선택된 메뉴 목록을 저장하는 벡터
    int totalPrice = 0; // 총 가격
    int price; //totalPrice를 저장할 변수

    void Shopping_basket::printSelectedMenu(int p) { // 선택된 메뉴 출력 함수
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[선택한 메뉴]" << endl;
        totalPrice += p;
        gotoxy(15, 13);
        for (int i = 0; i < selectedMenu.size(); i++) { // 벡터의 크기만큼 반복
            gotoxy(15, 13 - i); // y좌표를 i만큼 감소시킴
            cout << selectedMenu[i] << endl; // 벡터의 i번째 원소 출력
        }
        gotoxy(15, 14);
        cout << "총 가격: " << totalPrice << "원" << endl;
        gotoxy(15, 15);
        cout << "=====================================" << endl;
        gotoxy(15, 16);
        cout << "1. 결제    2. 추가하기   : ";
        cin >> c;

        switch (c) {
        case 1:
            selectedMenu.clear(); // 벡터의 모든 원소 삭제
            price = totalPrice;
            totalPrice = 0; // 총 가격을 0으로 초기화
            pr.price_menu(price);
            break;
        case 2:
            hb.MenuOrder();
            break;
        }
    }

    Shopping_basket sb; //클래스 Shopping_basket를 sb로 선언