#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

// ���� ������ �� �ʱ�ȭ
int Nbulgogi = 10, Nshrimp = 10, Nchicken = 10, Ncheese = 10, Negg = 10;
int Npotato = 10, Nnuggets = 10, Ncstick = 10, Ncpotatoes = 10;
int Ncola = 10, Nzero_cola = 10, Nsoda = 10, Norange = 10, Nwater = 10;

//�� ������ �ջ��� �޴� ���� �ʱ�ȭ
int sum1 = 0, sum2 = 0, sum3 = 0;

void hamburger_price(int n); // �ܹ��� ������ ����ϴ� �Լ�
void hamset_price(int n); //�ܹ��� ��Ʈ�� ����
void side_price(int n); // ���̵� �޴� ������ ����ϴ� �Լ�
void set_side(int n); //��Ʈ ���̵�
void drink_price(int n);// ���� �޴� ������ ����ϴ� �Լ�
void set_drink(int n); //��Ʈ ����
void manager();//������ ��� �Լ�

//�ܼ� â�� ũ��� ������ �����ϴ� �Լ�
void SetConsoleView() //�ܼ� â�� ���� �ʱ� ����
{
    system("mode con:cols=60 lines=50"); //�ܼ� â�� ���� ���ο� ���θ� ���Ѵ�
    system("title remote contro. ��3�� ��ǻ�ͼ���Ʈ�����а� ����Ž�� ��"); //�ܼ� â�� �̸��� ���Ѵ�
}

// Ŀ���� ��ġ�� �̵��ϴ� �Լ�
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void outline() {
    cout << "������������������������������" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "��                                                      ��" << endl;
    cout << "������������������������������" << endl;
}

class HamburgerSystem { //Ŭ���� HamburgerSystem
public: //����
    int choice, MenuChoice; //menu ����

    void run() { //run �Լ� �ۼ�
        while (1) { //���ѹݺ� �Լ�
            ShowMain(); //ShowMain()�Լ� �θ���
            gotoxy(15, 16);
            cout << "�Ļ縦 �����ϼ���: "; //���� ���
            cin >> choice; //menu�� �Է��� ���� �ֱ�

            switch (choice) { //����ġ ���� choice �ֱ�
            case 1: // 1�� ������
                MenuOrder(); //MenuOrder() �Լ� ����
                break; //����ġ �� ������
            case 2: // 2�� ������
                MenuOrder(); //MenuOrder() �Լ� ����
                break; //����ġ �� ������
            case 999: // 999�� ������
                manager(); //manager() �Լ� ����
                break; //����ġ �� ������
            case 0: //0�� ������
                cout << "�����մϴ�." << endl; // ���� ���
                exit(0);
                return;
            default: //�� ������ �ƴ϶��
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
            }

        }
    }
    void MenuOrder() {
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[�޴�����]" << endl; // ���� ���
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

        while (1) { //���ѹݺ� �Լ�
            gotoxy(15, 16);
            cout << "�޴��� �������ּ���: "; //���� ���
            cin >> MenuChoice; //MenuChoice�� �Է��� ���� �ֱ�

            switch (MenuChoice) { //����ġ ���� choice �ֱ�
            case 1: // 1�� ������
                hamburgerMenu();//hamburgerMenu() �Լ� ����
                break; //����ġ �� ������
            case 2: // 2�� ������
                sideMenu(); //sideMenu() �Լ� ����
                break; //����ġ �� ������
            case 3: // 3�� ������
                drinkMenu(); //drinkMenu() �Լ� ����
                break; // ����ġ �� ������ + 0 �Է��� �޾� 
            case 0: // 0�� ������
                run();
                break;
            default: //�� ������ �ƴ϶��
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
            }
        }
    }

    void HBM() {
        hamburgerMenu();
    }

    void SM() {
        sideMenu();
    }

    void DM() {
        drinkMenu();
    }

private:

    void ShowMain() {  //ShowMenu() �Լ� ����
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[����ȭ��]" << endl; //���� ���
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
    }



