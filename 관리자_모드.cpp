#include <iostream>
#include <windows.h>
#include"������_���.h"
#include"�׵θ�.h"
#include"����.h"
#include"�޴�.h"
using namespace std;

// Ű���� ����
#define UP 0 
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4 // ����

extern int Nbulgogi, Nshrimp, Nchicken, Ncheese, Negg;
extern int Npotato, Nnuggets, Ncstick, Ncpotatoes;
extern int Ncola, Nzero_cola, Nsoda, Norange, Nwater;
extern int sum1, sum2, sum3;

int menucode;

//----------------------[������ ���]----------------------
void manager() { //������ ��� �Լ�
    while (1) { //���ѹݺ� �Լ�
        menucode = ShowMode(); // ������ ��� ȭ�� ���
        if (menucode == 0) {
            ShowRemain(); // ��� ���� ȭ�� ���
        }
        else if (menucode == 1) {
            ShowManage(); // ���� ���� ȭ�� ���
        }
        else if (menucode == 2) {
            hb.run(); // ���� ȭ������ ���ư���
            return;
        }
    }
}

int ShowMode() { // ������ ��� ȭ��
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[������ ���]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1. ��� ����" << endl;
    gotoxy(15, 12);
    cout << "2. ���� ����" << endl;
    gotoxy(15, 13);
    cout << "0. ���ư���" << endl;
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

void ShowRemain() { // ��� ����
    int choice; // ����ڰ� ������ �޴� ��ȣ
    int amount; // ��� �߰��ϰų� ���� ����
    system("cls");
    outline();

    gotoxy(23, 1);
    cout << "[��� ����]" << endl; // ���� ���
    gotoxy(15, 11);
    cout << "�� �޴��� ���� ������ ������ �����ϴ�." << endl; // ���� ���
    gotoxy(15, 12);
    cout << "01) �Ұ�����: " << Nbulgogi << endl; // �Ұ������� ���� ���� ���
    gotoxy(15, 13);
    cout << "02) �������: " << Nshrimp << endl; // ��������� ���� ���� ���
    gotoxy(15, 14);
    cout << "03) ġŲ����: " << Nchicken << endl; // ġŲ������ ���� ���� ���
    gotoxy(15, 15);
    cout << "04) ġ�����: " << Ncheese << endl; // ġ������� ���� ���� ���
    gotoxy(15, 16);
    cout << "05) ���׹���: " << Negg << endl; // ���׹����� ���� ���� ���
    gotoxy(15, 17);
    cout << "06) ����Ƣ��: " << Npotato << endl; // ����Ƣ���� ���� ���� ���
    gotoxy(15, 18);
    cout << "07) ġŲ�ʰ�: " << Nnuggets << endl; // ġŲ�ʰ��� ���� ���� ���
    gotoxy(15, 19);
    cout << "08) ġ�ƽ: " << Ncstick << endl; // ġ�ƽ�� ���� ���� ���
    gotoxy(15, 20);
    cout << "09) ġ���: " << Ncpotatoes << endl; // ġ����� ���� ���� ���
    gotoxy(15, 21);
    cout << "10) �ݶ�: " << Ncola << endl; // �ݶ��� ���� ���� ���
    gotoxy(15, 22);
    cout << "11) �����ݶ�: " << Nzero_cola << endl; // �����ݶ��� ���� ���� ���
    gotoxy(15, 23);
    cout << "12) ���̴�: " << Nsoda << endl; // ���̴��� ���� ���� ���
    gotoxy(15, 24);
    cout << "13) �������ֽ�: " << Norange << endl; // �������ֽ��� ���� ���� ���
    gotoxy(15, 25);
    cout << "14) ��: " << Nwater << endl; // ���� ���� ���� ���
    gotoxy(15, 26);
    cout << "00) ����" << endl;
    gotoxy(15, 27);
    cout << "==================================" << endl; // ���� ���

    while (1) { // ���ѹݺ�
        gotoxy(15, 28);
        cout << "��� �߰��ϰų� ����" << endl; // ���� ���
        gotoxy(15, 29);
        cout << "�޴��� ��ȣ�� �Է��ϼ���." << endl;
        gotoxy(15, 30);
        cout << "===================================" << endl;
        gotoxy(15, 31);
        cout << "��ȣ �Է� : ";
        cin >> choice; // choice�� �Է��� ���� �ֱ�
        if (choice == 0) { // choice�� 0�̸�
            gotoxy(15, 11);
            cout << "===================================" << endl;
            gotoxy(15, 12);
            cout << "������ ��带 �����մϴ�." << endl; // ���� ���
            gotoxy(15, 13);
            cout << "===================================" << endl;
            manager();
            break; // while�� ������
        }
        else if (choice < 1 || choice > 14) { // choice�� 1���� �۰ų� 14���� ũ��
            /*gotoxy(15, 31);
            cout << "===================================" << endl;*/
            gotoxy(15, 30);
            cout << "�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���." << endl; // ���� ���
            gotoxy(15, 31);
            cout << "===================================" << endl;
            continue; // while���� ó������ ���ư���
        }
        else { // choice�� 1���� 14 ���̸�
            gotoxy(15, 31);
            cout << "��� �߰��Ϸ��� ���," << endl; // ���� ���
            gotoxy(15, 32);
            cout << "���̷��� ������ �Է��ϼ���." << endl;
            gotoxy(15, 33);
            cout << "(0�� ������ ���� �˴ϴ�.)" << endl;
            gotoxy(15, 34);
            cout << "===================================" << endl;
            gotoxy(15, 35);
            cout << "��� �Է� : ";
            cin >> amount; // amount�� �Է��� ���� �ֱ�
            switch (choice) { // switch���� choice �ֱ�
            case 1: // choice�� 1�̸�
                Nbulgogi += amount; // �Ұ������� ���� ������ amount ���ϱ�
                if (Nbulgogi < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nbulgogi -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 2: // choice�� 2�̸�
                Nshrimp += amount; // ��������� ���� ������ amount ���ϱ�
                if (Nshrimp < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nshrimp -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 3: // choice�� 3�̸�
                Nchicken += amount; // ġŲ������ ���� ������ amount ���ϱ�
                if (Nchicken < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nchicken -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 4: // choice�� 4�̸�
                Ncheese += amount; // ġ������� ���� ������ amount ���ϱ�
                if (Ncheese < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Ncheese -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 5: // choice�� 5�̸�
                Negg += amount; // ���׹����� ���� ������ amount ���ϱ�
                if (Negg < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Negg -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 6: // choice�� 6�̸�
                Npotato += amount; // ����Ƣ���� ���� ������ amount ���ϱ�
                if (Npotato < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Npotato -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 7: // choice�� 7�̸�
                Nnuggets += amount; // ġŲ�ʰ��� ���� ������ amount ���ϱ�
                if (Nnuggets < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nnuggets -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 8: // choice�� 8�̸�
                Ncstick += amount; // ġ�ƽ�� ���� ������ amount ���ϱ�
                if (Ncstick < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Ncstick -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 9: // choice�� 9�̸�
                Ncpotatoes += amount; // ġ����� ���� ������ amount ���ϱ�
                if (Ncpotatoes < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Ncpotatoes -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 10: // choice�� 10�̸�
                Ncola += amount; // �ݶ��� ���� ������ amount ���ϱ�
                if (Ncola < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Ncola -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 11: // choice�� 11�̸�
                Nzero_cola += amount; // �����ݶ��� ���� ������ amount ���ϱ�
                if (Nzero_cola < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nzero_cola -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 12: // choice�� 12�̸�
                Nsoda += amount; // ���̴��� ���� ������ amount ���ϱ�
                if (Nsoda < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nsoda -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break;
            case 13: // choice�� 13�̸�
                Norange += amount; // ������ �ֽ��� ���� ������ amount ���ϱ�
                if (Norange < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Norange -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 14: // choice�� 14�̸�
                Nwater += amount; // ���� ���� ������ amount ���ϱ�
                if (Nwater < 0) {
                    gotoxy(15, 35);
                    cout << "���� ������ ���� �Դϴ�." << endl;
                    Nwater -= amount; // ���� ������ amount ���� (������� �ǵ�����)
                    for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                    {
                        gotoxy(15, 36);
                        cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                        Sleep(1000); //1�� ������
                    }
                    ShowRemain();
                }
                else
                    ShowRemain();
                break; // switch�� ������
            case 0://choice�� 0�̸�
                ShowMode();
            }
        }
    }
}

void ShowManage() {
    while (1) { //���ѹݺ� �Լ�
        menucode = ShowManageMode(); // ���� ���� ȭ�� ���
        if (menucode == 0) {
            ShowBurger(); // ���� ���� ȭ�� ���
        }
        else if (menucode == 1) {
            ShowSide(); // ���̵� �޴� ���� ȭ�� ���
        }
        else if (menucode == 2) {
            ShowDrink(); // ���� ���� ȭ�� ���
        }
        else if (menucode == 3) {
            ShowSum(); // ���� ���� ȭ�� ���
        }
        else if (menucode == 4) {
            hb.run(); // ���� ȭ������ ���ư���
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

int ShowManageMode() { // ���� ���� ȭ��
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "1. ���� ����" << endl;
    gotoxy(15, 12);
    cout << "2. ���̵� �޴� ����" << endl;
    gotoxy(15, 13);
    cout << "3. ���� ����" << endl;
    gotoxy(15, 14);
    cout << "4. ���� ����" << endl;
    gotoxy(15, 15);
    cout << "0. ���ư���" << endl;
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

int ShowBurgerManage() { // ���� ���� ȭ�� 
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "�ܹ��� ����: " << sum1 << endl; // sum1
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
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

int ShowSideManage() { // ���̵� ���� ȭ��
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���̵� ����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "���̵� ����: " << sum2 << endl; // sum2
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
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

int ShowDrinkManage() { // ���� ���� ȭ��
    int x = 14;
    int y = 11;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "���� ����: " << sum3 << endl; // sum3
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
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

int ShowSumSale() { // �� �޴� ���� ���� ȭ��
    int x = 14;
    int y = 11;
    int sum4 = sum1 + sum2 + sum3;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 10);
    cout << "==================================\n";
    gotoxy(15, 11);
    cout << "���� ������: " << sum4 << "�� �Դϴ�."; // allsum
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
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