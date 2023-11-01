#include <iostream>
#include <string>
#include <vector>
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


class HamburgerSystem { //Ŭ���� HamburgerSystem
public: //����
    int choice, MenuChoice; //menu ����
    void run() { //run �Լ� �ۼ�
        while (1) { //���ѹݺ� �Լ�
            ShowMain(); //ShowMain()�Լ� �θ���
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
                return;
            default: //�� ������ �ƴ϶��
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
            }

        }
    }
    void MenuOrder() {
        cout << "============[�޴�����]============" << endl; // ���� ���
        cout << "1. �ܹ���" << endl;
        cout << "2. ���̵� �޴�" << endl;
        cout << "3. ����" << endl; // 0���� ���� �ǵ����� Ű Ȱ��ȭ ��Ű�� ��
        cout << "0. ó������" << endl; // ó������ ���ư���
        cout << "==================================\n"; // ���� ���

        while (1) { //���ѹݺ� �Լ�

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
                ShowMain();
                break;
            default: //�� ������ �ƴ϶��
                cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl; //���� ���
            }
        }
    }

private:

    void ShowMain() {  //ShowMenu() �Լ� ����
        cout << "============[����ȭ��]============" << endl; //���� ���
        cout << "1.����" << endl;
        cout << "2.����Ļ�" << endl;
        cout << "999. ������ ���" << endl;
        cout << "0. ����" << endl;
        cout << "==============================" << endl; //���� ���
    }



    void hamburgerMenu() {
        int setchoice;
        int setdrink;
        int setside;
        int hamburgerChoice;
        cout << "============[�޴�����]============" << endl;
        cout << "1) �Ұ�����(3500)" << endl;
        cout << "2) �������(3000)" << endl;
        cout << "3) ġŲ����(4000)" << endl;
        cout << "4) ġ�����(3700)" << endl;
        cout << "5) ���׹���(3200)" << endl;
        cout << "==================================\n";
        cin >> hamburgerChoice;
        cout << "=========[��Ʈ/��ǰ ����]=====\n";
        cout << "    1.��Ʈ       2.��ǰ\n";
        cout << "===============================\n";
        cin >> setchoice;
        if (setchoice == 1) {
            hamset_price(hamburgerChoice);
            cout << "=====[���ắ��]======\n";
            cout << "1.�ݶ�(+0)\n";
            cout << "2.���̴�(+0)\n";
            cout << "3.�������ֽ�(+500)\n";
            cout << "4.�Ƹ޸�ī��(+300)\n";
            cout << "=====================\n";
            cin >> setdrink;
            set_drink(setdrink);
            cout << "=====[���̵庯��]=====\n";
            cout << "1.����Ƣ��(+0)\n";
            cout << "2.ġŲ�ʳ�(+500) \n";
            cout << "3.ġ�ƽ(+500)\n";
            cout << "4.ġ���(+700)\n";
            cout << "=======================\n";
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
        cout << "============[�޴�����]============" << endl;
        cout << "1) ����Ƣ��(1200)" << endl;
        cout << "2) ġŲ�ʰ�(1500)" << endl;
        cout << "3) ġ�ƽ(1000)" << endl;
        cout << "4) ġ���(2000)" << endl;
        cout << "==================================\n";
        cin >> sideMenu;
        side_price(sideMenu);
    }

    void drinkMenu() {
        int drinkMenu;
        cout << "============[�޴�����]============" << endl;
        cout << "1) �ݶ�(1500)" << endl;
        cout << "2) �����ݶ�(1500)" << endl;
        cout << "3) ���̴�(1500)" << endl;
        cout << "4) �������ֽ�(1200)" << endl;
        cout << "5) ��(1000)" << endl;
        cout << "==================================\n";
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
            cout << "\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n"; //�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�. ���

            cout << "��õ�� " << g / 5000 << "��" << endl; //��õ�� ���� ���
            g %= 5000;
            cout << "õ�� " << g / 1000 << "��" << endl; //õ�� ���� ���
            g %= 1000;
            cout << "����� " << g / 500 << "��" << endl; //����� ���� ���
            g %= 500;
            cout << "��� " << g / 100 << "��" << endl; //��� ���� ���
            cout << "\n\n"; //�� �ٲ�
            hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�

        }
        else {
            g = -g; //g�� -g�� �־� �������� g�� ����� �ٲ�
            cout << g << "���� �����մϴ�.\n"; //(������ �ܾ��� �׼�)���� �����մϴ�. ���

        }
    }
};

