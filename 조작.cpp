#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// 키보드 조작
#define UP 0 
#define DOWN 1
#define SUBMIT 4 // 선택

int KeyControl() { // w,a,s,d 키 입력 받는 함수
    char temp = _getch(); // _getch 함수를 사용하여 키보드에서 문자를 읽어옴

    if (temp == 'w' || temp == 'W') { // temp가 w 또는 W이면
        return UP;
    }
    else if (temp == 's' || temp == 'S') { // temp가 s 또는 S이면
        return DOWN;
    }
    else if (temp == ' ') { // temp가 스페이스바(공백)이면
        return SUBMIT; // 스페이스바(공백)이 선택 버튼
    }
}

// 커서의 위치를 이동하는 함수
void gotoxy(int x, int y) {
    COORD pos = { x, y };// COORD 구조체를 사용하여 x, y 좌표를 저장
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);// SetConsoleCursorPosition 함수를 사용하여 콘솔 창의 커서 위치를 pos로 설정
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);// 콘솔 창의 핸들을 얻어옴
    CONSOLE_CURSOR_INFO ConsoleCursor;// CONSOLE_CURSOR_INFO 구조체를 사용하여 커서의 정보를 저장
    ConsoleCursor.bVisible = 0;// 커서의 가시성을 0으로 설정하여 숨김
    ConsoleCursor.dwSize = 1;// 커서의 크기를 1로 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);// SetConsoleCursorInfo 함수를 사용하여 콘솔 창의 커서 정보를 ConsoleCursor로 설정
}
