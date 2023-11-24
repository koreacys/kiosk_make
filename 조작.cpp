#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // ����

int KeyControl() { // w,a,s,d Ű �Է� �޴� �Լ�
    char temp = _getch();

    if (temp == 'w' || temp == 'W') {
        return UP;
    }
    else if (temp == 'a' || temp == 'A') {
        return LEFT;
    }
    else if (temp == 's' || temp == 'S') {
        return DOWN;
    }
    else if (temp == 'd' || temp == 'D') {
        return RIGHT;
    }
    else if (temp == ' ') {
        return SUBMIT; // �����̽���(����)�� ���� ��ư
    }
}

// Ŀ���� ��ġ�� �̵��ϴ� �Լ�
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