change ch; //change Ŭ������ ch�� ����

class price2 { //��� Ŭ����
public:
    int mony, g;  //������ mony�� g ����
    void my_mony(int m) { //my_mony �Լ� ����
        mony = m; //mony�� m ����
    }

    void price_menu2(int p) { //price_menu �Լ� ����
        g = mony - p;  //��� ����� g�� ����
        ch.Calculator_change(g); //change Ŭ������ Calculator_change �Լ� ȣ��
    }
};

price2 p2; //Ŭ���� price2�� p2�̸����� ����

class price { //��� Ŭ����
public:
    void price_menu(int p) { //price_menu �Լ� ����
        int payway, cash; // ���� ����� �����Ͽ� ������ ������ payway�� ���� ������ �ݾ��� ������ cash ����

        cout << "============[��������]============" << endl;
        cout << "1. ����" << endl;
        cout << "2. ī��" << endl;
        cout << "3. �Ｚ����/��������" << endl;
        cout << "0. ���� ���" << endl;
        cout << "==================================\n";
        cout << "��������� �������ּ���: ";
        cin >> payway; //���� ����� payway�� ����

        while (1) //�ݺ���
        {
            if (payway == 1) //���� ������
            {
                cout << "���� ������ �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "�ݾ��� �������ּ���.";
                cin >> cash; //�ݾ��� cash�� ����
                p2.my_mony(cash); //p2Ŭ������ my_mony�Լ��� cash�� ����
                p2.price_menu2(p); ////p2Ŭ������ price_menu2�Լ��� ������ �ݾ��� ����
                break;
            }
            else if (payway == 2) //ī�� ������
            {
                cout << "ī�� ������ �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "ī�带 �������ּ���.\n";
                cout << "������ �Ϸ� �Ǿ����ϴ�. \n";
                cout << "\n\n"; //�� �ٲ�
                hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
                break;
            }
            else if (payway == 3) //���� ������
            {
                cout << "�Ｚ����/�������̸� �����ϼ̽��ϴ�.\n";
                cout << "�ݾ��� " << p << " �� �Դϴ�.\n"; //p�� �ֹ��� ������ �ݾ��� ����
                cout << "�ڵ����� �����⿡ ���ּ���.\n";
                cout << "������ �Ϸ� �Ǿ����ϴ�. \n";
                cout << "\n\n"; //�� �ٲ�
                hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
                break;
            }
            else if (payway == 0) //���� ������
            {
                cout << "������ ����ϼ̽��ϴ�.\n";
                hb.run(); //ù ���� ȭ�� �θ���
                break;
            }
        }
    }
};

price pr; //price Ŭ������ pr�� ����


class Shopping_basket {
public:
    int c;
    // ���õ� �޴��� �� ������ ������ ���� �߰�
    vector<string> selectedMenu; // ���õ� �޴� ����� �����ϴ� ����
    int totalPrice = 0; // �� ����

