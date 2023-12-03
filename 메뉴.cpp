#include <iostream>
#include <windows.h>
#include"�׵θ�.h"
#include"����.h"
#include"�޴�.h"
#include"����.h"
#include"������_���.h"
#include"����.h"

using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // ����


void HamburgerSystem::run() { //run �Լ� �ۼ�
    while (1) { //���ѹݺ� �Լ�
        menucode = ShowMain(); // ����ȭ�� ���
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
    while (1) { //���ѹݺ� �Լ�
        menucode = ShowMenu(); // �ܹ���, ���̵� �޴�, ���� ��� ȭ��
        if (menucode == 0) {
            HamOrder(); // �ܹ��� ����
        }
        else if (menucode == 1) {
            SideOrder(); // ���̵� �޴� ����
        }
        else if (menucode == 2) {
            DrinkOrder(); // ���� ����
        }
        else if (menucode == 3) {
            run();
            return;
        }
    }
}

void HamburgerSystem::HamOrder() {
    while (1) { //���ѹݺ� �Լ�
        menucode = HamburgerMenu(); // �ܹ��� �޴� ��� ȭ��
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            SetOrSingle(); // ��Ʈ, ��ǰ ������ 
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::SetOrSingle() {
    while (1) { //���ѹݺ� �Լ�
        menucode = ChoiceSet(); // ��Ʈ ���� ��� ȭ��
        if (menucode == 0) {
            ChangeDrinkMenu(); // ����� �Ѿ��
        }
        else if (menucode == 5) {
            exit(0); // ��ٱ���
            return;
        }
    }
}

void HamburgerSystem::ChangeDrinkMenu() {
    while (1) {
        menucode = ChangeDrink(); // ���� ���� ��� ȭ��
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            ChangeSideMenu(); // ���̵�� �Ѿ��
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::ChangeSideMenu() {
    while (1) {
        menucode = ChangeSide(); // ���̵� ���� ��� ȭ��
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3) {
            // sb.printSelectedMenu(); // ��ٱ��Ϸ� �Ѿ��
        }
        else if (menucode == 4) {
            exit(0);
            return;
        }
    }
}

void HamburgerSystem::SideOrder() {
    while (1) { //���ѹݺ� �Լ�
        menucode = SideMenu(); // ���̵� �޴� ��� ȭ��
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3) {
            SetOrSingle(); // ��ٱ��Ϸ� ���� �ϱ�
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}
void HamburgerSystem::DrinkOrder() {
    while (1) { //���ѹݺ� �Լ�
        menucode = DrinkMenu(); // ���� ��� ȭ��
        if (menucode == 0 || menucode == 1 || menucode == 2 || menucode == 3 || menucode == 4) {
            SetOrSingle(); // ��ٱ��Ϸ� ���� �ϱ�
        }
        else if (menucode == 5) {
            exit(0);
            return;
        }
    }
}

int HamburgerSystem::ShowMain() {  //ShowMenu() �Լ� ����
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[����ȭ��]" << endl; //���� ���
    gotoxy(15, 10);
    cout << "==============================" << endl; //���� ���
    gotoxy(15, 11);
    cout << "1.����" << endl;
    gotoxy(15, 12);
    cout << "2.����Ļ�" << endl;
    gotoxy(15, 13);
    cout << "999. ������ ���" << endl;
    gotoxy(15, 14);
    cout << "0. ����" << endl;
    gotoxy(15, 15);
    cout << "==============================" << endl; //���� ���
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
    cout << "[�޴�����]" << endl; // ���� ���
    gotoxy(15, 10);
    cout << "==================================\n"; // ���� ���
    gotoxy(15, 11);
    cout << "1. �ܹ���" << endl;
    gotoxy(15, 12);
    cout << "2. ���̵� �޴�" << endl;
    gotoxy(15, 13);
    cout << "3. ����" << endl;
    gotoxy(15, 14);
    cout << "0. ó������" << endl; // ó������ ���ư���
    gotoxy(15, 15);
    cout << "==================================\n"; // ���� ���
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
    cout << "[�޴�����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n"; // ���� ���
    gotoxy(15, 11);
    cout << "1) �Ұ�����(3500)" << endl;
    gotoxy(15, 12);
    cout << "2) �������(3000)" << endl;
    gotoxy(15, 13);
    cout << "3) ġŲ����(4000)" << endl;
    gotoxy(15, 14);
    cout << "4) ġ�����(3700)" << endl;
    gotoxy(15, 15);
    cout << "5) ���׹���(3200)" << endl;
    gotoxy(15, 16);
    cout << "6) ���ư���" << endl;
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
                hamburgerChoice = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
                ChoiceSet();
            }
            else if (y - 10 == 6)
                MenuOrder();
        }
        }
    }
}


int HamburgerSystem::SideMenu() { // ����
    int x = 14;
    int y = 11;
    int sideMenu; // int sideMenu;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[�޴�����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n"; // ���� ���
    gotoxy(15, 11);
    cout << "1) ����Ƣ��(1200)" << endl;
    gotoxy(15, 12);
    cout << "2) ġŲ�ʰ�(1500)" << endl;
    gotoxy(15, 13);
    cout << "3) ġ�ƽ(1000)" << endl;
    gotoxy(15, 14);
    cout << "4) ġ���(2000)" << endl;
    gotoxy(15, 15);
    cout << "5) ���ư���" << endl;
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
                sideMenu = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
                side_price(sideMenu); // ������ ��ȯ
            }
            else if (y - 10 == 5)
                MenuOrder();
        }
        }
    }
}

