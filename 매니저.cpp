#include <iostream>
#include <windows.h>
#include"������_���.h"
#include"����.h"
#include"�޴�.h"
using namespace std;

void manager() { //������ ��� �Լ�
    int ManageMode, SaleMode;
    ShowMode(); //������ ���
    while (1) { //���ѹݺ� �Լ�
        gotoxy(15, 16);
        cout << "������ ����Դϴ�. �������ּ���: ";
        cin >> ManageMode;

        switch (ManageMode) {
        case 1: // 1�� ������
            ShowRemain(); //������ ȭ��
            break;
        case 2: // 2�� ������
            ShowManageMode(); //������� ȭ��
            break;
        case 0: // 0�� ������
            hb.run();
            break;
        default: //�� ������ �ƴ϶��
            gotoxy(15, 12);
            cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl;
        }

        if (ManageMode == 0) { //0 �Է½� �޴� �������� ���ư���
            hb.run();
            break; // Ż��
        }

        while (1) { //���ѹݺ� �Լ�

            gotoxy(15, 17);
            cout << "� ������ ���ðڽ��ϱ�?: ";
            cin >> SaleMode;

            switch (SaleMode) {
            case 1: // 1�� ������
                ShowBurgerManage(); //�ܹ��� ���� ȭ��
                break;
            case 2: // 2�� ������
                ShowSideManage(); //���̵� ���� ȭ��
                break;
            case 3: // 3�� ������
                ShowDrinkManage(); //���� ���� ȭ��
                break;
            case 4: // 4�� ������
                ShowSumSale(); //���� ���� ȭ��
                break;
            case 0:
                manager();
                break;
            default: //�� ������ �ƴ϶��
                gotoxy(15, 18);
                cout << "�߸��� �����Դϴ�." << endl;
                for (int i = 3; i > 0; i--) //3�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� �ٽ� �����ϼ���."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                ShowManageMode();
            }

            if (SaleMode == 0) {
                hb.run();
                break; // Ż�� 
            }
        }
    }
}