    void hamburgerMenu() {
        int setchoice;
        int setdrink;
        int setside;
        int hamburgerChoice;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[�޴�����]" << endl;
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
        gotoxy(15, 17);
        cout << "���Ͻô� �޴��� �Է��� �ּ��� : ";
        cin >> hamburgerChoice;
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[��Ʈ/��ǰ ����]\n";
        gotoxy(15, 11);
        cout << "    1.��Ʈ       2.��ǰ\n";
        gotoxy(15, 12);
        cout << "===============================\n";
        gotoxy(15, 13);
        cout << "��Ʈ/��ǰ ���� : ";
        cin >> setchoice;
        if (setchoice == 1) {
            hamset_price(hamburgerChoice);
            system("cls");
            outline();
            gotoxy(23, 1);
            cout << "[���ắ��]\n";
            gotoxy(15, 12);
            cout << "1.�ݶ�(+0)\n";
            gotoxy(15, 13);
            cout << "2.���̴�(+0)\n";
            gotoxy(15, 14);
            cout << "3.�������ֽ�(+500)\n";
            gotoxy(15, 15);
            cout << "4.�Ƹ޸�ī��(+300)\n";
            gotoxy(15, 16);
            cout << "=====================\n";
            gotoxy(15, 17);
            cout << "���� ���� : ";
            cin >> setdrink;
            set_drink(setdrink);
            system("cls");
            outline();
            gotoxy(23, 1);
            cout << "[���̵庯��]\n";
            gotoxy(15, 11);
            cout << "1.����Ƣ��(+0)\n";
            gotoxy(15, 12);
            cout << "2.ġŲ�ʳ�(+500) \n";
            gotoxy(15, 13);
            cout << "3.ġ�ƽ(+500)\n";
            gotoxy(15, 14);
            cout << "4.ġ���(+700)\n";
            gotoxy(15, 15);
            cout << "=======================\n";
            gotoxy(15, 16);
            cout << "���̵� ���� : ";
            cin >> setside;
            set_side(setside);
        }
        else
        {
            hamburger_price(hamburgerChoice);
        }
    }