int HamburgerSystem::DrinkMenu() { // ����
    int x = 14;
    int y = 11;
    int drinkMenu;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[�޴�����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1) �ݶ�(1500)" << endl;
    gotoxy(15, 12);
    cout << "2) �����ݶ�(1500)" << endl;
    gotoxy(15, 13);
    cout << "3) ���̴�(1500)" << endl;
    gotoxy(15, 14);
    cout << "4) �������ֽ�(1200)" << endl;
    gotoxy(15, 15);
    cout << "5) ��(1000)" << endl;
    gotoxy(15, 16);
    cout << "6) ���ư���" << endl;
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
                drinkMenu = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
                drink_price(drinkMenu); // ������ ��ȯ
            }
            else if (y - 10 == 6)
                MenuOrder();
        }
        }
    }
}

int HamburgerSystem::ChoiceSet() { // ��Ʈ, ��ǰ ����
    int x = 14;
    int y = 11;
    int setchoice;

    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[��Ʈ/��ǰ ����]\n";
    gotoxy(15, 10);
    cout << "===============================\n";
    gotoxy(15, 11);
    cout << "    1.��Ʈ (2000�� �߰�)\n";
    gotoxy(15, 12);
    cout << "    2.��ǰ\n";
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
            setchoice = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
            if (setchoice == 1) {
                hamset_price(hamburgerChoice);
                ChangeDrink(); // ���� ����
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
    cout << "[���ắ��]\n";
    gotoxy(15, 10);
    cout << "=====================\n";
    gotoxy(15, 11);
    cout << "1.�ݶ�(+0)\n";
    gotoxy(15, 12);
    cout << "2.���� �ݶ�(+0)\n";
    gotoxy(15, 13);
    cout << "2.���̴�(+0)\n";
    gotoxy(15, 14);
    cout << "3.�������ֽ�(+500)\n";
    gotoxy(15, 15);
    cout << "4.��(+0)\n";
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
            setdrink = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
            set_drink(setdrink); // ������ ��ȯ
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
    cout << "[���̵庯��]\n";
    gotoxy(15, 10);
    cout << "=======================\n";
    gotoxy(15, 11);
    cout << "1.����Ƣ��(+0)\n";
    gotoxy(15, 12);
    cout << "2.ġŲ�ʰ�(+500) \n";
    gotoxy(15, 13);
    cout << "3.ġ�ƽ(+500)\n";
    gotoxy(15, 14);
    cout << "4.ġ���(+700)\n";
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
            setside = y - 10; // '>'�� ����Ű�� �޴��� ��ȣ�� ������ ����
            set_side(setside); // ������ ��ȯ
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

HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����