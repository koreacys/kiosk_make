#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// 키보드 조작
#define UP 0 
#define DOWN 1
#define SUBMIT 4 // 선택

int KeyControl() { // w,a,s,d 키 입력 받는 함수
    char temp = _getch();

    if (temp == 'w' || temp == 'W') {
        return UP;
    }
    else if (temp == 's' || temp == 'S') {
        return DOWN;
    }
    else if (temp == ' ') {
        return SUBMIT; // 스페이스바(공백)이 선택 버튼
    }
}

// 커서의 위치를 이동하는 함수
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = 0;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}
