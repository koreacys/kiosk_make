#include <iostream>
#include <windows.h>
#include"�׵θ�.h"
#include"����.h"
#include"�޴�.h"
#include"����.h"
#include"�Ŵ���.h"
using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // ����


    void HamburgerSystem::run() { //run �Լ� �ۼ�
        while (1) { //���ѹݺ� �Լ�
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
        while (1) { //���ѹݺ� �Լ�
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
        while (1) { //���ѹݺ� �Լ�
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
        cout << "3. ����" << endl; // 0���� ���� �ǵ����� Ű Ȱ��ȭ ��Ű�� ��
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
        cout << "[��Ʈ/��ǰ ����]\n"; // ��� �κ� �Լ��� ������
        gotoxy(15, 10);
        cout << "===============================\n";
        gotoxy(15, 11);
        cout << "    1.��Ʈ       2.��ǰ\n";
        gotoxy(15, 12);
        cout << "===============================\n";
    }

    void HamburgerSystem::sideMenu() {
        int sideMenu;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[�޴�����]" << endl;
        gotoxy(15, 11);
        cout << "1) ����Ƣ��(1200)" << endl;
        gotoxy(15, 12);
        cout << "2) ġŲ�ʰ�(1500)" << endl;
        gotoxy(15, 13);
        cout << "3) ġ�ƽ(1000)" << endl;
        gotoxy(15, 14);
        cout << "4) ġ���(2000)" << endl;
        gotoxy(15, 15);
        cout << "==================================\n";
        gotoxy(15, 16);
        cout << "�޴� ���� : ";
        cin >> sideMenu;
        side_price(sideMenu);
    }

    void HamburgerSystem::drinkMenu() {
        int drinkMenu;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[�޴�����]" << endl;
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
        cout << "==================================\n";
        gotoxy(15, 16);
        cout << "�޴� ���� : ";
        cin >> drinkMenu;
        drink_price(drinkMenu);
    }

    HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����