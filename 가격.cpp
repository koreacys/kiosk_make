#include <iostream>
#include <windows.h>
#include"����.h"
#include"�޴�.h"
#include"����.h"
using namespace std;

extern int Nbulgogi, Nshrimp, Nchicken, Ncheese, Negg;
extern int Npotato, Nnuggets, Ncstick, Ncpotatoes;
extern int Ncola, Nzero_cola, Nsoda, Norange, Nwater;
extern int sum1, sum2, sum3;

extern HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����
extern Shopping_basket sb; //Ŭ���� Shopping_basket�� sb�� ����


//------------------[����]------------------------
void hamburger_price(int n) //hamburger_price�Լ� �ۼ�
{
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200; //������ ���� bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200�� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            if (Nbulgogi > 0) { //�Ұ�� ���Ű� ����������
                Nbulgogi--; //�Ұ�� ������ ���� -1 ����
                sum1 += bulgogi; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("�Ұ�����(3500)");
                sb.printSelectedMenu(bulgogi); //�Ұ������� ���� price_menu�� ����
            }
            else { //�Ұ�� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nshrimp > 0) { //���� ���Ű� ����������
                Nshrimp--; //���� ������ ���� -1 ����
                sum1 += shrimp; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("�������(3000)");
                sb.printSelectedMenu(shrimp); //��������� ���� price_menu�� ����
            }
            else { //���� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nchicken > 0) { //ġŲ ���Ű� ����������
                Nchicken--; //ġŲ ������ ���� -1 ����
                sum1 += chicken; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("ġŲ����(4000)");
                sb.printSelectedMenu(chicken); //ġŲ������ ���� price_menu�� ����
            }
            else { //ġŲ ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 4: //3�� ������ ��
            if (Ncheese > 0) { //ġ�� ���Ű� ����������
                Ncheese--; //ġ�� ������ ���� -1 ����
                sum1 += cheese; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("ġ�����(3700)");
                sb.printSelectedMenu(cheese); //ġ������� ���� price_menu�� ����
            }
            else { //ġ�� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 5: //3�� ������ ��
            if (Negg > 0) { //���� ���Ű� ����������
                Negg--; //���� ������ ���� -1 ����
                sum1 += egg; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("���׹���(3200)");
                sb.printSelectedMenu(egg); //���׹����� ���� price_menu�� ����
            }
            else { //���� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }

}

void side_price(int n) { //side_price�Լ� �ۼ�
    int potato = 1200, nuggets = 1500, cstick = 1000, cpotatoes = 2000; // ������ ���� potato = 1200, nuggets = 1500, cstick = 1000, cpotatoes = 2000�� ����

    if (n == 0) //�ֹ� ����n�� 0�̸� ����
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //�ֹ� ����n�� 0�� �ƴϸ�
    {
        switch (n)
        {
        case 1:
            if (Npotato > 0) { //����Ƣ���� ����������
                Npotato--; //����Ƣ���� ���� -1 ����
                sum2 += potato; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("����Ƣ��(1200)");
                sb.printSelectedMenu(potato); //����Ƣ�� ���� price_menu�� ����
            }
            else { //����Ƣ���� ǰ���̸�
                gotoxy(15, 17);
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.SM();
            }
            break; //switch�� ������
        case 2:
            if (Nnuggets > 0) { //ġŲ�ʰ��� ����������
                Nnuggets--; //ġŲ�ʰ��� ���� -1 ����
                sum2 += nuggets; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġŲ�ʰ�(1500)");
                sb.printSelectedMenu(nuggets); //ġŲ�ʰ��� ���� price_menu�� ����
            }
            else { //ġŲ�ʰ��� ǰ���̸�
                gotoxy(15, 17);
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.SM();
            }
            break; //switch�� ������
        case 3:
            if (Ncstick > 0) { //ġ�ƽ�� ����������
                Ncstick--; //ġ�ƽ�� ���� -1 ����
                sum2 += cstick; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġ�ƽ(1000)");
                sb.printSelectedMenu(cstick); //ġ�ƽ�� ���� price_menu�� ����
            }
            else { //ġ�ƽ�� ǰ���̸�
                gotoxy(15, 17);
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.SM();
            }
            break; //switch�� ������
        case 4:
            if (Ncpotatoes > 0) { //ġ��ڰ� ����������
                Ncpotatoes--; //ġ����� ���� -1 ����
                sum2 += cpotatoes; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġ���(2000)");
                sb.printSelectedMenu(cpotatoes); //ġ����� ���� price_menu�� ����
            }
            else { //ġ��ڰ� ǰ���̸�
                gotoxy(15, 17);
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.SM();
            }
            break; //switch�� ������
        default:
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���"; // ��ȿ���� ���� �ֹ��� ��� �ٽ� �Է� ��û
        }

        break; //while�� ������
    }
}

void drink_price(int n) { //drin_price�Լ� �ۼ�
    int cola = 1500, zero_cola = 1500, soda = 1500, orange = 1200, water = 1000; //������ ���� cola = 1500, zero_cola = 1500, soda = 1500, orange = 1200, water = 1000�� ����

    if (n == 0) //if�� n = 0 �϶�
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            if (Ncola > 0) { //�ݶ� ����������
                Ncola--; //�ݶ��� ���� -1 ����
                sum3 += cola; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�ݶ�(1500)");
                sb.printSelectedMenu(cola); //�ݶ��� ���� price_menu�� ����
            }
            else { //�ݶ� ǰ���̸�
                gotoxy(15, 18);
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.DM();
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nzero_cola > 0) { //�����ݶ� ����������
                Nzero_cola--; //�����ݶ��� ���� -1 ����
                sum3 += zero_cola; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�����ݶ�(1500)");
                sb.printSelectedMenu(zero_cola); //�����ݶ��� ���� price_menu�� ����
            }
            else { //�����ݶ� ǰ���̸�
                gotoxy(15, 18);
                cout << "�����ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.DM();
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nsoda > 0) { //���̴ٰ� ����������
                Nsoda--; //���̴��� ���� -1 ����
                sum3 += soda; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("���̴�(1500)");
                sb.printSelectedMenu(soda); //���̴��� ���� price_menu�� ����
            }
            else { //���̴ٰ� ǰ���̸�
                gotoxy(15, 18);
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.DM();
            }
            break; //switch�� ������
        case 4: //4�� ������ ��
            if (Norange > 0) { //�������ֽ��� ����������
                Norange--; //�������ֽ��� ���� -1 ����
                sum3 += orange; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�������ֽ�(1200)");
                sb.printSelectedMenu(orange); //������ �ֽ��� ���� price_menu�� ����
            }
            else { //�������ֽ��� ǰ���̸�
                gotoxy(15, 18);
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.DM();
            }
            break; //switch�� ������
        case 5: //5�� ������ ��
            if (Nwater > 0) { //���� ����������
                Nwater--; //���� ���� -1 ����
                sum3 += water; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("��(1000)");
                sb.printSelectedMenu(water); //���� ���� price_menu�� ����
            }
            else { //���� ǰ���̸�
                gotoxy(15, 18);
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 19);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.DM();
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

//--------------------------[��Ʈ]---------------------------------
int total = 0;//��Ʈ�޴� ���� ���� �Լ�

void hamset_price(int n) // hamset_price�Լ� �ۼ�
{
    int bulgogi = 3500, shrimp = 3000, chicken = 4000, cheese = 3700, egg = 3200;

    if (n == 0) //�ֹ� ����n�� 0�̸� ����
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        total = 0;
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            if (Nbulgogi > 0) { //�Ұ�� ���Ű� ����������
                Nbulgogi--; //�Ұ�� ������ ���� -1 ����
                total += bulgogi; //�Ұ������� ���� price_menu�� ����
                sum1 += bulgogi; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("�Ұ�����(3500)");
            }
            else { //�Ұ�� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nshrimp > 0) { //���� ���Ű� ����������
                Nshrimp--; //���� ������ ���� -1 ����
                total += shrimp; //��������� ���� price_menu�� ����
                sum1 += shrimp; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("�������(3000)");
            }
            else { //���� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nchicken > 0) { //ġŲ ���Ű� ����������
                Nchicken--; //ġŲ ������ ���� -1 ����
                total += chicken; //ġŲ������ ���� price_menu�� ����
                sum1 += chicken; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("ġŲ����(4000)");
            }
            else { //ġŲ ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 4: //3�� ������ ��
            if (Ncheese > 0) { //ġ�� ���Ű� ����������
                Ncheese--; //ġ�� ������ ���� -1 ����
                total += cheese; //ġ������� ���� price_menu�� ����
                sum1 += cheese; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("ġ�����(3700)");
            }
            else { //ġ�� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        case 5: //3�� ������ ��
            if (Negg > 0) { //���� ���Ű� ����������
                Negg--; //���� ������ ���� -1 ����
                total += egg; //���׹����� ���� price_menu�� ����
                sum1 += egg; // �ܹ��Ű� �ȸ� ��, �ش� ������ sum1�� ����
                sb.selectedMenu.push_back("���׹���(3200)");
            }
            else { //���� ���Ű� ǰ���̸�
                gotoxy(15, 14);
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 15);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

void set_drink(int n) { //set_drink�Լ� �ۼ�
    int cola = 0, zero_cola = 0, soda = 0, orange = 500, water = 0;

    if (n == 0) //if�� n = 0 �϶�
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //n = 0 �� �ƴ� ��
    {
        switch (n) //switch��
        {
        case 1: //1�� ������ ��
            if (Ncola > 0) { //�ݶ� ����������
                Ncola--; //�ݶ��� ���� -1 ����
                total += cola; //�ݶ��� ���� price_menu�� ����
                sum3 += cola; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�ݶ�(+0)");
            }
            else { //�ݶ�Ű� ǰ���̸�
                gotoxy(15, 17);
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CD();
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nzero_cola > 0) { //�����ݶ� ����������
                Nzero_cola--; //�����ݶ��� ���� -1 ����
                total += zero_cola; //�����ݶ��� ���� price_menu�� ����
                sum3 += zero_cola; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�����ݶ�(+0)");
            }
            else { //�����ݶ� ǰ���̸�
                gotoxy(15, 17);
                cout << "���� �ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CD();
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nsoda > 0) { //���̴ٰ� ����������
                Nsoda--; //���̴��� ���� -1 ����
                total += soda; //���̴��� ���� price_menu�� ����
                sum3 += soda; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("���̴�(+0)");
            }
            else { //���̴ٰ� ǰ���̸�
                gotoxy(15, 17);
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CD();
            }
            break; //switch�� ������
        case 4: //4�� ������ ��
            if (Norange > 0) { //�������ֽ��� ����������
                Norange--; //�������ֽ��� ���� -1 ����
                total += orange; //������ �ֽ��� ���� price_menu�� ����
                sum3 += orange; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("�������ֽ�(+500)");
            }
            else { //�������ֽ��� ǰ���̸�
                gotoxy(15, 17);
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CD();
            }
            break; //switch�� ������
        case 5: //5�� ������ ��
            if (Nwater > 0) { //���� ����������
                Nwater--; //���� ���� -1 ����
                total += water; //���� ���� price_menu�� ����
                sum3 += water; // ���ᰡ �ȸ� ��, �ش� ������ sum3�� ����
                sb.selectedMenu.push_back("��(+0)");
            }
            else { //���� ǰ���̸�
                gotoxy(15, 17);
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 18);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CD();
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

void set_side(int n) { //set_side�Լ� �ۼ�
    int potato = 0, nuggets = 500, cstick = 500, cpotatoes = 1000;

    if (n == 0) //�ֹ� ����n�� 0�̸� ����
    {
        gotoxy(15, 10);
        cout << "����" << endl; //���� ���
        hb.run(); //ù ���� ȭ�� �θ���
    }

    while (n != 0) //�ֹ� ����n�� 0�� �ƴϸ�
    {
        switch (n)
        {
        case 1:
            if (Npotato > 0) { //����Ƣ�谡 ����������
                Npotato--; //����Ƣ���� ���� -1 ����
                total += potato; //����Ƣ�� ���� price_menu�� ����
                sum2 += potato; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("����Ƣ��(+0)");
                sb.printSelectedMenu(total);
            }
            else { //����Ƣ���� ǰ���̸�
                gotoxy(15, 16);
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 17);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CS();
            }
            break; //switch�� ������
        case 2:
            if (Nnuggets > 0) { //ġŲ�ʰ��� ����������
                Nnuggets--; //ġŲ�ʰ��� ���� -1 ����
                total += nuggets; //ġŲ�ʰ��� ���� price_menu�� ����
                sum2 += nuggets; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġŲ�ʰ�(+500)");
                sb.printSelectedMenu(total);
            }
            else { //ġŲ�ʰ��� ǰ���̸�
                gotoxy(15, 16);
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 17);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CS();
            }
            break; //switch�� ������
        case 3:
            if (Ncstick > 0) { //ġ�ƽ�� ����������
                Ncstick--; //ġ�ƽ�� ���� -1 ����
                total += cstick; //ġ�ƽ�� ���� price_menu�� ����
                sum2 += cstick; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġ�ƽ(+500)");
                sb.printSelectedMenu(total);
            }
            else { //ġ�ƽ�� ǰ���̸�
                gotoxy(15, 16);
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 17);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CS();
            }
            break; //switch�� ������
        case 4:
            if (Ncpotatoes > 0) { //ġ����� ����������
                Ncpotatoes--; //ġ����� ���� -1 ����
                total += cpotatoes; //ġ����� ���� price_menu�� ����
                sum2 += cpotatoes; // ���̵�޴��� �ȸ� ��, �ش� ������ sum2�� ����
                sb.selectedMenu.push_back("ġ���(+1000)");
                sb.printSelectedMenu(total);
            }
            else { //ġ��ڰ� ǰ���̸�
                gotoxy(15, 16);
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 17);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.CS();
            }
            break; //switch�� ������
        default:
            gotoxy(15, 10);
            cout << "�ٽ� �Է��ϼ���"; // ��ȿ���� ���� �ֹ��� ��� �ٽ� �Է� ��û
        }

        break; //while�� ������
    }
}

//----------------------------------------------------------------------------------