    void printSelectedMenu(int p) { // ���õ� �޴� ��� �Լ�
        cout << "============[������ �޴�]============" << endl;
        totalPrice += p;
        for (const string& menu : selectedMenu) {
            cout << menu << endl;
        }
        cout << "�� ����: " << totalPrice << "��" << endl;
        cout << "=====================================" << endl;
        cout << "1. ����    2. �߰��ϱ�   : ";
        cin >> c;

        switch (c) {
        case 1:
            pr.price_menu(totalPrice);
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
                sb.selectedMenu.push_back("�Ұ�����(3500)");
                sb.printSelectedMenu(bulgogi); //�Ұ������� ���� price_menu�� ����
            }
            else { //�Ұ�� ���Ű� ǰ���̸�
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nshrimp > 0) { //���� ���Ű� ����������
                Nshrimp--; //���� ������ ���� -1 ����
                sb.selectedMenu.push_back("�������(3000)");
                sb.printSelectedMenu(shrimp); //��������� ���� price_menu�� ����
            }
            else { //���� ���Ű� ǰ���̸�
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nchicken > 0) { //ġŲ ���Ű� ����������
                Nchicken--; //ġŲ ������ ���� -1 ����
                sb.selectedMenu.push_back("ġŲ����(4000)");
                sb.printSelectedMenu(chicken); //ġŲ������ ���� price_menu�� ����
            }
            else { //ġŲ ���Ű� ǰ���̸�
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4: //3�� ������ ��
            if (Ncheese > 0) { //ġ�� ���Ű� ����������
                Ncheese--; //ġ�� ������ ���� -1 ����
                sb.selectedMenu.push_back("ġ�����(3700)");
                sb.printSelectedMenu(cheese); //ġ������� ���� price_menu�� ����
            }
            else { //ġ�� ���Ű� ǰ���̸�
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 5: //3�� ������ ��
            if (Negg > 0) { //���� ���Ű� ����������
                Negg--; //���� ������ ���� -1 ����
                sb.selectedMenu.push_back("���׹���(3200)");
                sb.printSelectedMenu(egg); //���׹����� ���� price_menu�� ����
            }
            else { //���� ���Ű� ǰ���̸�
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
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
                sb.selectedMenu.push_back("�Ұ�����(3500)");
            }
            else { //�Ұ�� ���Ű� ǰ���̸�
                cout << "�Ұ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nshrimp > 0) { //���� ���Ű� ����������
                Nshrimp--; //���� ������ ���� -1 ����
                total += shrimp; //��������� ���� price_menu�� ����
                sb.selectedMenu.push_back("�������(3000)");
            }
            else { //���� ���Ű� ǰ���̸�
                cout << "������Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nchicken > 0) { //ġŲ ���Ű� ����������
                Nchicken--; //ġŲ ������ ���� -1 ����
                total += chicken; //ġŲ������ ���� price_menu�� ����
                sb.selectedMenu.push_back("ġŲ����(4000)");
            }
            else { //ġŲ ���Ű� ǰ���̸�
                cout << "ġŲ���Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4: //3�� ������ ��
            if (Ncheese > 0) { //ġ�� ���Ű� ����������
                Ncheese--; //ġ�� ������ ���� -1 ����
                total += cheese; //ġ������� ���� price_menu�� ����
                sb.selectedMenu.push_back("ġ�����(3700)");
            }
            else { //ġ�� ���Ű� ǰ���̸�
                cout << "ġ����Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 5: //3�� ������ ��
            if (Negg > 0) { //���� ���Ű� ����������
                Negg--; //���� ������ ���� -1 ����
                total += egg; //���׹����� ���� price_menu�� ����
                sb.selectedMenu.push_back("���׹���(3200)");
            }
            else { //���� ���Ű� ǰ���̸�
                cout << "���׹��Ŵ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

void set_drink(int n) { //set_drink�Լ� �ۼ�
    int cola = 0, zero_cola = 0, soda = 0, orange = 500, water = 0;

    if (n == 0) //if�� n = 0 �϶�
    {
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
                sb.selectedMenu.push_back("�ݶ�(+0)");
            }
            else { //�ݶ�Ű� ǰ���̸�
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nzero_cola > 0) { //�����ݶ� ����������
                Nzero_cola--; //�����ݶ��� ���� -1 ����
                total += zero_cola; //�����ݶ��� ���� price_menu�� ����
                sb.selectedMenu.push_back("�����ݶ�(+0)");
            }
            else { //�����ݶ� ǰ���̸�
                cout << "���� �ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nsoda > 0) { //���̴ٰ� ����������
                Nsoda--; //���̴��� ���� -1 ����
                total += soda; //���̴��� ���� price_menu�� ����
                sb.selectedMenu.push_back("���̴�(+0)");
            }
            else { //���̴ٰ� ǰ���̸�
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4: //4�� ������ ��
            if (Norange > 0) { //�������ֽ��� ����������
                Norange--; //�������ֽ��� ���� -1 ����
                total += orange; //������ �ֽ��� ���� price_menu�� ����
                sb.selectedMenu.push_back("�������ֽ�(+500)");
            }
            else { //�������ֽ��� ǰ���̸�
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 5: //5�� ������ ��
            if (Nwater > 0) { //���� ����������
                Nwater--; //���� ���� -1 ����
                total += water; //���� ���� price_menu�� ����
                sb.selectedMenu.push_back("��(+0)");
            }
            else { //���� ǰ���̸�
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

void set_side(int n) { //set_side�Լ� �ۼ�
    int potato = 0, nuggets = 500, cstick = 500, cpotatoes = 1000;

    if (n == 0) //�ֹ� ����n�� 0�̸� ����
    {
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
                sb.selectedMenu.push_back("����Ƣ��(+0)");
                sb.printSelectedMenu(total);
            }
            else { //����Ƣ���� ǰ���̸�
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2:
            if (Nnuggets > 0) { //ġŲ�ʰ��� ����������
                Nnuggets--; //ġŲ�ʰ��� ���� -1 ����
                total += nuggets; //ġŲ�ʰ��� ���� price_menu�� ����
                sb.selectedMenu.push_back("ġŲ�ʰ�(+500)");
                sb.printSelectedMenu(total);
            }
            else { //ġŲ�ʰ��� ǰ���̸�
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3:
            if (Ncstick > 0) { //ġ�ƽ�� ����������
                Ncstick--; //ġ�ƽ�� ���� -1 ����
                total += cstick; //ġ�ƽ�� ���� price_menu�� ����
                sb.selectedMenu.push_back("ġ�ƽ(+500)");
                sb.printSelectedMenu(total);
            }
            else { //ġ�ƽ�� ǰ���̸�
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4:
            if (Ncpotatoes > 0) { //ġ����� ����������
                Ncpotatoes--; //ġ����� ���� -1 ����
                total += cpotatoes; //ġ����� ���� price_menu�� ����
                sb.selectedMenu.push_back("ġ���(+1000)");
                sb.printSelectedMenu(total);
            }
            else { //ġ��ڰ� ǰ���̸�
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default:
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
                sb.selectedMenu.push_back("����Ƣ��(1200)");
                sb.printSelectedMenu(potato); //����Ƣ�� ���� price_menu�� ����
            }
            else { //����Ƣ���� ǰ���̸�
                cout << "����Ƣ���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2:
            if (Nnuggets > 0) { //ġŲ�ʰ��� ����������
                Nnuggets--; //ġŲ�ʰ��� ���� -1 ����
                sb.selectedMenu.push_back("ġŲ�ʰ�(1500)");
                sb.printSelectedMenu(nuggets); //ġŲ�ʰ��� ���� price_menu�� ����
            }
            else { //ġŲ�ʰ��� ǰ���̸�
                cout << "ġŲ�ʰ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3:
            if (Ncstick > 0) { //ġ�ƽ�� ����������
                Ncstick--; //ġ�ƽ�� ���� -1 ����
                sb.selectedMenu.push_back("ġ�ƽ(1000)");
                sb.printSelectedMenu(cstick); //ġ�ƽ�� ���� price_menu�� ����
            }
            else { //ġ�ƽ�� ǰ���̸�
                cout << "ġ�ƽ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4:
            if (Ncpotatoes > 0) { //ġ��ڰ� ����������
                Ncpotatoes--; //ġ����� ���� -1 ����
                sb.selectedMenu.push_back("ġ���(2000)");
                sb.printSelectedMenu(cpotatoes); //ġ����� ���� price_menu�� ����
            }
            else { //ġ��ڰ� ǰ���̸�
                cout << "ġ��ڴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default:
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
                sb.selectedMenu.push_back("�ݶ�(1500)");
                sb.printSelectedMenu(cola); //�ݶ��� ���� price_menu�� ����
            }
            else { //�ݶ� ǰ���̸�
                cout << "�ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 2: //2�� ������ ��
            if (Nzero_cola > 0) { //�����ݶ� ����������
                Nzero_cola--; //�����ݶ��� ���� -1 ����
                sb.selectedMenu.push_back("�����ݶ�(1500)");
                sb.printSelectedMenu(zero_cola); //�����ݶ��� ���� price_menu�� ����
            }
            else { //�����ݶ� ǰ���̸�
                cout << "�����ݶ�� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 3: //3�� ������ ��
            if (Nsoda > 0) { //���̴ٰ� ����������
                Nsoda--; //���̴��� ���� -1 ����
                sb.selectedMenu.push_back("���̴�(1500)");
                sb.printSelectedMenu(soda); //���̴��� ���� price_menu�� ����
            }
            else { //���̴ٰ� ǰ���̸�
                cout << "���̴ٴ� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 4: //4�� ������ ��
            if (Norange > 0) { //�������ֽ��� ����������
                Norange--; //�������ֽ��� ���� -1 ����
                sb.selectedMenu.push_back("�������ֽ�(1200)");
                sb.printSelectedMenu(orange); //������ �ֽ��� ���� price_menu�� ����
            }
            else { //�������ֽ��� ǰ���̸�
                cout << "�������ֽ��� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        case 5: //5�� ������ ��
            if (Nwater > 0) { //���� ����������
                Nwater--; //���� ���� -1 ����
                sb.selectedMenu.push_back("��(1000)");
                sb.printSelectedMenu(water); //���� ���� price_menu�� ����
            }
            else { //���� ǰ���̸�
                cout << "���� ǰ���Դϴ�." << endl; //ǰ�� �޽��� ���
            }
            break; //switch�� ������
        default: //���� ���ڸ� �Է��Ѱ� �ƴ϶��
            cout << "�ٽ� �Է��ϼ���" << endl; // �ٽ� �Է��ϼ��� ���
        }

        break; //while�� ������
    }
}

//----------------------[������ ���]----------------------
void ShowMode() { // ������ ��� ȭ��
    cout << "============[������ ���]============" << endl;
    cout << "�����ڸ��" << endl;
    cout << "1. ��� ����" << endl;
    cout << "2. ���� ����" << endl;
    cout << "0. ���ư���" << endl;
    cout << "==================================\n";
}

void ShowRemain() { // ��� ����
    int choice; // ����ڰ� ������ �޴� ��ȣ
    int amount; // ��� �߰��ϰų� ���� ����

    cout << "============[��� ����]============" << endl; // ���� ���
    cout << "�� �޴��� ���� ������ ������ �����ϴ�." << endl; // ���� ���
    cout << "1) �Ұ�����: " << Nbulgogi << endl; // �Ұ������� ���� ���� ���
    cout << "2) �������: " << Nshrimp << endl; // ��������� ���� ���� ���
    cout << "3) ġŲ����: " << Nchicken << endl; // ġŲ������ ���� ���� ���
    cout << "4) ġ�����: " << Ncheese << endl; // ġ������� ���� ���� ���
    cout << "5) ���׹���: " << Negg << endl; // ���׹����� ���� ���� ���
    cout << "6) ����Ƣ��: " << Npotato << endl; // ����Ƣ���� ���� ���� ���
    cout << "7) ġŲ�ʰ�: " << Nnuggets << endl; // ġŲ�ʰ��� ���� ���� ���
    cout << "8) ġ�ƽ: " << Ncstick << endl; // ġ�ƽ�� ���� ���� ���
    cout << "9) ġ���: " << Ncpotatoes << endl; // ġ����� ���� ���� ���
    cout << "10) �ݶ�: " << Ncola << endl; // �ݶ��� ���� ���� ���
    cout << "11) �����ݶ�: " << Nzero_cola << endl; // �����ݶ��� ���� ���� ���
    cout << "12) ���̴�: " << Nsoda << endl; // ���̴��� ���� ���� ���
    cout << "13) �������ֽ�: " << Norange << endl; // �������ֽ��� ���� ���� ���
    cout << "14) ��: " << Nwater << endl; // ���� ���� ���� ���
    cout << "==================================" << endl; // ���� ���

    while (1) { // ���ѹݺ�
        cout << "��� �߰��ϰų� ���� �޴� ��ȣ�� �Է��ϼ���. (0�� ����)" << endl; // ���� ���
        cin >> choice; // choice�� �Է��� ���� �ֱ�
        if (choice == 0) { // choice�� 0�̸�
            cout << "������ ��带 �����մϴ�." << endl; // ���� ���
            hb.run(); //ù ���� ȭ�� �θ���
            break; // while�� ������
        }
        else if (choice < 1 || choice > 14) { // choice�� 1���� �۰ų� 14���� ũ��
            cout << "�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���." << endl; // ���� ���
            continue; // while���� ó������ ���ư���
        }
        else { // choice�� 1���� 14 ���̸�
            cout << "��� �߰��Ϸ��� ���, ���̷��� ������ �Է��ϼ���." << endl; // ���� ���
            cin >> amount; // amount�� �Է��� ���� �ֱ�
            switch (choice) { // switch���� choice �ֱ�
            case 1: // choice�� 1�̸�
                Nbulgogi += amount; // �Ұ������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 2: // choice�� 2�̸�
                Nshrimp += amount; // ��������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 3: // choice�� 3�̸�
                Nchicken += amount; // ġŲ������ ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 4: // choice�� 4�̸�
                Ncheese += amount; // ġ������� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 5: // choice�� 5�̸�
                Negg += amount; // ���׹����� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 6: // choice�� 6�̸�
                Npotato += amount; // ����Ƣ���� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 7: // choice�� 7�̸�
                Nnuggets += amount; // ġŲ�ʰ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 8: // choice�� 8�̸�
                Ncstick += amount; // ġ�ƽ�� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 9: // choice�� 9�̸�
                Ncpotatoes += amount; // ġ����� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 10: // choice�� 10�̸�
                Ncola += amount; // �ݶ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 11: // choice�� 11�̸�
                Nzero_cola += amount; // �����ݶ��� ���� ������ amount ���ϱ�
                break; // switch�� ������
            case 12: // choice�� 12�̸�
                Nsoda += amount; // ���̴��� ���� ������ amount ���ϱ�
            }
        }
    }
}

void ShowManageMode() { // ���� ���� ȭ��
    cout << "============[���� ����]============" << endl;
    cout << "1. ���� ����" << endl;
    cout << "2. ���̵� �޴� ����" << endl;
    cout << "3. ���� ����" << endl;
    cout << "4. ���� ����" << endl;
    cout << "0. ���ư���" << endl;
    cout << "==================================\n";
}
void ShowBurgerManage() { // ���� ���� ȭ�� 
    cout << "============[���� ����]============" << endl;
    cout << "�ܹ��� ����: " << sum1 << endl; // sum1
    cout << "0. ���ư���" << endl;
    cout << "==================================\n";
}

void ShowSideManage() { // ���̵� ���� ȭ��
    cout << "============[���̵� ����]============" << endl;
    cout << "���̵� ����: " << sum2 << endl; // sum2
    cout << "0. ���ư���" << endl;
    cout << "==================================\n";
}

void ShowDrinkManage() { // ���� ���� ȭ��
    cout << "============[���� ����]============" << endl;
    cout << "���� ����: " << sum3 << endl; // sum3
    cout << "0. ���ư���" << endl;
    cout << "==================================\n";
}

void ShowSumSale() { // �� �޴� ���� ���� ȭ��
    int sum4 = sum1 + sum2 + sum3;
    cout << "============[���� ����]============" << endl;
    cout << "���� ������: " << sum4 << "�� �Դϴ�."; // allsum
    cout << "==================================\n";
}

void manager() { //������ ��� �Լ�
    int ManageMode, SaleMode;
    ShowMode(); //������ ���
    while (1) { //���ѹݺ� �Լ�
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
            break;
        default: //�� ������ �ƴ϶��
            cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl;
        }

        if (ManageMode == 0) { //0 �Է½� �޴� �������� ���ư���
            hb.run();
            break; // Ż��
        }

        while (1) { //���ѹݺ� �Լ�

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
                break;
            default: //�� ������ �ƴ϶��
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
    hb.run(); //Ŭ���� CafeOrderSystem�� �ִ� run()�Լ� �θ�
    return 0;
}