    void sideMenu() {
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

    void drinkMenu() {
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
};

HamburgerSystem hb; //Ŭ���� HamburgerSystem�� hb�� ����

//--------------------[���� Ŭ����]-----------------------

class change { //change Ŭ���� ����
public: //���� ������ public
    void Calculator_change(int g) { //�Ž������� ����ϰ� ����ϴ� ��� �Լ� ����
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
            for (int i = 10; i > 0; i--) //10�� ī��Ʈ�ٿ� �ݺ���
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
};

class price2 : public change { //��� Ŭ���� , class changeŬ���� ���
public:
    int mony, g;  //������ mony�� g ����
    void my_mony(int m) { //my_mony �Լ� ����
        mony = m; //mony�� m ����
    }

    void price_menu2(int p) { //price_menu �Լ� ����
        g = mony - p;  //��� ����� g�� ����
        Calculator_change(g); //change Ŭ������ Calculator_change �Լ� ȣ��
    }
};

price2 p2; //Ŭ���� price2�� p2�̸����� ����

void ment() {
    gotoxy(15, 13);
    cout << "������ �Ϸ� �Ǿ����ϴ�.          \n";
    gotoxy(15, 15);
    cout << "\n\n"; //�� �ٲ�
    for (int i = 10; i > 0; i--) //10�� ī��Ʈ�ٿ� �ݺ���
    {
        gotoxy(15, 16);
        cout << i << "�� �� ó�� ȭ������ ���ư��ϴ�."; //���� �ð� ���
        Sleep(1000); //1�� ������
    }
    hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
}

class Price { //��� Ŭ����
public:
    void price_menu(int p) { //price_menu �Լ� ����
        int payway, cash; // ���� ����� �����Ͽ� ������ ������ pzayway�� ���� ������ �ݾ��� ������ cash ����

        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[��������]" << endl;
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
        cout << "��������� �������ּ���: ";
        cin >> payway; //���� ����� payway�� ����

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
            else if (payway == 0) //���� ������
            {
                gotoxy(15, 10);
                cout << "������ ����ϼ̽��ϴ�.\n";
                Sleep(5000); //5�� ������
                hb.run(); //ù ���� ȭ�� �θ���
                break;
            }
        }
    }
};

Price pr; //price Ŭ������ pr�� ����

class Shopping_basket {
public:
    int c;
    // ���õ� �޴��� �� ������ ������ ���� �߰�
    vector<string> selectedMenu = {}; // ���õ� �޴� ����� �����ϴ� ����
    int totalPrice = 0; // �� ����
    int price; //totalPrice�� ������ ����

    void printSelectedMenu(int p) { // ���õ� �޴� ��� �Լ�
        system("cls");
        outline();
        gotoxy(23, 1);
        cout << "[������ �޴�]" << endl;
        totalPrice += p;
        gotoxy(15, 13);
        for (int i = 0; i < selectedMenu.size(); i++) { // ������ ũ�⸸ŭ �ݺ�
            gotoxy(15, 13 - i); // y��ǥ�� i��ŭ ���ҽ�Ŵ
            cout << selectedMenu[i] << endl; // ������ i��° ���� ���
        }
        gotoxy(15, 14);
        cout << "�� ����: " << totalPrice << "��" << endl;
        gotoxy(15, 15);
        cout << "=====================================" << endl;
        gotoxy(15, 16);
        cout << "1. ����    2. �߰��ϱ�   : ";
        cin >> c;

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
};
Shopping_basket sb; //Ŭ���� Shopping_basket�� sb�� ����

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
                gotoxy(15, 13);
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "���� �ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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
                gotoxy(15, 10);
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
                    cout << i << "�� �� ���� ȭ������ ���ư��ϴ�."; //���� �ð� ���
                    Sleep(1000); //1�� ������
                }
                hb.HBM();
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

void side_price(int n) //side_price�Լ� �ۼ�
{
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
                gotoxy(15, 10);
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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

void drink_price(int n) //drin_price�Լ� �ۼ�
{
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
                gotoxy(15, 10);
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "�����ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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
                gotoxy(15, 10);
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
                for (int i = 5; i > 0; i--) //5�� ī��Ʈ�ٿ� �ݺ���
                {
                    gotoxy(15, 14);
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

//----------------------[������ ���]----------------------
void ShowMode() { // ������ ��� ȭ��
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[������ ���]" << endl;
    gotoxy(15, 11);
    cout << "�����ڸ��" << endl;
    gotoxy(15, 12);
    cout << "1. ��� ����" << endl;
    gotoxy(15, 13);
    cout << "2. ���� ����" << endl;
    gotoxy(15, 14);
    cout << "0. ���ư���" << endl;
    gotoxy(15, 15);
    cout << "==================================\n";
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
            case 0://choice�� 0�̸�
                ShowRemain();
            }
        }
    }
}

void ShowManageMode() { // ���� ���� ȭ��
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
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
}
void ShowBurgerManage() { // ���� ���� ȭ�� 
    int i;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 11);
    cout << "�ܹ��� ����: " << sum1 << endl; // sum1
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
    gotoxy(15, 13);
    cout << "==================================\n";
    cout << "�Է� : ";
    cin >> i;
    if (i == 0) {
        ShowManageMode();
    }
}

void ShowSideManage() { // ���̵� ���� ȭ��
    int i;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���̵� ����]" << endl;
    gotoxy(15, 11);
    cout << "���̵� ����: " << sum2 << endl; // sum2
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
    gotoxy(15, 13);
    cout << "==================================\n";
    cout << "�Է� : ";
    cin >> i;
    if (i == 0) {
        ShowManageMode();
    }
}

void ShowDrinkManage() { // ���� ���� ȭ��
    int i;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 11);
    cout << "���� ����: " << sum3 << endl; // sum3
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
    gotoxy(15, 13);
    cout << "==================================\n";
    cout << "�Է� : ";
    cin >> i;
    if (i == 0) {
        ShowManageMode();
    }
}

void ShowSumSale() { // �� �޴� ���� ���� ȭ��
    int i;
    int sum4 = sum1 + sum2 + sum3;
    system("cls");
    outline();
    gotoxy(23, 1);
    cout << "[���� ����]" << endl;
    gotoxy(15, 11);
    cout << "���� ������: " << sum4 << "�� �Դϴ�."; // allsum
    gotoxy(15, 12);
    cout << "0. ���ư���" << endl;
    gotoxy(15, 13);
    cout << "==================================\n";
    cout << "�Է� : ";
    cin >> i;
    if (i == 0) {
        ShowManageMode();
    }
}

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
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl;
            }

            if (SaleMode == 0) {
                hb.run();
                break; // Ż�� 
            }
        }
    }
}

int main(void)//main�Լ� ����
{
    SetConsoleView();
    outline();
    hb.run();
    return 0;
}