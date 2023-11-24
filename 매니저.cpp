#include <iostream>
#include <windows.h>
#include"관리자_모드.h"
#include"조작.h"
#include"메뉴.h"
using namespace std;

void manager() { //관리자 모드 함수
    int ManageMode, SaleMode;
    ShowMode(); //관리자 모드
    while (1) { //무한반복 함수
        gotoxy(15, 16);
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
            hb.run();
            break;
        default: //그 무엇도 아니라면
            gotoxy(15, 12);
            cout << "잘못된 선택입니다. 다시 선택하세요." << endl;
        }

        if (ManageMode == 0) { //0 입력시 메뉴 선택으로 돌아가기
            hb.run();
            break; // 탈출
        }

        while (1) { //무한반복 함수

            gotoxy(15, 17);
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
                manager();
                break;
            default: //그 무엇도 아니라면
                gotoxy(15, 18);
                cout << "잘못된 선택입니다." << endl;
                for (int i = 3; i > 0; i--) //3초 카운트다운 반복문
                {
                    gotoxy(15, 19);
                    cout << i << "초 뒤 다시 선택하세요."; //남은 시간 출력
                    Sleep(1000); //1초 딜레이
                }
                ShowManageMode();
            }

            if (SaleMode == 0) {
                hb.run();
                break; // 탈출 
            }
        }
    }
}