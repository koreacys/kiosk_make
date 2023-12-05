#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define SUBMIT 4 // ����

int KeyControl() { // w,a,s,d Ű �Է� �޴� �Լ�
    char temp = _getch(); // _getch �Լ��� ����Ͽ� Ű���忡�� ���ڸ� �о��

    if (temp == 'w' || temp == 'W') { // temp�� w �Ǵ� W�̸�
        return UP;
    }
    else if (temp == 's' || temp == 'S') { // temp�� s �Ǵ� S�̸�
        return DOWN;
    }
    else if (temp == ' ') { // temp�� �����̽���(����)�̸�
        return SUBMIT; // �����̽���(����)�� ���� ��ư
    }
}

// Ŀ���� ��ġ�� �̵��ϴ� �Լ�
void gotoxy(int x, int y) {
    COORD pos = { x, y };// COORD ����ü�� ����Ͽ� x, y ��ǥ�� ����
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);// SetConsoleCursorPosition �Լ��� ����Ͽ� �ܼ� â�� Ŀ�� ��ġ�� pos�� ����
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);// �ܼ� â�� �ڵ��� ����
    CONSOLE_CURSOR_INFO ConsoleCursor;// CONSOLE_CURSOR_INFO ����ü�� ����Ͽ� Ŀ���� ������ ����
    ConsoleCursor.bVisible = 0;// Ŀ���� ���ü��� 0���� �����Ͽ� ����
    ConsoleCursor.dwSize = 1;// Ŀ���� ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);// SetConsoleCursorInfo �Լ��� ����Ͽ� �ܼ� â�� Ŀ�� ������ ConsoleCursor�� ����
}
