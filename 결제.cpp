 #include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include"�׵θ�.h"
#include"����.h"
#include"�޴�.h"
#include"����.h"
using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // ����

//--------------------[���� Ŭ����]-----------------------

void change::Calculator_change(int g) { //�Ž������� ����ϰ� ����ϴ� ��� �Լ� ����
    if (g >= 0) {
        system("cls");
        outline();
        gotoxy(15, 11);
        cout << "�����մϴ�! ���ְ� �弼��.";
        gotoxy(15, 12);
        cout << "�ܵ��� ������ �����ϴ�."; //�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�. ���
        gotoxy(15, 13);
        cout << "��õ�� " << g / 5000 << "��" << endl; //��õ�� ���� ���
        g %= 5000;
        gotoxy(15, 14);
        cout << "õ�� " << g / 1000 << "��" << endl; //õ�� ���� ���
        g %= 1000;
        gotoxy(15, 15);
        cout << "����� " << g / 500 << "��" << endl; //����� ���� ���
        g %= 500;
        gotoxy(15, 16);
        cout << "��� " << g / 100 << "��" << endl; //��� ���� ���
        cout << "\n\n"; //�� �ٲ�
        for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
        {
            gotoxy(15, 17);
            cout << i << "�� �� ó�� ȭ������ ���ư��ϴ�."; //���� �ð� ���
            Sleep(1000); //1�� ������
        }
        hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�

    }
    else {
        g = -g; //g�� -g�� �־� �������� g�� ����� �ٲ�
        gotoxy(15, 10);
        cout << g << "���� �����մϴ�.\n"; //(������ �ܾ��� �׼�)���� �����մϴ�. ���
        for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
        {
            gotoxy(15, 17);
            cout << i << "�� �� ó�� ȭ������ ���ư��ϴ�."; //���� �ð� ���
            Sleep(1000); //1�� ������
        }
        hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
    }
}

void price2::my_mony(int m) { //my_mony �Լ� ����
    mony = m; //mony�� m ����
}

void price2::price_menu2(int p) { //price_menu �Լ� ����
    g = mony - p;  //��� ����� g�� ����
    Calculator_change(g); //change Ŭ������ Calculator_change �Լ� ȣ��
}
price2 p2; //Ŭ���� price2�� p2�̸����� ����

void ment() {
    gotoxy(15, 13);
    cout << "������ �Ϸ� �Ǿ����ϴ�.          \n";
    gotoxy(15, 15);
    cout << "\n\n"; //�� �ٲ�
    for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
    {
        gotoxy(15, 16);
        cout << i << "�� �� ó�� ȭ������ ���ư��ϴ�."; //���� �ð� ���
        Sleep(1000); //1�� ������
    }
    hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
}

void Price::price_menu(int p) { //price_menu �Լ� ����
    int payway, cash; // ���� ����� �����Ͽ� ������ ������ pzayway�� ���� ������ �ݾ��� ������ cash ����
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[��������]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1. ����" << endl;
    gotoxy(15, 12);
    cout << "2. ī��" << endl;
    gotoxy(15, 13);
    cout << "3. �Ｚ����/��������" << endl;
    gotoxy(15, 14);
    cout << "0. ���� ���" << endl;
    gotoxy(15, 15);
    cout << "==================================\n";
    gotoxy(15, 16);
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
            payway = y - 10;
            while (1) //�ݺ���
            {
                if (payway == 1) //���� ������
                {
                    system("cls");
                    outline();
                    gotoxy(15, 11);
                    cout << "���� ������ �����ϼ̽��ϴ�.\n";
                    gotoxy(15, 12);
                    cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                    gotoxy(15, 13);
                    cout << "�ݾ��� �������ּ���.";
                    cin >> cash; //�ݾ��� cash�� ����
                    p2.my_mony(cash); //p2Ŭ������ my_mony�Լ��� cash�� ����
                    p2.price_menu2(p); ////p2Ŭ������ price_menu2�Լ��� ������ �ݾ��� ����
                    break;
                }
                else if (payway == 2) //ī�� ������
                {
                    system("cls");
                    outline();
                    gotoxy(15, 11);
                    cout << "ī�� ������ �����ϼ̽��ϴ�.\n";
                    gotoxy(15, 12);
                    cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                    gotoxy(15, 13);
                    cout << "ī�带 �������ּ���.\n";
                    Sleep(5000); //5�� ������
                    ment(); //ment���
                    break;
                }
                else if (payway == 3) //���� ������
                {
                    system("cls");
                    outline();
                    gotoxy(15, 11);
                    cout << "�Ｚ����/�������̸� �����ϼ̽��ϴ�.\n";
                    gotoxy(15, 12);
                    cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                    gotoxy(15, 13);
                    cout << "�ڵ����� �����⿡ ���ּ���.\n";
                    Sleep(5000); //5�� ������
                    ment(); //ment���
                    break;
                }
                else if (payway == 4) //���� ������
                {
                    gotoxy(15, 9);
                    cout << "������ ����ϼ̽��ϴ�.\n";
                    Sleep(5000); //5�� ������
                    hb.run(); //ù ���� ȭ�� �θ���
                    break;
                }
            }
        }
        }
    }
}
Price pr; //price Ŭ������ pr�� ����

int c;
// ���õ� �޴��� �� ������ ������ ���� �߰�
vector<string> selectedMenu = {}; // ���õ� �޴� ����� �����ϴ� ����
int totalPrice = 0; // �� ����
int price; //totalPrice�� ������ ����

void Shopping_basket::printSelectedMenu(int p) { // ���õ� �޴� ��� �Լ�
    int x = 14;
    int y = 16;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[������ �޴�]" << endl;
    totalPrice += p;
    gotoxy(15, 12);
    for (int i = 0; i < selectedMenu.size(); i++) { // ������ ũ�⸸ŭ �ݺ�
        gotoxy(15, 12 - i); // y��ǥ�� i��ŭ ���ҽ�Ŵ
        cout << selectedMenu[i] << endl; // ������ i��° ���� ���
    }
    gotoxy(15, 13);
    cout << "=====================================\n";
    gotoxy(15, 14);
    cout << "�� ����: " << totalPrice << "��" << endl;
    gotoxy(15, 15);
    cout << "=====================================" << endl;
    gotoxy(15, 16);
    cout << "���� Ȥ�� �� �߰��Ͻðڽ��ϱ�?" << endl;
    gotoxy(15, 17);
    cout << "1. ����" << endl;
    gotoxy(15, 18);
    cout << "2. �߰��ϱ�" << endl;
    gotoxy(15, 19);
    cout << "=====================================" << endl;
    while (1) {
        int n = KeyControl();
        switch (n) {
        case UP: {
            if (y > 17) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, --y);
                cout << ">";
            }
            break;
        }
        case DOWN: {
            if (y < 18) {
                gotoxy(x - 1, y);
                cout << " ";
                gotoxy(x - 1, ++y);
                cout << ">";
            }
            break;
        }
        case SUBMIT: {
            c = y - 16;
            switch (c) {
            case 1:
                selectedMenu.clear(); // ������ ��� ���� ����
                price = totalPrice;
                totalPrice = 0; // �� ������ 0���� �ʱ�ȭ
                pr.price_menu(price);
                break;
            case 2:
                hb.MenuOrder();
                break;
            }
        }
        }
    }
}

Shopping_basket sb; //Ŭ���� Shopping_basket�� sb�� ����